/*дһ�������ܹ����ĳһѧ���ṹ����STU stu[10]����Ϣ��ÿ���˵��ܷ֡�ƽ���ֵ�ĳһ�ı��ļ��У�
����֮�������ʽ�ǣ���%s %s %d %d %d %d %d %5.2f����*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct student
{
	char name[30];
	char gender[10];
	int num;
	int age;
	int height;
	int grade;
	int total;
	float ave;
}stu[SIZE];
void output();
int main()
{
	output();
	return 0;
}
void output()
{
	int i;
	FILE* fp;
	fp = fopen("D:\\student\\input.txt", "w");
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%s", &stu[i].name, 30);
		scanf_s("%s", &stu[i].gender, 10);
		scanf_s("%d", &stu[i].num);
		scanf_s("%d", &stu[i].age);
		scanf_s("%d", &stu[i].height);
		scanf_s("%d", &stu[i].grade);
		scanf_s("%d", &stu[i].total);
		scanf_s("%f", &stu[i].ave);
		fprintf(fp,"%s %s %d %d %d %d %d %5.2f\n", stu[i].name, stu[i].gender, stu[i].num, stu[i].age, stu[i].height, stu[i].grade, stu[i].total, stu[i].ave);
	}
}