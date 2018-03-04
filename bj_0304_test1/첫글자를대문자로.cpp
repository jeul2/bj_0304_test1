#include <stdio.h>

void fnConvertaToA(const char *pSrc, int nLength, char *pRes);
void fnInitialStr(char *Src, int nSize);

int main()
{
	int nInputNum(0);
	char strInput[30 + 2]{};
	int nCount(0);
	int nLength(0);
	
	char nDummy('\0');
	//
	freopen("input.txt", "r", stdin);
	scanf("%d", &nInputNum);
	scanf("%c", &nDummy);
	for (int i = 0; i < nInputNum; ++i)
	{
		nCount = 0;
		fnInitialStr(strInput, 30 + 2);

		scanf("%c", &strInput[nCount]);
		++nCount;
		while (strInput[nCount - 1] != '\n' && nCount <= 30)
		{
			scanf("%c", &strInput[nCount]);
			++nCount;
		}
		nLength = nCount - 1;
		strInput[nCount - 1] = '\0';

		fnConvertaToA(strInput, nLength, strInput);

		for (int j = 0; strInput[j]; ++j)
		{
			printf("%c", strInput[j]);
		}
		printf("\n");
	}

	return 0;
}

void fnConvertaToA(const char * pSrc, int nLength, char * pRes)
{
	if (pSrc[0] >= 'a' && pSrc[0] <= 'z')
		pRes[0] = pSrc[0] - ('a' - 'A');

	/*
	for (int i = 1; i < nLength; ++i)
	{
		if (pSrc[i] >= 'a' && pSrc[i] <= 'z')
		{
			if (pSrc[i - 1] == '\n')
			{
				pRes[i] = pSrc[i] - ('a' - 'A');
			}
		}

	}
	*/
}

void fnInitialStr(char * Src, int nSize)
{
	for (int i = 0; i < nSize; ++i)
	{
		Src[i] = '\0';
	}
}
