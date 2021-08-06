#include<iostream>
#include<string>

using namespace std;
int guess;
int total;

class question
{
private:
	string question_text;
	string answer_1;
	string answer_2;
	string answer_3;
	string answer_4;
	
	int correct_answer;
	int question_score;
public:
	void setValues(string, string, string, string, string, int, int);	
	void askquestion();
};

int main()
{
	cout << "****** WELCOME TO THE C++ QUIZ ***********";
	cout <<endl;
	cout << "press enter to start the quiz" << endl;
	cin.get();
	
	string name;
	int age;
	
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter your age : ";
	cin>>age;
	
	string respond;
	
	cout<<"type 'yes' to start the exam"<<endl;
	cin>>respond;
	
	if (respond == "yes")
	{
		cout<<"good luck"<<endl;
	}
		else{
			cout<<"goodbye"<<endl;
			return 0;
		}
	question q1;
	question q2;
	question q3;
	question q4;
	question q5;
	question q6;
	question q7;
	question q8;
	question q9;
	question q10;
	
	cout<<endl;
	cout<<"choose the option number"<<endl;
	
	q1.setValues("which data type is used ti create a variable that should store text?",
				"myString",
				"Txt",
				"String",
				"string",
				4,
				10);
	q2.setValues("Which of the following is a correct identifier in C++?",
				"7var_name",
				"7VARNAME",
				"VAR_1234",
				"$var_name",
				3,
				10);
	q3.setValues("Which of the following is called address operator?",
				"*",
				"&",
				"_",
				"%",
				2,
				10);
	q4.setValues("Which of the following is used for comments in C++?",
				"// comment",
				"/* comment */",
				"both // comment or /* comment */",
				"// comment */",
				3,
				10);
	q5.setValues("What are the actual parameters in C++?",
				"Parameters with which functions are called",
 				"Parameters which are used in the definition of a function",
 				"Variables other than passed parameters in a function",
 				"Variables that are never used in the function",
				 1,
				 10);
	q6.setValues("What are the formal parameters in C++?",
 				"Parameters with which functions are called",
 				"Parameters which are used in the definition of the function",
 				"Variables other than passed parameters in a function",
 				"Variables that are never used in the function",
				 1,
				 10);
	q7.setValues("Which function is used to write a single character to console in C++?",
 				"cout.put(ch)",
 				"cout.putline(ch)",
 				"write(ch)",
 				"printf(ch)",
				 2,
				 10);
	q8.setValues("Which of the followig escape sequence represents carriage return?",
 				"\r",
 				"\n",
 				"\n\r",
 				"\n",
				 1,
				 10);
	q9.setValues("Which of the following escape sequence represents tab?",
 				"\t",
 				"\t\r",
 				"\b",
 				"\a",
				 1,
				 10);
	q10.setValues("Which of the following is called extraction/get from operator?",				
				"<<",
 				">>",
 				">",
 				"<",
				 2,
				 10);
	q1.askquestion();
	q2.askquestion();
	q3.askquestion();
	q4.askquestion();
	q5.askquestion();
	q6.askquestion();
	q7.askquestion();
	q8.askquestion();
	q9.askquestion();
	q10.askquestion();
	
	cout<<"yourscore is : "<<total<<" of 100";
	cout<<endl;
	if (total >= 70)
	{
		cout<<"congratulations";
		cout<<"you passed he quiz";
	}
	else
	{
		cout<<"good luck next time"<<endl;
		cout<<"you failed the quiz";
		cout<<endl;
	}
	return 0;
}
void question::setValues (string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
	question_text = q;
	answer_1 = a1;
	answer_2 = a2;
	answer_3 = a3;
	answer_4 = a4;
	correct_answer = ca;
	question_score = pa;
}
void question::askquestion()
{
	cout<<endl;
	cout<< question_text <<endl;
	cout<< "1." <<answer_1<<endl;
	cout<< "2." <<answer_2<<endl;
	cout<< "3." <<answer_3<<endl;
	cout<< "4." <<answer_4<<endl;
	cout<<endl;
	
	cout<<"enter your answer : "<<endl;
	cin>>guess;
	if(guess == correct_answer)
	{
		cout<<endl;
		cout<<"your answer is correct"<<endl;
		total=total+question_score;
		cout<<"score : "<<question_score << " out of "<<endl;
		cout<<endl;
	}
	else
	{
		cout<<endl;
		cout<<"your answer is wrong"<<endl;
		cout<<"correct answer is : " <<correct_answer <<endl;
		cout<<endl;
	}
}
