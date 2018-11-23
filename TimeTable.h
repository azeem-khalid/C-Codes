#ifndef TimeTable_H
#define TimeTable_H
#include<iostream>
#include<fstream>

using namespace std;

class TimeTable
{
	private:
		int examStartDate;
		//int examEndDate;
	public:
		TimeTable()
		{
			cout<<"Timetable Constructor called"<<endl;
		}
		void setExamDates()						//setting up examdates
		{
			int startdate;
			cout<<"Enter the starting Date of Examination: "<<endl;
			cin>>startdate;
			//cout<<"Enter the ending Date of Examination: "<<endl;
			examStartDate=startdate;
			//examEndDate=enddate;
		}							
		void setCSFreshmenTimeTable()											//set the timetable for Freshmans							
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsCSFreshmenDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsCSFreshmenDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}										
		void setCSSophomoreTimeTable()
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsCSSophomoreDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsCSSophomoreDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}										//set the timetable for Sophomores
		void setCSJuniorTimeTable()											//set the timetable for Juniors	
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsCSJuniorDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsCSJuniorDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}
		void setCSSeniorTimeTable()											//set the timetable for Seniors
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsCSSeniorDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsCSSeniorDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}
		void viewCSExamTimeTable()											//view the timetable for any batch
		{
			ifstream myfile3;
			string name;
			cout<<"FRESHMAN TIMETABLE: "<<endl;
			myfile3.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsCSFreshmenDepartment.txt");
			while(!myfile3.eof())
			{
				myfile3>>name;
				cout<<name<<endl;
			}
			ifstream myfile4;
			string name2;
			cout<<"Sophomore TIMETABLE: "<<endl;
			myfile4.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsCSSophomoreDepartment.txt");
			while(!myfile4.eof())
			{
				myfile4>>name2;
				cout<<name2<<endl;
			}
			ifstream myfile5;
			string name3;
			cout<<"JUNIOR TIMETABLE: "<<endl;
			myfile5.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsCSJuniorDepartment.txt");
			while(!myfile5.eof())
			{
				myfile5>>name3;
				cout<<name3<<endl;
			}
			ifstream myfile6;
			string name4;
			cout<<"SENIOR TIMETABLE: "<<endl;
			myfile6.open("E:\\2 Semester\\Computer Programming Lab\\Projects\\Project\\datesofSubjectsCSSeniorDepartment.txt");
			while(!myfile6.eof())
			{
				myfile6>>name4;
				cout<<name4<<endl;
			}
		}
		void setEEFreshmenTimeTable()											//set the timetable for Freshmans							
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsEEFreshmenDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsEEFreshmenDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}										
		void setEESophomoreTimeTable()
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsEESophomoreDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsEESophomoreDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}										//set the timetable for Sophomores
		void setEEJuniorTimeTable()											//set the timetable for Juniors	
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsEEJuniorDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsEEJuniorDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}
		void setEESeniorTimeTable()											//set the timetable for Seniors
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsEESeniorDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsEESeniorDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}
		void viewEEExamTimeTable()											//view the timetable for any batch
		{
			ifstream myfile3;
			string name;
			cout<<"FRESHMAN TIMETABLE: "<<endl;
			myfile3.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsEEFreshmenDepartment.txt");
			while(!myfile3.eof())
			{
				myfile3>>name;
				cout<<name<<endl;
			}
			ifstream myfile4;
			string name2;
			cout<<"Sophomore TIMETABLE: "<<endl;
			myfile4.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsEESophomoreDepartment.txt");
			while(!myfile4.eof())
			{
				myfile4>>name2;
				cout<<name2<<endl;
			}
			ifstream myfile5;
			string name3;
			cout<<"JUNIOR TIMETABLE: "<<endl;
			myfile5.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsEEJuniorDepartment.txt");
			while(!myfile5.eof())
			{
				myfile5>>name3;
				cout<<name3<<endl;
			}
			ifstream myfile6;
			string name4;
			cout<<"SENIOR TIMETABLE: "<<endl;
			myfile6.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsEESeniorDepartment.txt");
			while(!myfile6.eof())
			{
				myfile6>>name4;
				cout<<name4<<endl;
			}
		}
		void setBBAFreshmenTimeTable()											//set the timetable for Freshmans							
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsBBAFreshmenDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsBBAFreshmenDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}										
		void setBBASophomoreTimeTable()
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsBBASophomoreDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsBBASophomoreDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}										//set the timetable for Sophomores
		void setBBAJuniorTimeTable()											//set the timetable for Juniors	
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsBBAJuniorDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsBBAJuniorDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}
		void setBBASeniorTimeTable()											//set the timetable for Seniors
		{
			ifstream myfile;
			ofstream infile;
			infile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsBBASeniorDepartment.txt");
			myfile.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\SubjectsBBASeniorDepartment.txt");
			/*if(infile.fail())
			{
				cout<<"File not there"<<endl;
			}*/
			string name;
			int date=examStartDate;
			while(!myfile.eof())
			{
				myfile>>name;
				infile<<name<<" "<<date<<endl;
				date++;
			}
		}
		void viewBBAExamTimeTable()											//view the timetable for any batch
		{
			ifstream myfile3;
			string name;
			cout<<"FRESHMAN TIMETABLE: "<<endl;
			myfile3.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsBBAFreshmenDepartment.txt");
			while(!myfile3.eof())
			{
				myfile3>>name;
				cout<<name<<endl;
			}
			ifstream myfile4;
			string name2;
			cout<<"Sophomore TIMETABLE: "<<endl;
			myfile4.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsBBASophomoreDepartment.txt");
			while(!myfile4.eof())
			{
				myfile4>>name2;
				cout<<name2<<endl;
			}
			ifstream myfile5;
			string name3;
			cout<<"JUNIOR TIMETABLE: "<<endl;
			myfile5.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsBBAJuniorDepartment.txt");
			while(!myfile5.eof())
			{
				myfile5>>name3;
				cout<<name3<<endl;
			}
			ifstream myfile6;
			string name4;
			cout<<"SENIOR TIMETABLE: "<<endl;
			myfile6.open("C:\\Users\\Khalid\\Desktop\\CP Final Project\\datesofSubjectsBBASeniorDepartment.txt");
			while(!myfile6.eof())
			{
				myfile6>>name4;
				cout<<name4<<endl;
			}
		}
		~TimeTable()
		{
			
		}	
};

#endif
