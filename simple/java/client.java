import org.omg.CORBA.ORB;
import org.omg.CosNaming.NamingContextExt;
import org.omg.CosNaming.NamingContextExtHelper;

public class client {

	/** Name is defined in the server.cpp */
	public static final String SERVER_NAME = "MyServerName";

	public static void main(String [] args) {

		try {

			// Create and initialize the CORBA ORB
			ORB orb = ORB.init(args, null);
 
			// Get the root naming context
			org.omg.CORBA.Object objRef = orb.resolve_initial_references("NameService");
			// Use NamingContextExt instead of NamingContext. This is 
			// Part of the Interoperable naming Service.  
			NamingContextExt ncRef = NamingContextExtHelper.narrow(objRef);
 
			// Resolve the Object Reference in Naming
			ExampleInterface service_server = ExampleInterfaceHelper.narrow(ncRef.resolve_str(SERVER_NAME));

			// Use service
			System.out.println("Java client is running ...");
			String server = service_server.send_message("Message from Java client");
			System.out.println("> Response from Server: " + server);

			// Destroy
			orb.destroy();

		} catch (org.omg.CORBA.ORBPackage.InvalidName exception) {
			exception.printStackTrace(System.out);
		} catch (org.omg.CosNaming.NamingContextPackage.NotFound exception) {
			exception.printStackTrace(System.out);
		} catch (org.omg.CosNaming.NamingContextPackage.CannotProceed exception) {
			exception.printStackTrace(System.out);
		} catch (org.omg.CosNaming.NamingContextPackage.InvalidName exception) {
			exception.printStackTrace(System.out);
		} catch (org.omg.CORBA.COMM_FAILURE exception) {
			exception.printStackTrace(System.out);
		} catch (Exception exception) {
			exception.printStackTrace(System.out);
		}
	}
}
