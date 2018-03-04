/*
분을 인덱스로, 주차여부를 나타내는 배열 A, B, C
이를 조건체크로 값을 계산하는 배열 D
계산후 출력
*/
#include <stdio.h>

int main()
{
	int nOneCost(0); int nTwoCost(0); int nThreeCost(0);
	int nStartMin(0); int nEndMin(0);
	
	int arDP[100 + 1]{};

	int nCost(0);
	//
	freopen("input.txt", "r", stdin);
	scanf("%d %d %d", &nOneCost, &nTwoCost, &nThreeCost);

	for (int i = 0; i < 3; ++i)
	{
		scanf("%d %d", &nStartMin, &nEndMin);

		for (int j = nStartMin + 1; j <= nEndMin; ++j)
		{
			arDP[j] += 1;
		}
	}
	//
	nCost = 0;
	for (int i = 1; i <= 100; ++i)
	{
		
		if (arDP[i] == 1)
		{
			nCost += nOneCost;
		}
		else if (arDP[i] == 2)
		{
			nCost += nTwoCost * 2;
		}
		else if (arDP[i] == 3)
		{
			nCost += nThreeCost * 3;
		}
		
	}

	printf("%d\n", nCost);
	return 0;
}