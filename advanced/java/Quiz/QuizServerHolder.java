package Quiz;

/**
* Quiz/QuizServerHolder.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from ../Quiz.idl
* Freitag, 11. Oktober 2013 17:49 Uhr MESZ
*/


/*
	 * Interface for the quiz server object. This interface provides all
	 * methods, that can used by clients to play the game.
	 */
public final class QuizServerHolder implements org.omg.CORBA.portable.Streamable
{
  public Quiz.QuizServer value = null;

  public QuizServerHolder ()
  {
  }

  public QuizServerHolder (Quiz.QuizServer initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = Quiz.QuizServerHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    Quiz.QuizServerHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return Quiz.QuizServerHelper.type ();
  }

}
