// array, shuffle algorithm.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

// 배열 : 순차적인 공간을 할당해서 데이터를 저장하는 방식

int main()
{
	srand(time(NULL));
	rand();


	/* 셔플 사용 예시
	int nData[9];
	for (int i = 0; i < 9; i++)
		nData[i] = i + 1;

	for (int i = 0; i < 100; i++)
	{
		int nSrc = rand() % 9;		// 소스 인덱스 번호
		int nDest = rand() % 9;		// 데스트 인덱스 번호

		int nTemp = nData[nSrc];
		nData[nSrc] = nData[nDest];
		nData[nDest] = nTemp;
	}
	
	for (int i = 0; i < 9; i++)
		cout << nData[i] << endl;
	*/



	/* 배열을 사용한 야구 게임
	int nRand[3];
	int nUser[3];
	int nStrike, nBall, nOut;

	int nCount = 0;
	bool bGame = true;

	while (bGame)
	{
		nRand[0] = rand() % 9 + 1;

		while (true)
		{
			nRand[1] = rand() % 9 + 1;

			if (nRand[1] != nRand[0])
				break;
		}

		while (true)
		{
			nRand[2] = rand() % 9 + 1;

			if (nRand[2] != nRand[1] && nRand[2] != nRand[0])
				break;
		}

		nStrike = 0;

		while (nStrike < 3)
		{
			system("cls");

			nCount++;

			cout << "첫번째 숫자를 고르시오. (1 ~ 9) : ";
			cin >> nUser[0];
			cout << "두번째 숫자를 고르시오. (1 ~ 9) : ";
			cin >> nUser[1];
			cout << "세번째 숫자를 고르시오. (1 ~ 9) : ";
			cin >> nUser[2];

			nStrike = nBall = nOut = 0;
			
			for (int i = 0; i < 3; i++)
			{
				if (nUser[i] == nRand[i])
					nStrike++;
				else if (nUser[i] == nUser[(i + 1) % 3] || nUser[i] == nUser[(i + 2) % 3])
					nBall++;
				else
					nOut++;
			}
			

			cout << "스트라이크 : " << nStrike << endl;
			cout << "        볼 : " << nBall << endl;
			cout << "      아웃 : " << nOut << endl;
			
			system("pause");
		}
		cout << "총 도전 횟수 : " << nCount << endl;

		char chYN;
		cout << "새 게임(y, n) ";
		cin >> chYN;

		if (chYN == 'n')
			bGame = false;
	}
	*/

	int nRand[9];
	int nUser[3];
	int nStrike, nBall, nOut;

	int nCount = 0;
	bool bGame = true;

	while (bGame)
	{
		for (int i = 0; i < 9; i++)
			nRand[i] = i + 1;

		for (int i = 0; i < 100; i++)
		{
			int nSrc = rand() % 9;
			int nDest = rand() % 9;
			
			int nTemp = nRand[nSrc];
			nRand[nSrc] = nRand[nDest];
			nRand[nDest] = nTemp;
		}

		nStrike = 0;
		nCount = 0;

		while (nStrike < 3)
		{
			system("cls");

			nCount++;

			//테스트용 정답 확인
			cout << nRand[0] << nRand[1] << nRand[2] << endl;


			cout << "첫번째 숫자를 고르시오. (1 ~ 9) : ";
			cin >> nUser[0];
			cout << "두번째 숫자를 고르시오. (1 ~ 9) : ";
			cin >> nUser[1];
			cout << "세번째 숫자를 고르시오. (1 ~ 9) : ";
			cin >> nUser[2];

			nStrike = nBall = nOut = 0;

			for (int i = 0; i < 3; i++)
			{
				if (nUser[i] == nRand[i])
					nStrike++;
				else if (nUser[i] == nUser[(i + 1) % 3] || nUser[i] == nUser[(i + 2) % 3])
					nBall++;
				else
					nOut++;
			}


			cout << "스트라이크 : " << nStrike << endl;
			cout << "        볼 : " << nBall << endl;
			cout << "      아웃 : " << nOut << endl;

			system("pause");
		}
		cout << "총 도전 횟수 : " << nCount << endl;

		char chYN;
		cout << "새 게임(y, n) ";
		cin >> chYN;

		if (chYN == 'n')
			bGame = false;
	}
	system("pause");

	return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
