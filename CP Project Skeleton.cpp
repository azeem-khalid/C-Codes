/*  Member #1 ALEEM Zulfiqar (15k-2847) Section E
	Member #2 AZEEM Khalid (15K-2845) Section E
	Member #3 Syed Muhammad HUMRAAN (15k-2882) Section E
	Member #4 Syed FAROOQ Ahmed (15k-2166) Section D   */
//Project Name: Examination And Invigilation Management System 
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<fstream>
#include"University.h"
#include"Department.h"
#include"Student.h"
#include"Teacher.h"
#include"Exam_Room.h"
#include"TimeTable.h"

using namespace std;
class University;
class Department;
class Teacher;
class Student;
class CS_Department;
class EE_Department;
class BBA_Department;
class Exam_Room;
class TimeTable;
class Invigilator;



int main()
{
	int choice;
	Label:
	cout<<"Enter your choice"<<endl;	//WHO ARE YOU ?
	system("COLOR F1");
	cout<<"WELCOME TO FAST UNIVERSITY MANAGEMENT AND EXAMINATION MANAGAMENT SYSTEM"<<endl;
	cout<<"1-ADMIN "<<endl;
	cout<<"2-TEACHER "<<endl;
	cout<<"3-STUDENT "<<endl;
	cout<<"4-EXIT "<<endl;
	cin>>choice;
	
	switch(choice)
	{
		/* ADMINISTRATOR CAN ENTER ALL DATA */
		case 1:
		{
			string password;
			int choices;
			system("COLOR B3");
			system("cls");
			Label2:
			printf("Enter Your Password : ");
			cin>>password;
			if(password == "PROJECT" || password == "project")
			{	
				Label3:
				system("cls");
				cout<<"Enter your choice"<<endl;
				cout<<"WELCOME TO FAST UNIVERSITY MANAGEMENT AND EXAMINATION MANAGAMENT SYSTEM"<<endl;
				cout<<"1)SET THE DUTIES FOR THE TEACHERS"<<endl;
				cout<<"2)SET THE DATES OF CS EXAMINATION"<<endl;
				cout<<"3)SET THE DATES OF EE EXAMINATION"<<endl;
				cout<<"4)SET THE DATES OF BBA EXAMINATION"<<endl;
				cout<<"5)ADD RECORD OF TEACHERS"<<endl;
				cout<<"6)ADD RECORD OF STUDENTS"<<endl;
				cout<<"7)VIEW RECORD OF TEACHERS"<<endl;
				cout<<"8)VIEW RECORD OF STUDENTS"<<endl;
				cout<<"9)LOGOUT "<<endl;
				cin>>choices;
				switch(choices)
				{
					case 1:
					{
						system("cls");
						Invigilator in;
						in.askForTeachers();
						system("cls");
						Exam_Room er;
						er.askForClass_Room();
						er.askForExtension_Room();     //extension allocation left only
						system("cls");
						in.setTeachersDuties();
						system("cls");
						main();
						break;
						//in.viewteachersAvailable();		
					}
					case 2:
					{
						system("COLOR B0");
						system("cls");
						Department d;
						CS_Department cs;
						cs.setSubjectsForFreshmen();
						system("cls");
						cs.setSubjectsForSophomore();
						system("cls");
						cs.setSubjectsForJuniors();
						system("cls");
						cs.setSubjectsForSeniors();
						system("cls");
						TimeTable t1;
						t1.setExamDates();
						t1.setCSFreshmenTimeTable();
						t1.setCSSophomoreTimeTable();
						t1.setCSJuniorTimeTable();
						t1.setCSSeniorTimeTable();
						system("cls");
						main();
						break;
						
					}
					case 3:
					{
						system("COLOR B0");
						system("cls");
						Department d;
						EE_Department ee;
						ee.setSubjectsForFreshmen();
						system("cls");
						ee.setSubjectsForSophomore();
						system("cls");
						ee.setSubjectsForJuniors();
						system("cls");
						ee.setSubjectsForSeniors();
						system("cls");
						TimeTable t1;
						t1.setExamDates();
						t1.setEEFreshmenTimeTable();
						t1.setEESophomoreTimeTable();
						t1.setEEJuniorTimeTable();
						t1.setEESeniorTimeTable();
						system("cls");
						main();
						break;
					}
					case 4:
					{			
						system("COLOR B0");
						system("cls");
						Department d;
						BBA_Department bba;
						bba.setSubjectsForFreshmen();
						system("cls");
						bba.setSubjectsForSophomore();
						system("cls");
						bba.setSubjectsForJuniors();
						system("cls");
						bba.setSubjectsForSeniors();
						system("cls");
						TimeTable t1;
						t1.setExamDates();
						t1.setBBAFreshmenTimeTable();
						t1.setBBASophomoreTimeTable();
						t1.setBBAJuniorTimeTable();
						t1.setBBASeniorTimeTable();
						system("cls");
						main();
						break;
					}
					case 5:
					{
						system("COLOR B0");
						system("cls");
						Teacher t;
						t.teacherRecord();
						system("cls");
						main();
						break;
					}
					case 6:
					{
						system("COLOR B0");
						system("cls");
						Student s;
						s.studentRecord();
						system("cls");
						main();
						break;
					}
					case 7:
					{
						system("COLOR B0");
						system("cls");
						Teacher t2;
						t2.viewTeacherRecords();
						//system("cls");
						main();
						break;
					}
					case 8:
					{
						system("COLOR B0");
						system("cls");
						Student s;
						char ch;
						s.viewStudentRecords();
						cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
						cin>>ch; 
						system("cls");
						main();
						break;
						
					}
					case 9:
					{
						system("cls");
						main();
						break;	
					}
					default:
					{
						cout<<"Wrong Choice"<<endl;
						goto Label3;
						break;
					}
					
				}
			}
			else 
			{
				cout<<"Wrong Password "<<endl;
				goto Label2;
			}
			break;
			
		}
		/* TEACHER CAN ONLY VIEW TIMETABLE OF EXAMINATION AND VIEW HIS INVIGILATION DUTIES OF 
		   PARTICULAR EXAM */
		case 2:
		{
			int chooses;
			Label5:
			system("cls");
			system("COLOR B1");
			cout<<"Enter your choice"<<endl;
			cout<<"1)VIEW RECORD OF STUDENTS"<<endl;
			cout<<"2)VIEW INVIGILATOR DUTIES"<<endl;
            cout<<"3)VIEW CS TIMETABLE"<<endl;
			cout<<"4)VIEW EE TIMETABLE"<<endl;
			cout<<"5)VIEW BBA TIMETABLE"<<endl;
			cout<<"6)EXIT"<<endl;
			cin>>chooses;
			switch(chooses)
			{
				case 1:
				{
					system("cls");
					Student s;
					char ch;
					s.viewStudentRecords();
					cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
					cin>>ch; 
					system("cls");
					main();
					break;
				}
				case 2:
				{
					system("cls");
					char ch;
					Invigilator i;
					i.viewTeacherDuties();
					cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
					cin>>ch;
					system("cls");
					main();
					break;
				}
				case 3:
				{
					system("cls");
					char ch;
					TimeTable time;
					time.viewCSExamTimeTable();
					cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
					cin>>ch;
					system("cls");
					main();
					break;
				}
				case 4:
				{
					system("cls");
					char ch;
					TimeTable time;
					time.viewEEExamTimeTable();
					cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
					cin>>ch;
					system("cls");
					main();
					break;
				}
				case 5:
				{
					system("cls");
					char ch;
					TimeTable time;
					time.viewBBAExamTimeTable();
					cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
					cin>>ch;
					system("cls");
					main();
					break;
				}
				case 6:
				{
					system("cls");
					main();
					
				}
				default:
				{
					cout<<"Wrong Choice"<<endl;
					goto Label5;
					break;
				}
			}
			break;
		}
		
		/* STUDENT CAN ONLY VIEW TIMETABLE OF EXAMINATION AND VIEW HIS ROOM NUMBER OF 
		   PARTICULAR EXAM */
		case 3:
		{
			int choose;
			Label4:
			system("cls");
			system("COLOR F0");
			cout<<"Enter your choice"<<endl;
			cout<<"1)VIEW CS TIMETABLE"<<endl;
			cout<<"2)VIEW EE TIMETABLE"<<endl;
			cout<<"3)VIEW BBA TIMETABLE"<<endl;
			cout<<"4)EXAM ROOM FOR STUDENTS"<<endl;
			cout<<"5)EXIT"<<endl;
			cin>>choose;
			switch(choose)
			{
				case 1:
				{
					system("cls");
					char ch;
					TimeTable time;
					time.viewCSExamTimeTable();
					cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
					cin>>ch;
					system("cls");
					main();
					break;
				}
				case 2:
				{
					system("cls");
					char ch;
					TimeTable time;
					time.viewEEExamTimeTable();
					cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
					cin>>ch;
					system("cls");
					main();
					break;
				}
				case 3:
				{
					system("cls");
					char ch;
					TimeTable time;
					time.viewBBAExamTimeTable();
					cout<<"PRESS ANY KEY TO CONTINUE: "<<endl;
					cin>>ch;
					system("cls");
					main();
					break;
				}
				case 4:
				{
					break;
				}
				case 5:
				{
					system("cls");
					main();
				}
				default :
				{
					cout<<"Wrong Choice"<<endl;
					goto Label4;
					break;
				}
			}

			break;
		}
		
		case 4:
		{
			exit(0);
			break;	
		}
		default:
		{
			cout<<"Wrong Choice"<<endl;
			goto Label;
			break;
		}
	}

	return 0;
}
