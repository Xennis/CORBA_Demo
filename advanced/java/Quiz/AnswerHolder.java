package Quiz;

/**
* Quiz/AnswerHolder.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from ../Quiz.idl
* Freitag, 11. Oktober 2013 17:49 Uhr MESZ
*/


/*
	 * Data structure defining a answer for a question.
	 */
public final class AnswerHolder implements org.omg.CORBA.portable.Streamable
{
  public Quiz.Answer value = null;

  public AnswerHolder ()
  {
  }

  public AnswerHolder (Quiz.Answer initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = Quiz.AnswerHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    Quiz.AnswerHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return Quiz.AnswerHelper.type ();
  }

}
