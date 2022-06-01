#include <stdio.h>

int main() //在屏幕上输出你好世界 
{
	printf("hello world你好\n");
	return 0;
}


int main()  //打印格式
{
	//short n=...
	//printf("%d\n", n );

	//int age=20;
	//printf("%d\n", age);

	//long num=100;
	//printf("%d\n", num);

	//char 字符数据
	//short 短整型
	//int  整型
	//long 长整型 
	//long long 更长整型 
	//float  单精度浮点数，小数点后5位以内 
	//double  双精度浮点数，小数点后超过5位 


	//   %c 打印字符 
	//   %d 打印整型
	//   %f 打印单精度浮点数字-打小数
	//   %lf 打印双精度浮点数 
	//   %p 以地址的形式打印 
	//   %x 打印16进制数字 
	//   %o  

	char ch = 'A';
	printf("%c\n", ch);

	return 0;
}

int main()  //各类型的库存占用
{
	//bit比特位---byte字节---kb---mb---gb---tb---pb
	// 1字节=8比特   1 byte=8 bit
	printf("%d\n", sizeof(char));         //1    占用1个字节 
	printf("%d\n", sizeof(short));        //2    占用2个字节 
	printf("%d\n", sizeof(int));          //4    占用4个字节 
	printf("%d\n", sizeof(long));         //4    占用4个字节 
	printf("%d\n", sizeof(long long));    //8    占用8个字节 
	printf("%d\n", sizeof(float));        //4    占用4个字节 
	printf("%d\n", sizeof(double));       //8    占用8个字节 

	return 0;
}




#include <stdio.h> //局部变量和全局变量

//short age=20;    //申请内存空间为2字节=16比特，存储年龄数据为20 
//float weight=95.6f;  申请内存空间为4字节，存储体重数据为95.6f
//printf("%d\n", age);

//定义在{}外的num2是全局变量，在{}内的num2为局部变量 
//局部变量和全局变量的名字建议不要相同
//如果名字相同，那么使用变量时局部变量优先 
//变量的适用域：局部变量只能用于{}内，全局变量整个项目都能用
//变量的生命周期：局部变量在{}之后无生命，全局变量生命周期为整个程序 
//extern函数：可以调用其他文件里的变量 
int num2 = 20;

int main()
{
	int num2 = 10;
	printf("%d\n", num2);
	return 0;
}




int main() //计算两个数相加
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);      //输入函数scanf，&表示取地址符号
	sum = num1 + num2;
	printf("sum=%d\n", sum);

	return 0;
}