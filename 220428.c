#include <stdio.h>

int main() //����Ļ������������ 
{
	printf("hello world���\n");
	return 0;
}


int main()  //��ӡ��ʽ
{
	//short n=...
	//printf("%d\n", n );

	//int age=20;
	//printf("%d\n", age);

	//long num=100;
	//printf("%d\n", num);

	//char �ַ�����
	//short ������
	//int  ����
	//long ������ 
	//long long �������� 
	//float  �����ȸ�������С�����5λ���� 
	//double  ˫���ȸ�������С����󳬹�5λ 


	//   %c ��ӡ�ַ� 
	//   %d ��ӡ����
	//   %f ��ӡ�����ȸ�������-��С��
	//   %lf ��ӡ˫���ȸ����� 
	//   %p �Ե�ַ����ʽ��ӡ 
	//   %x ��ӡ16�������� 
	//   %o  

	char ch = 'A';
	printf("%c\n", ch);

	return 0;
}

int main()  //�����͵Ŀ��ռ��
{
	//bit����λ---byte�ֽ�---kb---mb---gb---tb---pb
	// 1�ֽ�=8����   1 byte=8 bit
	printf("%d\n", sizeof(char));         //1    ռ��1���ֽ� 
	printf("%d\n", sizeof(short));        //2    ռ��2���ֽ� 
	printf("%d\n", sizeof(int));          //4    ռ��4���ֽ� 
	printf("%d\n", sizeof(long));         //4    ռ��4���ֽ� 
	printf("%d\n", sizeof(long long));    //8    ռ��8���ֽ� 
	printf("%d\n", sizeof(float));        //4    ռ��4���ֽ� 
	printf("%d\n", sizeof(double));       //8    ռ��8���ֽ� 

	return 0;
}




#include <stdio.h> //�ֲ�������ȫ�ֱ���

//short age=20;    //�����ڴ�ռ�Ϊ2�ֽ�=16���أ��洢��������Ϊ20 
//float weight=95.6f;  �����ڴ�ռ�Ϊ4�ֽڣ��洢��������Ϊ95.6f
//printf("%d\n", age);

//������{}���num2��ȫ�ֱ�������{}�ڵ�num2Ϊ�ֲ����� 
//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ
//���������ͬ����ôʹ�ñ���ʱ�ֲ��������� 
//�����������򣺾ֲ�����ֻ������{}�ڣ�ȫ�ֱ���������Ŀ������
//�������������ڣ��ֲ�������{}֮����������ȫ�ֱ�����������Ϊ�������� 
//extern���������Ե��������ļ���ı��� 
int num2 = 20;

int main()
{
	int num2 = 10;
	printf("%d\n", num2);
	return 0;
}




int main() //�������������
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);      //���뺯��scanf��&��ʾȡ��ַ����
	sum = num1 + num2;
	printf("sum=%d\n", sum);

	return 0;
}