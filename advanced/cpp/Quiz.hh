// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __Quiz_hh__
#define __Quiz_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_Quiz
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_Quiz
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_Quiz
#endif






#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE Quiz

_CORBA_MODULE_BEG

#ifndef __Quiz_mAnswer__
#define __Quiz_mAnswer__

  class Answer;

  class Answer_Helper {
  public:
    static void add_ref(Answer*);
    static void remove_ref(Answer*);
    static void marshal(Answer*, cdrStream&);
    static Answer* unmarshal(cdrStream&);
  };

  typedef _CORBA_Value_Var    <Answer,Answer_Helper> Answer_var;
  typedef _CORBA_Value_Member <Answer,Answer_Helper> Answer_member;
  typedef _CORBA_Value_OUT_arg<Answer,Answer_Helper> Answer_out;

#endif // __Quiz_mAnswer__

  class Answer : 
    public virtual ::CORBA::ValueBase
  {
  public:  
    // Standard mapping
    typedef Answer*    _ptr_type;
    typedef Answer_var _var_type;

    static _ptr_type _downcast(::CORBA::ValueBase*);
    

#ifdef OMNI_HAVE_COVARIANT_RETURNS
    virtual Answer* _copy_value();
#else
    virtual ::CORBA::ValueBase* _copy_value();
#endif

    // Definitions in this scope
    

    // Operations and attributes
    

    // Accessors for public members
    virtual ::CORBA::Char id() const = 0;
    virtual void id(::CORBA::Char _value) = 0;


    virtual const char* sentence() const = 0;
    virtual void sentence(char* _value) = 0;
    virtual void sentence(const char* _value) = 0;
    virtual void sentence(const ::CORBA::String_var& _value) = 0;

    void sentence(const ::CORBA::String_member& _value) {
      sentence((const char*)_value);
    }


  

  protected:
    // Accessors for private members
    

  public:
    // omniORB internal
    virtual const char* _NP_repositoryId() const;
    virtual const char* _NP_repositoryId(::CORBA::ULong& _hashval) const;

    virtual const _omni_ValueIds* _NP_truncatableIds() const;

    virtual ::CORBA::Boolean _NP_custom() const;

    virtual void* _ptrToValue(const char* id);

    static void _NP_marshal(Answer*, cdrStream&);
    static Answer* _NP_unmarshal(cdrStream&);
    

    virtual void _PR_marshal_state(cdrStream&) const;
    virtual void _PR_unmarshal_state(cdrStream&);
    virtual void _PR_copy_state(Answer*);

    static _core_attr const char* _PD_repoId;

  protected:
    Answer();
    virtual ~Answer();

  private:
    // Not implemented
    Answer(const Answer &);
    void operator=(const Answer &);
  };

  class Answer_init : public ::CORBA::ValueFactoryBase
  {
  public:
    Answer_init();
    virtual ~Answer_init();

    virtual ::CORBA::ValueBase* create_for_unmarshal();

    static Answer_init* _downcast(::CORBA::ValueFactory _v);
    virtual void* _ptrToFactory(const char* _id);
  };

#ifndef __Quiz_mQuestion__
#define __Quiz_mQuestion__

  class Question;

  class Question_Helper {
  public:
    static void add_ref(Question*);
    static void remove_ref(Question*);
    static void marshal(Question*, cdrStream&);
    static Question* unmarshal(cdrStream&);
  };

  typedef _CORBA_Value_Var    <Question,Question_Helper> Question_var;
  typedef _CORBA_Value_Member <Question,Question_Helper> Question_member;
  typedef _CORBA_Value_OUT_arg<Question,Question_Helper> Question_out;

#endif // __Quiz_mQuestion__

  class Question : 
    public virtual ::CORBA::ValueBase
  {
  public:  
    // Standard mapping
    typedef Question*    _ptr_type;
    typedef Question_var _var_type;

    static _ptr_type _downcast(::CORBA::ValueBase*);
    

#ifdef OMNI_HAVE_COVARIANT_RETURNS
    virtual Question* _copy_value();
#else
    virtual ::CORBA::ValueBase* _copy_value();
#endif

    // Definitions in this scope
    class AnswerSeq_var;

    class AnswerSeq : public _CORBA_Unbounded_Sequence_Value< Answer, _CORBA_Value_Element< Answer, Answer_Helper > , Answer_Helper >  {
    public:
      typedef AnswerSeq_var _var_type;
      inline AnswerSeq() {}
      inline AnswerSeq(const AnswerSeq& _s)
        : _CORBA_Unbounded_Sequence_Value< Answer, _CORBA_Value_Element< Answer, Answer_Helper > , Answer_Helper > (_s) {}

      inline AnswerSeq(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_Value< Answer, _CORBA_Value_Element< Answer, Answer_Helper > , Answer_Helper > (_max) {}
      inline AnswerSeq(_CORBA_ULong _max, _CORBA_ULong _len, Answer** _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_Value< Answer, _CORBA_Value_Element< Answer, Answer_Helper > , Answer_Helper > (_max, _len, _val, _rel) {}

    

      inline AnswerSeq& operator = (const AnswerSeq& _s) {
        _CORBA_Unbounded_Sequence_Value< Answer, _CORBA_Value_Element< Answer, Answer_Helper > , Answer_Helper > ::operator=(_s);
        return *this;
      }
    };

    class AnswerSeq_out;

    class AnswerSeq_var {
    public:
      inline AnswerSeq_var() : _pd_seq(0) {}
      inline AnswerSeq_var(AnswerSeq* _s) : _pd_seq(_s) {}
      inline AnswerSeq_var(const AnswerSeq_var& _s) {
        if( _s._pd_seq )  _pd_seq = new AnswerSeq(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~AnswerSeq_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline AnswerSeq_var& operator = (AnswerSeq* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline AnswerSeq_var& operator = (const AnswerSeq_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new AnswerSeq;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline _CORBA_Value_Element< Answer, Answer_Helper >  operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline AnswerSeq* operator -> () { return _pd_seq; }
      inline const AnswerSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator AnswerSeq& () const { return *_pd_seq; }
#else
      inline operator const AnswerSeq& () const { return *_pd_seq; }
      inline operator AnswerSeq& () { return *_pd_seq; }
#endif
        
      inline const AnswerSeq& in() const { return *_pd_seq; }
      inline AnswerSeq&       inout()    { return *_pd_seq; }
      inline AnswerSeq*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline AnswerSeq* _retn() { AnswerSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class AnswerSeq_out;
      
    private:
      AnswerSeq* _pd_seq;
    };

    class AnswerSeq_out {
    public:
      inline AnswerSeq_out(AnswerSeq*& _s) : _data(_s) { _data = 0; }
      inline AnswerSeq_out(AnswerSeq_var& _s)
        : _data(_s._pd_seq) { _s = (AnswerSeq*) 0; }
      inline AnswerSeq_out(const AnswerSeq_out& _s) : _data(_s._data) {}
      inline AnswerSeq_out& operator = (const AnswerSeq_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline AnswerSeq_out& operator = (AnswerSeq* _s) {
        _data = _s;
        return *this;
      }
      inline operator AnswerSeq*&()  { return _data; }
      inline AnswerSeq*& ptr()       { return _data; }
      inline AnswerSeq* operator->() { return _data; }

      inline _CORBA_Value_Element< Answer, Answer_Helper >  operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      AnswerSeq*& _data;

    private:
      AnswerSeq_out();
      AnswerSeq_out& operator=(const AnswerSeq_var&);
    };

  

    // Operations and attributes
    

    // Accessors for public members
    virtual ::CORBA::Long id() const = 0;
    virtual void id(::CORBA::Long _value) = 0;


    virtual const char* sentence() const = 0;
    virtual void sentence(char* _value) = 0;
    virtual void sentence(const char* _value) = 0;
    virtual void sentence(const ::CORBA::String_var& _value) = 0;

    void sentence(const ::CORBA::String_member& _value) {
      sentence((const char*)_value);
    }


    virtual const AnswerSeq& answers() const = 0;
    virtual AnswerSeq& answers() = 0;
    virtual void answers(const AnswerSeq& _value) = 0;


  

  protected:
    // Accessors for private members
    

  public:
    // omniORB internal
    virtual const char* _NP_repositoryId() const;
    virtual const char* _NP_repositoryId(::CORBA::ULong& _hashval) const;

    virtual const _omni_ValueIds* _NP_truncatableIds() const;

    virtual ::CORBA::Boolean _NP_custom() const;

    virtual void* _ptrToValue(const char* id);

    static void _NP_marshal(Question*, cdrStream&);
    static Question* _NP_unmarshal(cdrStream&);
    

    virtual void _PR_marshal_state(cdrStream&) const;
    virtual void _PR_unmarshal_state(cdrStream&);
    virtual void _PR_copy_state(Question*);

    static _core_attr const char* _PD_repoId;

  protected:
    Question();
    virtual ~Question();

  private:
    // Not implemented
    Question(const Question &);
    void operator=(const Question &);
  };

  class Question_init : public ::CORBA::ValueFactoryBase
  {
  public:
    Question_init();
    virtual ~Question_init();

    virtual ::CORBA::ValueBase* create_for_unmarshal();

    static Question_init* _downcast(::CORBA::ValueFactory _v);
    virtual void* _ptrToFactory(const char* _id);
  };

#ifndef __Quiz_mCompleteQuestion__
#define __Quiz_mCompleteQuestion__

  class CompleteQuestion;

  class CompleteQuestion_Helper {
  public:
    static void add_ref(CompleteQuestion*);
    static void remove_ref(CompleteQuestion*);
    static void marshal(CompleteQuestion*, cdrStream&);
    static CompleteQuestion* unmarshal(cdrStream&);
  };

  typedef _CORBA_Value_Var    <CompleteQuestion,CompleteQuestion_Helper> CompleteQuestion_var;
  typedef _CORBA_Value_Member <CompleteQuestion,CompleteQuestion_Helper> CompleteQuestion_member;
  typedef _CORBA_Value_OUT_arg<CompleteQuestion,CompleteQuestion_Helper> CompleteQuestion_out;

#endif // __Quiz_mCompleteQuestion__

  class CompleteQuestion : 
    public virtual Question
  {
  public:  
    // Standard mapping
    typedef CompleteQuestion*    _ptr_type;
    typedef CompleteQuestion_var _var_type;

    static _ptr_type _downcast(::CORBA::ValueBase*);
    

#ifdef OMNI_HAVE_COVARIANT_RETURNS
    virtual CompleteQuestion* _copy_value();
#else
    virtual ::CORBA::ValueBase* _copy_value();
#endif

    // Definitions in this scope
    class CharSeq_var;

    class CharSeq : public _CORBA_Unbounded_Sequence_Char {
    public:
      typedef CharSeq_var _var_type;
      inline CharSeq() {}
      inline CharSeq(const CharSeq& _s)
        : _CORBA_Unbounded_Sequence_Char(_s) {}

      inline CharSeq(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_Char(_max) {}
      inline CharSeq(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::Char* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_Char(_max, _len, _val, _rel) {}

    

      inline CharSeq& operator = (const CharSeq& _s) {
        _CORBA_Unbounded_Sequence_Char::operator=(_s);
        return *this;
      }
    };

    class CharSeq_out;

    class CharSeq_var {
    public:
      inline CharSeq_var() : _pd_seq(0) {}
      inline CharSeq_var(CharSeq* _s) : _pd_seq(_s) {}
      inline CharSeq_var(const CharSeq_var& _s) {
        if( _s._pd_seq )  _pd_seq = new CharSeq(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~CharSeq_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline CharSeq_var& operator = (CharSeq* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline CharSeq_var& operator = (const CharSeq_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new CharSeq;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline ::CORBA::Char& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline CharSeq* operator -> () { return _pd_seq; }
      inline const CharSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator CharSeq& () const { return *_pd_seq; }
#else
      inline operator const CharSeq& () const { return *_pd_seq; }
      inline operator CharSeq& () { return *_pd_seq; }
#endif
        
      inline const CharSeq& in() const { return *_pd_seq; }
      inline CharSeq&       inout()    { return *_pd_seq; }
      inline CharSeq*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline CharSeq* _retn() { CharSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class CharSeq_out;
      
    private:
      CharSeq* _pd_seq;
    };

    class CharSeq_out {
    public:
      inline CharSeq_out(CharSeq*& _s) : _data(_s) { _data = 0; }
      inline CharSeq_out(CharSeq_var& _s)
        : _data(_s._pd_seq) { _s = (CharSeq*) 0; }
      inline CharSeq_out(const CharSeq_out& _s) : _data(_s._data) {}
      inline CharSeq_out& operator = (const CharSeq_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline CharSeq_out& operator = (CharSeq* _s) {
        _data = _s;
        return *this;
      }
      inline operator CharSeq*&()  { return _data; }
      inline CharSeq*& ptr()       { return _data; }
      inline CharSeq* operator->() { return _data; }

      inline ::CORBA::Char& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      CharSeq*& _data;

    private:
      CharSeq_out();
      CharSeq_out& operator=(const CharSeq_var&);
    };

  

    // Operations and attributes
    

    // Accessors for public members
    virtual const CharSeq& correctAnswers() const = 0;
    virtual CharSeq& correctAnswers() = 0;
    virtual void correctAnswers(const CharSeq& _value) = 0;


  

  protected:
    // Accessors for private members
    

  public:
    // omniORB internal
    virtual const char* _NP_repositoryId() const;
    virtual const char* _NP_repositoryId(::CORBA::ULong& _hashval) const;

    virtual const _omni_ValueIds* _NP_truncatableIds() const;

    virtual ::CORBA::Boolean _NP_custom() const;

    virtual void* _ptrToValue(const char* id);

    static void _NP_marshal(CompleteQuestion*, cdrStream&);
    static CompleteQuestion* _NP_unmarshal(cdrStream&);
    

    virtual void _PR_marshal_state(cdrStream&) const;
    virtual void _PR_unmarshal_state(cdrStream&);
    virtual void _PR_copy_state(CompleteQuestion*);

    static _core_attr const char* _PD_repoId;

  protected:
    CompleteQuestion();
    virtual ~CompleteQuestion();

  private:
    // Not implemented
    CompleteQuestion(const CompleteQuestion &);
    void operator=(const CompleteQuestion &);
  };

  class CompleteQuestion_init : public ::CORBA::ValueFactoryBase
  {
  public:
    CompleteQuestion_init();
    virtual ~CompleteQuestion_init();

    virtual ::CORBA::ValueBase* create_for_unmarshal();

    static CompleteQuestion_init* _downcast(::CORBA::ValueFactory _v);
    virtual void* _ptrToFactory(const char* _id);
  };

#ifndef __Quiz_mQuizServer__
#define __Quiz_mQuizServer__

  class QuizServer;
  class _objref_QuizServer;
  class _impl_QuizServer;
  
  typedef _objref_QuizServer* QuizServer_ptr;
  typedef QuizServer_ptr QuizServerRef;

  class QuizServer_Helper {
  public:
    typedef QuizServer_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_QuizServer, QuizServer_Helper> QuizServer_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_QuizServer,QuizServer_Helper > QuizServer_out;

#endif

  // interface QuizServer
  class QuizServer {
  public:
    // Declarations for this interface type.
    typedef QuizServer_ptr _ptr_type;
    typedef QuizServer_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    class QuizException : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member message;

    

      inline QuizException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      QuizException(const QuizException&);
      QuizException(const char* i_message);
      QuizException& operator=(const QuizException&);
      virtual ~QuizException();
      virtual void _raise() const;
      static QuizException* _downcast(::CORBA::Exception*);
      static const QuizException* _downcast(const ::CORBA::Exception*);
      static inline QuizException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      void operator>>=(cdrStream&) const ;
      void operator<<=(cdrStream&) ;

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    class answersIds_var;

    class answersIds : public _CORBA_Unbounded_Sequence_Char {
    public:
      typedef answersIds_var _var_type;
      inline answersIds() {}
      inline answersIds(const answersIds& _s)
        : _CORBA_Unbounded_Sequence_Char(_s) {}

      inline answersIds(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_Char(_max) {}
      inline answersIds(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::Char* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_Char(_max, _len, _val, _rel) {}

    

      inline answersIds& operator = (const answersIds& _s) {
        _CORBA_Unbounded_Sequence_Char::operator=(_s);
        return *this;
      }
    };

    class answersIds_out;

    class answersIds_var {
    public:
      inline answersIds_var() : _pd_seq(0) {}
      inline answersIds_var(answersIds* _s) : _pd_seq(_s) {}
      inline answersIds_var(const answersIds_var& _s) {
        if( _s._pd_seq )  _pd_seq = new answersIds(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~answersIds_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline answersIds_var& operator = (answersIds* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline answersIds_var& operator = (const answersIds_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new answersIds;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline ::CORBA::Char& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline answersIds* operator -> () { return _pd_seq; }
      inline const answersIds* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator answersIds& () const { return *_pd_seq; }
#else
      inline operator const answersIds& () const { return *_pd_seq; }
      inline operator answersIds& () { return *_pd_seq; }
#endif
        
      inline const answersIds& in() const { return *_pd_seq; }
      inline answersIds&       inout()    { return *_pd_seq; }
      inline answersIds*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline answersIds* _retn() { answersIds* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class answersIds_out;
      
    private:
      answersIds* _pd_seq;
    };

    class answersIds_out {
    public:
      inline answersIds_out(answersIds*& _s) : _data(_s) { _data = 0; }
      inline answersIds_out(answersIds_var& _s)
        : _data(_s._pd_seq) { _s = (answersIds*) 0; }
      inline answersIds_out(const answersIds_out& _s) : _data(_s._data) {}
      inline answersIds_out& operator = (const answersIds_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline answersIds_out& operator = (answersIds* _s) {
        _data = _s;
        return *this;
      }
      inline operator answersIds*&()  { return _data; }
      inline answersIds*& ptr()       { return _data; }
      inline answersIds* operator->() { return _data; }

      inline ::CORBA::Char& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      answersIds*& _data;

    private:
      answersIds_out();
      answersIds_out& operator=(const answersIds_var&);
    };

  
  };

  class _objref_QuizServer :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    ::CORBA::Boolean getQuestion(::Quiz::Question_out randomQuestion);
    ::CORBA::Long insertQuestion(::Quiz::CompleteQuestion* question);
    ::CORBA::Boolean answerQuestion(::CORBA::Long questionId, const ::Quiz::QuizServer::answersIds& answer, ::Quiz::QuizServer::answersIds_out correct);
    ::CORBA::Long deleteQuestion(::CORBA::Long questionId);

    inline _objref_QuizServer()  { _PR_setobj(0); }  // nil
    _objref_QuizServer(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_QuizServer();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_QuizServer(const _objref_QuizServer&);
    _objref_QuizServer& operator = (const _objref_QuizServer&);
    // not implemented

    friend class QuizServer;
  };

  class _pof_QuizServer : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_QuizServer() : _OMNI_NS(proxyObjectFactory)(QuizServer::_PD_repoId) {}
    virtual ~_pof_QuizServer();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_QuizServer :
    public virtual omniServant
  {
  public:
    virtual ~_impl_QuizServer();

    virtual ::CORBA::Boolean getQuestion(::Quiz::Question_out randomQuestion) = 0;
    virtual ::CORBA::Long insertQuestion(::Quiz::CompleteQuestion* question) = 0;
    virtual ::CORBA::Boolean answerQuestion(::CORBA::Long questionId, const ::Quiz::QuizServer::answersIds& answer, ::Quiz::QuizServer::answersIds_out correct) = 0;
    virtual ::CORBA::Long deleteQuestion(::CORBA::Long questionId) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


_CORBA_MODULE_END



_CORBA_MODULE POA_Quiz
_CORBA_MODULE_BEG

  class QuizServer :
    public virtual Quiz::_impl_QuizServer,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~QuizServer();

    inline ::Quiz::QuizServer_ptr _this() {
      return (::Quiz::QuizServer_ptr) _do_this(::Quiz::QuizServer::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_Quiz
_CORBA_MODULE_BEG

  class Answer :
    public virtual Quiz::Answer,
    public virtual ::CORBA::DefaultValueRefCountBase
  {
  public:
    Answer();
    Answer(::CORBA::Char _id, const char* _sentence);
    virtual ~Answer();

  public:
    virtual ::CORBA::Char id() const ;
    virtual void id(::CORBA::Char _value) ;


    virtual const char* sentence() const ;
    virtual void sentence(char* _value) ;
    virtual void sentence(const char* _value) ;
    virtual void sentence(const ::CORBA::String_var& _value) ;


  

  protected:
    

  private:
    ::CORBA::Char _pd_id;
    ::CORBA::String_member _pd_sentence;
  
  };

  class Question :
    public virtual Quiz::Question,
    public virtual ::CORBA::DefaultValueRefCountBase
  {
  public:
    Question();
    Question(::CORBA::Long _id, const char* _sentence, ::Quiz::Question::AnswerSeq& _answers);
    virtual ~Question();

  public:
    virtual ::CORBA::Long id() const ;
    virtual void id(::CORBA::Long _value) ;


    virtual const char* sentence() const ;
    virtual void sentence(char* _value) ;
    virtual void sentence(const char* _value) ;
    virtual void sentence(const ::CORBA::String_var& _value) ;


    virtual const ::Quiz::Question::AnswerSeq& answers() const ;
    virtual ::Quiz::Question::AnswerSeq& answers() ;
    virtual void answers(const ::Quiz::Question::AnswerSeq& _value) ;


  

  protected:
    

  private:
    ::CORBA::Long _pd_id;
    ::CORBA::String_member _pd_sentence;
    ::Quiz::Question::AnswerSeq _pd_answers;
  
  };

  class CompleteQuestion :
    public virtual Quiz::CompleteQuestion,
    public virtual Question
  {
  public:
    CompleteQuestion();
    CompleteQuestion(::CORBA::Long _id, const char* _sentence, ::Quiz::Question::AnswerSeq& _answers, ::Quiz::CompleteQuestion::CharSeq& _correctAnswers);
    virtual ~CompleteQuestion();

  public:
    virtual const ::Quiz::CompleteQuestion::CharSeq& correctAnswers() const ;
    virtual ::Quiz::CompleteQuestion::CharSeq& correctAnswers() ;
    virtual void correctAnswers(const ::Quiz::CompleteQuestion::CharSeq& _value) ;


  

  protected:
    

  private:
    ::Quiz::CompleteQuestion::CharSeq _pd_correctAnswers;
  
  };

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
Quiz::QuizServer::_marshalObjRef(::Quiz::QuizServer_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_Quiz
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_Quiz
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_Quiz
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_Quiz
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_Quiz
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_Quiz
#endif

#endif  // __Quiz_hh__

