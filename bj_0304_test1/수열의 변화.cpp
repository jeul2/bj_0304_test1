/*
1�� ������ ��ġ�� 
b[i] = a[i + 1] - a[i];
size--
*/

#include <stdio.h>

int main()
{
	int nSize(0);
	int nCount(0);

	int arDP[20 + 1]{};

	//
	freopen("input.txt", "r", stdin);

	scanf("%d %d", &nSize, &nCount);
	for (int i = 0; i < nSize; ++i)
	{
		scanf("%d,", &arDP[i]); // %d, ������ �ƴѵ� �������Է��� �� �޾�����?
	}
	//

	for (int i = 0; i < nCount; ++i)
	{
		--nSize;
		for (int j = 0; j < nSize; ++j)
		{
			arDP[j] = arDP[j + 1] - arDP[j];
		}
	}

	for (int i = 0; i < nSize; ++i)
	{
		printf("%d", arDP[i]);
		if (i != nSize - 1)
			printf(",");
		else
			printf("\n");
	}

	return 0;
}