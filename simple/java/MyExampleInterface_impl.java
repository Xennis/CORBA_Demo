public class MyExampleInterface_impl extends ExampleInterfacePOA {

	@Override
	public String send_message(String message) {
		System.out.println("Java Server: " + message);
		return "Message from Java server";
	}
}
