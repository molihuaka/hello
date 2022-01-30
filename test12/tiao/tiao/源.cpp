#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <assert.h>


//F9-创建断点和取消断点
//F5-启动调试，经常用来直接跳到下一个断点
//F10-逐过程，通常用来处理一个过程
//F11-逐语句，每次执行一个语句，可以进入函数内部
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
//	//栈区是先使用高地址处的空间再使用低地址的空间
//	//数组随着下标的增长地址由低到高变化
//	//局部变量存放在栈区中-相隔两个地址相当于1-4中间有2，3仅在vs中
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("ddd");
//		arr[i]=0;
//	}
//	return 0;
//}

//void my_strcpy(char* dest, char* src)//6分
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)//7分
//{
//	if (dest != NULL && src != NULL)//规避错误,不能为空指针
//	{
//		while (*dest++ = *src++)//后置++先使用再++
//		{
//
//		}
//	}
//}

//char* my_strcpy(char* dest,  char* src)//8分
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言指出错误
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)//后置++先使用再++
//	{
//
//	}
//	//return dest-这是返回后面的地址错误
//	return ret;//返回前面的地址
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
//	 const int*  p = &num;//const 放在指针变量的*左边，修饰的是*p,也就是说不能通过p来改变*p(num)的值
//	int n = 100;
//	//int* const p = &num;//const 放在指针变量的*右边，修饰的是指针p本身，p不能改变了-即地址
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
//有符号数
//正数-原、反、补码都相同
//负数-原码最高位(符号位)为1其余位按照正数形式，反码-原码符号位不变，其他位按位取反，补码-反码+1
//整数存放在内存中的是补码