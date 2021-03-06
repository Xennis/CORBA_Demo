package Quiz;


/**
* Quiz/QuizServerOperations.java .
* Generated by the IDL-to-Java compiler (portable), version "3.2"
* from ../Quiz.idl
* Freitag, 11. Oktober 2013 17:49 Uhr MESZ
*/


/*
	 * Interface for the quiz server object. This interface provides all
	 * methods, that can used by clients to play the game.
	 */
public interface QuizServerOperations 
{

  /*
  		 * Returns a random question to the client. Note: return just a
  		 * question without the correct answers, that means return no
  		 * complete question.
  		 */
  boolean getQuestion (Quiz.QuestionHolder randomQuestion) throws Quiz.QuizServerPackage.QuizException;

  /*
  		 * Method for creating a new question on the server object. The
  		 * CompleteQuestion object is created on the client and sent to the
  		 * server by using this method. The server saves this question.
  		 *
  		 * The method returns the ID of the create question.
  		 */
  int insertQuestion (Quiz.CompleteQuestion question) throws Quiz.QuizServerPackage.QuizException;

  /*
  		 * Method for answering a question with a given question ID. The server
  		 * will check the answers and return true or false. The correct answers
  		 * should be written in the out correct parameters.
  		 */
  boolean answerQuestion (int questionId, char[] answer, Quiz.QuizServerPackage.answersIdsHolder correct) throws Quiz.QuizServerPackage.QuizException;

  /*
  		 * Deletes the question with the given ID.
  		 */
  int deleteQuestion (int questionId) throws Quiz.QuizServerPackage.QuizException;
} // interface QuizServerOperations
