#include<stdio.h>
int main()
{
	//输出所有200 - 400之间能被3整除且个位数字为6的整数。
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