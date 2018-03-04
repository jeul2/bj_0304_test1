/*
���� - �迭
�迭�ε����� ��ǥ.
��� ��ǥ���� �������� �հ�, ���ÿ� ������ ���� �� �ִ�.
�ּ� ����� ������ ��ġ���� �糡���ִ� ���� �����ϸ� �ȴ�.
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
