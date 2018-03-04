/*
도로 - 배열
배열인덱스는 좌표.
모든 좌표에는 주차장이 잇고, 동시에 상점이 있을 수 있다.
최소 비용은 상점의 위치들중 양끝에있는 곳에 주차하면 된다.
*/
#include <stdio.h>

void fnMaxUpdate(int &nMaxValue, int &nData);
void fnMinUpdata(int &nMinValue, int &nData);

int main()
{
	int nInputNum(0);
	int nStoreNum(0);

	int nData(0);
	int nMaxPosition(0);
	int nMinPosition(0);

	int nLength(0);

	//
	freopen("input.txt", "r", stdin);
	scanf("%d", &nInputNum);
	for (int i = 0; i < nInputNum; ++i)
	{
		scanf("%d", &nStoreNum);

		nMaxPosition = -1;
		nMinPosition = 100;
		for (int j = 0; j < nStoreNum; ++j)
		{
			scanf("%d", &nData);
			fnMaxUpdate(nMaxPosition, nData);
			fnMinUpdata(nMinPosition, nData);
		}

		nLength = 0;
		nLength = (nMaxPosition - nMinPosition) * 2;

		printf("%d\n", nLength);
	}

	return 0;
}

void fnMaxUpdate(int & nMaxValue, int & nData)
{
	if (nMaxValue < nData)
	{
		nMaxValue = nData;
	}
}

void fnMinUpdata(int & nMinValue, int & nData)
{
	if (nMinValue > nData)
	{
		nMinValue = nData;
	}
}
