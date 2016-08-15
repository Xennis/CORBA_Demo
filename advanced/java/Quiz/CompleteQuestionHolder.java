package Quiz;

/**
* Quiz/CompleteQuestionHolder.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from ../Quiz.idl
* Freitag, 11. Oktober 2013 17:49 Uhr MESZ
*/


/*
	 * Data structure defining a complete question. It extends the question
	 * structure by adding (multiple) correct answers.
	 */
public final class CompleteQuestionHolder implements org.omg.CORBA.portable.Streamable
{
  public Quiz.CompleteQuestion value = null;

  public CompleteQuestionHolder ()
  {
  }

  public CompleteQuestionHolder (Quiz.CompleteQuestion initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = Quiz.CompleteQuestionHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    Quiz.CompleteQuestionHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return Quiz.CompleteQuestionHelper.type ();
  }

}