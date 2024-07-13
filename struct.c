#include<stdio.h>
#include<string.h>
struct student{
	char name[60],email[60],RegNo[60],dob[60];
	int phoneNo,age;
	}student
	int main(){
	struct student;
	strcpy(student.name,"Wainaina stephen");
	strcpy(student.email,"wainainastephen@gmail.com");
	strcpy(student.RegNo,"BSE/O1/0056/2024");
	Strcpy(student.dob,"8/02/2003");
	student.phoneNo=21;
	printf("%s,%s,%s,%s%d,%d",
	student.name,student.email,student.RegNo,student.dob,student.name,student.age);
	return 0;
	}
