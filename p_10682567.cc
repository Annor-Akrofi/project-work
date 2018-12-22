#include<bits/stdc++.h>
using namespace std;
#include"Student.cpp"


void enterCourses(map<string,int> &courses,string name)
{
	
	if(courses.find(name)!=courses.end())
	{

		courses[name]+=1;
	}

	else
	{
		courses[name]=1;
	}


}

void editCourses(map<string,int> &courses,string n1,string n2)
{
	map<string,int>::iterator it;
	it=courses.find(n1);
	if(it!=courses.end())
	{
		courses[n1]-=1;
		courses[n2]+=1;
	}
	else
	{
		cout<<"Entry not found"<<endl;
		return;

	}

}


void deleteCourses(map<string,int> &courses,string n1)
{
	map<string,int>::iterator it;
	it=courses.find(n1);
	if(it!=courses.end())
	{
		courses[n1]-=1;
	}
	else
	{
		cout<<"Entry not found"<<endl;
		return;

	}

}

void enterStudent(map<string,int> &student,string name)
{
	if(student.find(name)!=student.end())
	{

		student[name]+=1;
	}

	else
	{
		student[name]=1;
	}


}

void editStudent(map<string,int> &student,string n1,string n2)
{
	map<string,int>::iterator it;
	it=student.find(n1);
	if(it!=student.end())
	{
		student[n1]-=1;
		student[n2]+=1;
	}
	else
	{
		cout<<"Entry not found"<<endl;
		return;

	}

}


void deleteStudent(map<string,int> &student,string n1)
{
	map<string,int>::iterator it;
	it=student.find(n1);
	if(it!=student.end())
	{
		student[n1]-=1;
	}
	else
	{
		cout<<"Entry not found"<<endl;
		return;

	}

}

void enterStaff(map<string,int> &staff,string name)
{
	if(staff.find(name)!=staff.end())
	{

		staff[name]+=1;
	}

	else
	{
		staff[name]=1;
	}


}

void editStaff(map<string,int> &staff,string n1,string n2)
{
	map<string,int>::iterator it;
	it=staff.find(n1);
	if(it!=staff.end())
	{
		staff[n1]-=1;
		staff[n2]+=1;
	}
	else
	{
		cout<<"Entry not found"<<endl;
		return;

	}

}


void deleteStaff(map<string,int> &staff,string n1)
{
	map<string,int>::iterator it;
	it=staff.find(n1);
	if(it!=staff.end())
	{
		staff[n1]-=1;
	}
	else
	{
		cout<<"Entry not found"<<endl;
		return;

	}

}

void printCourse(map<string,int> &courses)
{
	map<string,int>::iterator it;
	for(it=courses.begin();it!=courses.end();it++)
	{
		for(int j=it->second;j>0;j--)
		{
			cout<<it->first<<endl;
		}
	}

}

void printStudent(map<string,int> &student)
{
	map<string,int>::iterator it;
	for(it=student.begin();it!=student.end();it++)
	{
		for(int j=it->second;j>0;j--)
		{
			cout<<it->first<<endl;
		}
	}

}

void printStaff(map<string,int> &staff)
{
	map<string,int>::iterator it;
	for(it=staff.begin();it!=staff.end();it++)
	{
		for(int j=it->second;j>0;j--)
		{
			cout<<it->first<<endl;
		}
	}

}

void enterDetails(vector<Student> &v,string name,string course,string grades,map<string,int>  &student,map<string,int> &courses)
{

	if(student[name]==0)
	{
		cout<<"Student does not exist"<<endl;
		return;
	}

	if(courses[course]==0)
	{
		cout<<"Course does not exist"<<endl;
		return;
	}


	Student s(name,course,grades);


	v.push_back(s);

}

void printRecord(vector<Student> &v,map<string,int> const &student,string name)
{
	if(student.find(name)==student.end())
	{
		cout<<"Student not found"<<endl;
		return;
	}

	for(int i=0;i<v.size();i++)
	{
		if(v[i].name==name)
		{
			cout<<v[i].name<<" "<<v[i].courses<<" "<<v[i].grades<<endl;
			return;
		}
	}

	cout<<"You haven't done the entry for the couse yet"<<endl;


}



int main(int argc, char const *argv[])
{
	/* code */
	map<string,int> courses;
	map<string,int> student;
	map<string,int> staff;

	vector<Student> v;

	

	cout<<"1.Enter the Courses"<<endl;
	cout<<"2.Edit the Courses"<<endl;
	cout<<"3.Delete the Courses"<<endl;
	cout<<"4.Enter the Student"<<endl;
	cout<<"5.Edit the Student"<<endl;
	cout<<"6.Delete the Student"<<endl;
	cout<<"7.Enter the Staff"<<endl;
	cout<<"8.Edit the Staff"<<endl;
	cout<<"9.Delete the Staff"<<endl;
	cout<<"10.Show the Courses"<<endl;
	cout<<"11.Show the Students"<<endl;
	cout<<"12.Show the Staff"<<endl;
	cout<<"13.Assign the courses and enter the grades"<<endl;
	cout<<"14.Print Academic Record of the student"<<endl;
	cout<<"15.Exit"<<endl;

	while(true)
	{
		cout<<"Enter your choice"<<endl;
		int i;
		string s,s1,s2;
		cin>>i;
		switch(i)
		{
			case 1:
			cout<<"Enter the course"<<endl;
			cin>>s;
			enterCourses(courses,s);
			break;

			case 2:
			cout<<"Enter the course you want to edit"<<endl;
			cin>>s;
			cout<<"Enter the course you want to edit it with"<<endl;
			
			cin>>s1;
			editCourses(courses,s,s1);
			break;

			case 3:
			cout<<"Enter the course you want to delete"<<endl;
			cin>>s;
			deleteCourses(courses,s);
			break;

			case 4:
			cout<<"Enter the Student"<<endl;
		
			cin>>s;
			enterStudent(student,s);
			break;

			case 5:
			cout<<"Enter the Student name you want to edit"<<endl;
			cin>>s;
			cout<<"Enter the Student name you want to edit it with"<<endl;
			
			cin>>s1;
			editStudent(student,s,s1);
			break;

			case 6:
			cout<<"Enter the Student you want to delete"<<endl;
			cin>>s;
			deleteStudent(student,s);
			break;

			case 7:
			cout<<"Enter the Staff"<<endl;
			
			cin>>s;
			enterStaff(staff,s);
			break;

			case 8:
			cout<<"Enter the staff you want to edit"<<endl;
			cin>>s;
			cout<<"Enter the staff you want to edit it with"<<endl;
			cin>>s1;
			
			editStaff(staff,s,s1);
			break;

			case 9:
			cout<<"Enter the staff you want to delete"<<endl;
			cin>>s;
			deleteStaff(staff,s);
			break;

			case 10:
			cout<<"Courses are:"<<endl;
			printCourse(courses);
			break;

			case 11:
			cout<<"Students are"<<endl;
			printStudent(student);
			break;

			case 12:
			cout<<"Staff are"<<endl;
			printStaff(staff);
			break;

			case 13:
			cout<<"Enter the student whose course and grades you want to enter"<<endl;
			cin>>s;
			cout<<"Enter the course and grade"<<endl;
			cin>>s1;
			cin>>s2;
			enterDetails(v,s,s1,s2,student,courses);
			break;

			case 14:
			cout<<"Enter the student whose record you want"<<endl;
			cin>>s;
			printRecord(v,student,s);
			break;

			default:
			exit(1);
			











		}


	}

class Student
{
public:

	string name;
	string courses;
	string grades;


	//Parametrized Constructor

	Student(string name,string courses,string grades)
	{
		this->name=name;
		this->courses=courses;
		this->grades=grades;
	}


};




	return 0;
}
