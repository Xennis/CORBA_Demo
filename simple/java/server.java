import java.util.*;

import org.omg.CORBA.ORB;
import org.omg.CosNaming.NameComponent;
import org.omg.CosNaming.NamingContextExt;
import org.omg.CosNaming.NamingContextExtHelper;
import org.omg.PortableServer.POA;
import org.omg.PortableServer.POAHelper;
//import org.omg.PortableServer.POAManager;

public class server {

	/** Server name, clients needs to know this name */
	public static final String SERVER_NAME = "MyServerName";

	public static void main(String [] args) {

		try {

			// Create and initialize the CORBA ORB
			ORB orb = ORB.init(args, null);
 
			// Get reference to root POA and activate the POA Manager
			POA rootpoa = POAHelper.narrow(orb.resolve_initial_references("RootPOA"));
			rootpoa.the_POAManager().activate();
 
			// create servant and register it with the ORB
			MyExampleInterface_impl service = new MyExampleInterface_impl();
 
			// Get object reference from the servant
			org.omg.CORBA.Object ref = rootpoa.servant_to_reference(service);
			ExampleInterface href = ExampleInterfaceHelper.narrow(ref);
 
			// Get the root naming context
			org.omg.CORBA.Object objRef = orb.resolve_initial_references("NameService");
			// Use NamingContextExt which is part of the Interoperable
			// Naming Service (INS) specification.
			NamingContextExt ncRef = NamingContextExtHelper.narrow(objRef);
 
			// Bind the Object Reference in naming service
			NameComponent path[] = ncRef.to_name( SERVER_NAME );
			ncRef.rebind(path, href);
 
			System.out.println("Java server '" + SERVER_NAME + "'' is running ...");
 
			// Wait for remote invocations from clients
			orb.run();

			// destroy
			orb.destroy();

		} catch (org.omg.CORBA.UNKNOWN exception) {
			exception.printStackTrace(System.out);
		} catch (org.omg.CORBA.SystemException exception) {
			exception.printStackTrace(System.out);
		} catch (Exception exception) {
			exception.printStackTrace(System.out);
		}
	}
}
