#ifndef Department_H
#define Department_H
#include "Teacher.h"
#include "Student.h"
#include "Exam_Room.h"

using namespace std;
class Department
{
	private:
		Student* STU;
		Teacher* T;
		int noOfDepartment;
		int noOfCSStudents;
		int noOfEEStudents;
		int noOfBBAStudents;
	public:
	    Department()
	    {
	    	cout<<"Department Constructor "<<endl;
		}
	    Department(int Departments)													//setting the total number of Departments in the university
		{
			noOfDepartment=Departments;
		}												
		void setNoOfCSStudents(int CSStudents)										//setting the students in CS Department
		{
			noOfCSStudents=CSStudents;
		}
		void setNoOfEEStudents(int EEStudents)										//setting the students in EE Department
		{
			noOfEEStudents=EEStudents;
		}
		void setNoOfBBAStudents(int BBAStudents)									//setting the students in BBA Department
		{
			noOfBBAStudents=BBAStudents;
		}
		~Department()
		{
		}			
};

class CS_Department: public Department
{
	private:
		Exam_Room*ER;
		string * batch15Subjects;											//it holds the subjects of every batch
		string * batch14Subjects;
		string * batch13Subjects;
		string * batch12Subjects;
	protected:	
		int freshmenSubjectCount;
		int sophomoreSubjectCount;
		int juniorSubjectCount;
		int seniorSubjectCount;
	public:
		CS_Department()
		{
			cout<<"CS Department Constructor "<<endl;
		}
		
		void setSubjectsForFreshmen()									//getting the subjects of freshmens in CS Department
		{
			cout<<"Enter the Number of Subject of Freshmen : "<<endl;
			cin>>freshmenSubjectCount;
			batch15Subjects=new string[freshmenSubjectCount];
			ofstream myfile1;
			string subjectName;
			myfile1.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsCSFreshmenDepartment.txt"); 
			for (int i=0;i<freshmenSubjectCount;i++)
			{
				cout<<"Enter the Subject of Batch 15 : "<<endl;
				cin>>subjectName;
				batch15Subjects[i]=subjectName;
				myfile1<<subjectName<<endl;
			}
		}
		void setSubjectsForSophomore()									//getting the subjects of Sophomores in CS Department
		{
			cout<<"Enter the Number of Subject of Sophomore : "<<endl;
			cin>>sophomoreSubjectCount;
			batch14Subjects=new string[sophomoreSubjectCount];
			ofstream myfile2;
			myfile2.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsCSSophomoreDepartment.txt"); 
			for (int i=0;i<sophomoreSubjectCount;i++)
			{
				string subjectName;
				cout<<"Enter the Subject of Batch 14 : "<<endl;
				cin>>subjectName;
				batch14Subjects[i]=subjectName;
				myfile2<<subjectName<<endl;
			}
		}
		void setSubjectsForJuniors()									//getting the subjects of Juniors in CS Department
		{
			cout<<"Enter the Number of Subject of Juniors : "<<endl;
			cin>>juniorSubjectCount;
			batch13Subjects=new string[juniorSubjectCount];
			ofstream myfile3;
			myfile3.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsCSJuniorDepartment.txt"); 
			for (int i=0;i<juniorSubjectCount;i++)
			{
				string subjectName;
				cout<<"Enter the Subject of Batch 13 : "<<endl;
				cin>>subjectName;
				batch13Subjects[i]=subjectName;
				myfile3<<subjectName<<endl;
			}
		}
		void setSubjectsForSeniors()									//getting the subjects of Seniors in CS Department
		{
			cout<<"Enter the Number of Subject of Seniors : "<<endl;
			cin>>seniorSubjectCount;
			batch12Subjects=new string[seniorSubjectCount];
			ofstream myfile4;
			myfile4.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsCSSeniorDepartment.txt"); 
			for (int i=0;i<seniorSubjectCount;i++)
			{
				string subjectName;
				cout<<"Enter the Subject of Batch 12 : "<<endl;
				cin>>subjectName;
				batch12Subjects[i]=subjectName;
				myfile4<<subjectName<<endl;
			}
		}
		~CS_Department()
		{
			delete [] batch15Subjects;
			delete [] batch14Subjects;
			delete [] batch13Subjects;
			delete [] batch12Subjects;
		}
};

class EE_Department: public Department
{
private:
		Exam_Room*ER;
		string * batch15Subjects;											//it holds the subjects of every batch
		string * batch14Subjects;
		string * batch13Subjects;
		string * batch12Subjects;
	protected:	
		int freshmenSubjectCount;
		int sophomoreSubjectCount;
		int juniorSubjectCount;
		int seniorSubjectCount;
	public:
		EE_Department()
		{
			cout<<"EE Department Constructor "<<endl;
		}
		
		void setSubjectsForFreshmen()									//getting the subjects of freshmens in CS Department
		{
			cout<<"Enter the Number of Subject of Freshmen : "<<endl;
			cin>>freshmenSubjectCount;
			batch15Subjects=new string[freshmenSubjectCount];
			ofstream myfile1;
			string subjectName;
			myfile1.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsEEFreshmenDepartment.txt"); 
			for (int i=0;i<freshmenSubjectCount;i++)
			{
				cout<<"Enter the Subject of Batch 15 : "<<endl;
				cin>>subjectName;
				batch15Subjects[i]=subjectName;
				myfile1<<subjectName<<endl;
			}
		}
		void setSubjectsForSophomore()									//getting the subjects of Sophomores in CS Department
		{
			cout<<"Enter the Number of Subject of Sophomore : "<<endl;
			cin>>sophomoreSubjectCount;
			batch14Subjects=new string[sophomoreSubjectCount];
			ofstream myfile2;
			myfile2.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsEESophomoreDepartment.txt"); 
			for (int i=0;i<sophomoreSubjectCount;i++)
			{
				string subjectName;
				cout<<"Enter the Subject of Batch 14 : "<<endl;
				cin>>subjectName;
				batch14Subjects[i]=subjectName;
				myfile2<<subjectName<<endl;
			}
		}
		void setSubjectsForJuniors()									//getting the subjects of Juniors in CS Department
		{
			cout<<"Enter the Number of Subject of Juniors : "<<endl;
			cin>>juniorSubjectCount;
			batch13Subjects=new string[juniorSubjectCount];
			ofstream myfile3;
			myfile3.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsEEJuniorDepartment.txt"); 
			for (int i=0;i<juniorSubjectCount;i++)
			{
				string subjectName;
				cout<<"Enter the Subject of Batch 13 : "<<endl;
				cin>>subjectName;
				batch13Subjects[i]=subjectName;
				myfile3<<subjectName<<endl;
			}
		}
		void setSubjectsForSeniors()									//getting the subjects of Seniors in CS Department
		{
			cout<<"Enter the Number of Subject of Seniors : "<<endl;
			cin>>seniorSubjectCount;
			batch12Subjects=new string[seniorSubjectCount];
			ofstream myfile4;
			myfile4.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsEESeniorDepartment.txt"); 
			for (int i=0;i<seniorSubjectCount;i++)
			{
				string subjectName;
				cout<<"Enter the Subject of Batch 12 : "<<endl;
				cin>>subjectName;
				batch12Subjects[i]=subjectName;
				myfile4<<subjectName<<endl;
			}
		}
		~EE_Department()
		{
			delete [] batch15Subjects;
			delete [] batch14Subjects;
			delete [] batch13Subjects;
			delete [] batch12Subjects;
		}
};

class BBA_Department: public Department
{
	private:
		Exam_Room*ER;
		string * batch15Subjects;											//it holds the subjects of every batch
		string * batch14Subjects;
		string * batch13Subjects;
		string * batch12Subjects;
	protected:	
		int freshmenSubjectCount;
		int sophomoreSubjectCount;
		int juniorSubjectCount;
		int seniorSubjectCount;
	public:
		BBA_Department()
		{
			cout<<"BBA Department Constructor "<<endl;
		}
		
		void setSubjectsForFreshmen()									//getting the subjects of freshmens in CS Department
		{
			cout<<"Enter the Number of Subject of Freshmen : "<<endl;
			cin>>freshmenSubjectCount;
			batch15Subjects=new string[freshmenSubjectCount];
			ofstream myfile1;
			string subjectName;
			myfile1.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsBBAFreshmenDepartment.txt"); 
			for (int i=0;i<freshmenSubjectCount;i++)
			{
				cout<<"Enter the Subject of Batch 15 : "<<endl;
				cin>>subjectName;
				batch15Subjects[i]=subjectName;
				myfile1<<subjectName<<endl;
			}
		}
		void setSubjectsForSophomore()									//getting the subjects of Sophomores in CS Department
		{
			cout<<"Enter the Number of Subject of Sophomore : "<<endl;
			cin>>sophomoreSubjectCount;
			batch14Subjects=new string[sophomoreSubjectCount];
			ofstream myfile2;
			myfile2.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsBBASophomoreDepartment.txt"); 
			for (int i=0;i<sophomoreSubjectCount;i++)
			{
				string subjectName;
				cout<<"Enter the Subject of Batch 14 : "<<endl;
				cin>>subjectName;
				batch14Subjects[i]=subjectName;
				myfile2<<subjectName<<endl;
			}
		}
		void setSubjectsForJuniors()									//getting the subjects of Juniors in CS Department
		{
			cout<<"Enter the Number of Subject of Juniors : "<<endl;
			cin>>juniorSubjectCount;
			batch13Subjects=new string[juniorSubjectCount];
			ofstream myfile3;
			myfile3.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsBBAJuniorDepartment.txt"); 
			for (int i=0;i<juniorSubjectCount;i++)
			{
				string subjectName;
				cout<<"Enter the Subject of Batch 13 : "<<endl;
				cin>>subjectName;
				batch13Subjects[i]=subjectName;
				myfile3<<subjectName<<endl;
			}
		}
		void setSubjectsForSeniors()									//getting the subjects of Seniors in CS Department
		{
			cout<<"Enter the Number of Subject of Seniors : "<<endl;
			cin>>seniorSubjectCount;
			batch12Subjects=new string[seniorSubjectCount];
			ofstream myfile4;
			myfile4.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsBBASeniorDepartment.txt"); 
			for (int i=0;i<seniorSubjectCount;i++)
			{
				string subjectName;
				cout<<"Enter the Subject of Batch 12 : "<<endl;
				cin>>subjectName;
				batch12Subjects[i]=subjectName;
				myfile4<<subjectName<<endl;
			}
		}
		~BBA_Department()
		{
			delete [] batch15Subjects;
			delete [] batch14Subjects;
			delete [] batch13Subjects;
			delete [] batch12Subjects;
		}	
};

#endif
