package Quiz;


/**
* Quiz/CompleteQuestionDefaultFactory.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from ../Quiz.idl
* Freitag, 11. Oktober 2013 17:49 Uhr MESZ
*/


/*
	 * Data structure defining a complete question. It extends the question
	 * structure by adding (multiple) correct answers.
	 */
public class CompleteQuestionDefaultFactory implements org.omg.CORBA.portable.ValueFactory {

  public java.io.Serializable read_value (org.omg.CORBA_2_3.portable.InputStream is)
  {
    return is.read_value(new CompleteQuestionImpl ());
  }
}