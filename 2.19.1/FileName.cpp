#include<stdio.h>
int main()
{
	//�������200 - 400֮���ܱ�3�����Ҹ�λ����Ϊ6��������
	int i = 0;
	for (i = 206; i < 401; i+=10)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}