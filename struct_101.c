#include <stdio.h>

int main()
{
	struct student
	{
		char name[20];
		int rollno;
		float marks;
	};
	struct student stu1 = {"oliver",20, 56.9}, stu2;
	stu2 = stu1;
	printf("stu1: %s   %d  %.2f\n",stu1.name, stu1.rollno, stu1.marks);	
	printf("stu1: %s   %d  %.2f\n",stu2.name, stu2.rollno, stu2.marks);

	return 0;
}
