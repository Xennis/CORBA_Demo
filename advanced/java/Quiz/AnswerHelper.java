package Quiz;


/**
* Quiz/AnswerHelper.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from ../Quiz.idl
* Freitag, 11. Oktober 2013 17:49 Uhr MESZ
*/


/*
	 * Data structure defining a answer for a question.
	 */
abstract public class AnswerHelper
{
  private static String  _id = "IDL:Quiz/Answer:1.0";


  public static void insert (org.omg.CORBA.Any a, Quiz.Answer that)
  {
    org.omg.CORBA.portable.OutputStream out = a.create_output_stream ();
    a.type (type ());
    write (out, that);
    a.read_value (out.create_input_stream (), type ());
  }

  public static Quiz.Answer extract (org.omg.CORBA.Any a)
  {
    return read (a.create_input_stream ());
  }

  private static org.omg.CORBA.TypeCode __typeCode = null;
  private static boolean __active = false;
  synchronized public static org.omg.CORBA.TypeCode type ()
  {
    if (__typeCode == null)
    {
      synchronized (org.omg.CORBA.TypeCode.class)
      {
        if (__typeCode == null)
        {
          if (__active)
          {
            return org.omg.CORBA.ORB.init().create_recursive_tc ( _id );
          }
          __active = true;
          org.omg.CORBA.ValueMember[] _members0 = new org.omg.CORBA.ValueMember[2];
          org.omg.CORBA.TypeCode _tcOf_members0 = null;
          // ValueMember instance for id
          _tcOf_members0 = org.omg.CORBA.ORB.init ().get_primitive_tc (org.omg.CORBA.TCKind.tk_char);
          _members0[0] = new org.omg.CORBA.ValueMember ("id", 
              "", 
              _id, 
              "", 
              _tcOf_members0, 
              null, 
              org.omg.CORBA.PUBLIC_MEMBER.value);
          // ValueMember instance for sentence
          _tcOf_members0 = org.omg.CORBA.ORB.init ().create_string_tc (0);
          _members0[1] = new org.omg.CORBA.ValueMember ("sentence", 
              "", 
              _id, 
              "", 
              _tcOf_members0, 
              null, 
              org.omg.CORBA.PUBLIC_MEMBER.value);
          __typeCode = org.omg.CORBA.ORB.init ().create_value_tc (_id, "Answer", org.omg.CORBA.VM_NONE.value, null, _members0);
          __active = false;
        }
      }
    }
    return __typeCode;
  }

  public static String id ()
  {
    return _id;
  }

  public static Quiz.Answer read (org.omg.CORBA.portable.InputStream istream)
  {
    return (Quiz.Answer)((org.omg.CORBA_2_3.portable.InputStream) istream).read_value (id ());
  }

  public static void write (org.omg.CORBA.portable.OutputStream ostream, Quiz.Answer value)
  {
    ((org.omg.CORBA_2_3.portable.OutputStream) ostream).write_value (value, id ());
  }


}
