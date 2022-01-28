#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//struct 结构体关键字    stu结构体标签 
//   
//struct stu	//定义一个结构体类型
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//三个全局变量
// 
//重命名
//typedef struct stu	//定义一个结构体类型
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//
//
//int main()
//{
//	struct stu s1 = {"张三",20,"123213123","男"}; //创建结构体变量
//	stu s2 = {"dd",21,"ddd","牛"};
//
//	return 0;
//}

//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct s s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "dd";
//	struct T t = { "hh",{100,'w',"hhhhh",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%s\n", t.pc);
//}

typedef struct stu	//定义一个结构体类型
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};

void print(stu tmp)//形参
{
	printf("name:%s\n", tmp.name);
}

void print2(struct stu* ps)//形参//这个方式好，效果好
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
}

int main()
{
	stu s = { "ls",44,"112132","d" };
	print(s);//结构体传参-实参-传值

	print2(&s);//结构体传参-实参-传址
}