#ifndef Header_h
#define Header_h
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//1to5
struct Student
{
	string no;
	string student_id;
	string first_name;
	string last_name;
	string gender;
	string day_of_birth;
	string month_of_birth;
	string year_of_birth;
	string social_id;
};

struct Node
{
	Student* data;
	Node* next;
};

struct Class
{
	char* class_name;
	Node* head;
	Node* tail;
};

struct Node_class
{
	Class* data;
	Node_class* next;
};

struct School_year
{
	int theBeginningYear;
	int theEndYear;
	Node_class* head;
	Node_class* tail;
};

struct course
{
	//start date-end date
	int startDay0;
	int startMonth0;
	//int endYear0;
	int endDay0;
	int endMonth0;
	//session
	int firstDay;
	int firstSession;
	int secondDay;
	int secondSession;
	// info course
	char* courseID;
	char* courseName;
	char* teacherName;
	int numberCredits;
	int maxStudentCourse;
};

struct NODE
{
	course* data;
	NODE* pNext;
};

struct Semester
{
	int createASemester;
	int schoolYear;
	int startDay;
	int startMonth;
	int endDay;
	int endMonth;
	NODE* pHead;
	NODE* pTail;
};

struct listStudent
{
	Node* pHead;
	Node* pTail;
};

struct listCourse
{
	NODE* pHead;
	NODE* pTail;
};

struct Scoreboard
{
	float finalMarks;
	float GPA;
	float overallGPA;
};

//login
void registerAAcoount();
bool checkLoggin(string username, string password);
void changePassword();


//1to5
bool checkDate(string day, string month, string year);
void enterTheNameOfClass(char*& name);
void enterTheNameOfClass(char*& name);
Student* infoStudent();
Node* createNode(Student* data);
Node_class* createNodeClass(Class* data);
void createSchoolYear(School_year*& sy);
void createClass(School_year*& school, Class*& classes);
void addClassToSchoolYear(School_year*& sy, Class* cl);
void addStudentToClass(Class*& cl, Student* st);
void inputClass(School_year*& sy);
void readToFile(char* file_name, School_year*& sy, char* name);
void inputStudentToClass(School_year*& school);
void ouputinfostudent(Student* st);//************


//6to11
NODE* createNodeCourse(course* data);
void createASemester(Semester*& se);
void createSemester(Semester*& se);
void addTail(Semester*& se, course* c);


//12to20
void initListStudent(listStudent& ls);
void enrollACourse(Semester*& se, Student*& st, listStudent& ls, listCourse& lc);

#endif