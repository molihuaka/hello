#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <assert.h>


//F9-�����ϵ��ȡ���ϵ�
//F5-�������ԣ���������ֱ��������һ���ϵ�
//F10-����̣�ͨ����������һ������
//F11-����䣬ÿ��ִ��һ����䣬���Խ��뺯���ڲ�
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", i);
//	}
//	
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", 10-i);
//	}
//
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int num = 0;
//	int y = 1;
//	scanf("%d", & n);
//	for (i = 1; i <= n; i++)
//	{
//		y = y * i;
//		num = num + y;
//	}
//	printf("%d", num);
//
//}

//int main()
//{
//	//ջ������ʹ�øߵ�ַ���Ŀռ���ʹ�õ͵�ַ�Ŀռ�
//	//���������±��������ַ�ɵ͵��߱仯
//	//�ֲ����������ջ����-���������ַ�൱��1-4�м���2��3����vs��
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("ddd");
//		arr[i]=0;
//	}
//	return 0;
//}

//void my_strcpy(char* dest, char* src)//6��
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)//7��
//{
//	if (dest != NULL && src != NULL)//��ܴ���,����Ϊ��ָ��
//	{
//		while (*dest++ = *src++)//����++��ʹ����++
//		{
//
//		}
//	}
//}

//char* my_strcpy(char* dest,  char* src)//8��
//{
//	char* ret = dest;
//	assert(dest != NULL);//����ָ������
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)//����++��ʹ����++
//	{
//
//	}
//	//return dest-���Ƿ��غ���ĵ�ַ����
//	return ret;//����ǰ��ĵ�ַ
//}
//
//int main()
//{
//	char arr1[] = "########";
//	char arr2[] = "bit";
//	
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	 int num = 10;
//	 const int*  p = &num;//const ����ָ�������*��ߣ����ε���*p,Ҳ����˵����ͨ��p���ı�*p(num)��ֵ
//	int n = 100;
//	//int* const p = &num;//const ����ָ�������*�ұߣ����ε���ָ��p����p���ܸı���-����ַ
//	p = &n;
//	//*p = 20;
//}
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "adcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//
//�з�����
//����-ԭ���������붼��ͬ
//����-ԭ�����λ(����λ)Ϊ1����λ����������ʽ������-ԭ�����λ���䣬����λ��λȡ��������-����+1
//����������ڴ��е��ǲ���