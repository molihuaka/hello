#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//struct �ṹ��ؼ���    stu�ṹ���ǩ 
//   
//struct stu	//����һ���ṹ������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//����ȫ�ֱ���
// 
//������
//typedef struct stu	//����һ���ṹ������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//
//
//int main()
//{
//	struct stu s1 = {"����",20,"123213123","��"}; //�����ṹ�����
//	stu s2 = {"dd",21,"ddd","ţ"};
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

typedef struct stu	//����һ���ṹ������
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};

void print(stu tmp)//�β�
{
	printf("name:%s\n", tmp.name);
}

void print2(struct stu* ps)//�β�//�����ʽ�ã�Ч����
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
}

int main()
{
	stu s = { "ls",44,"112132","d" };
	print(s);//�ṹ�崫��-ʵ��-��ֵ

	print2(&s);//�ṹ�崫��-ʵ��-��ַ
}