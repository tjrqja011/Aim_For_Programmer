// Number baseball.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

/*
숫자 야구 게임 : 1 ~ 9 까지의 숫자 중 랜덤한 숫자 3개가 선택이 되고 그 숫자 3개를 맞추는 게임
                 컴퓨터가 임의로 3개의 숫자를 순차적으로 선택을 한다 (중복 X)       
                 숫자를 3개를 순차적으로 고른다                             
 ex)
 컴퓨터가 순차적으로 선택한 숫자 : 6 2 3
 유저가 순차적으로 고른 숫자     : 2 0 3
 - 결과 -
 스트라이크 : 1
 볼 : 1
 아웃 : 1
 - 반복 -
 .
 .
 .
*/



int main()
{
    srand(time(NULL));
    rand();

    int nRand1, nRand2, nRand3;
    int nUser1, nUser2, nUser3;
    int nStrike, nBall, nOut;

    int nCount = 0;
    bool bGame = true;
    
    while (bGame)   // 유저의 선택에 의한 반복 (게임 반복)
    {
        //게임 데이터 초기화
        nRand1 = rand() % 9 + 1;

        while (true)
        {
            nRand2 = rand() % 9 + 1;
            
            if (nRand2 != nRand1)
                break;
        }

        while (true)
        {
            nRand3 = rand() % 9 + 1;

            if (nRand3 != nRand1 && nRand3 != nRand2)
                break;
        }

        nStrike = 0;

        // 게임 진행
        while (nStrike < 3) // 게임 클리어 조건에 의한 반복
        {
            system("cls");

            nCount++;

            cout << "첫번째 숫자를 고르시오. (1~9)  :";
            cin >> nUser1;
            cout << "두번째 숫자를 고르시오. (1~9) : ";
            cin >> nUser2;
            cout << "세번째 숫자를 고르시오. (1~9) : ";
            cin >> nUser3;

            nStrike = nBall = nOut = 0;

            if (nUser1 == nRand1)
                nStrike++;
            else if (nUser1 == nRand2 || nUser1 == nRand3)
                nBall++;
            if (nUser2 == nRand2)
                nStrike++;
            else if (nUser2 == nRand1 || nUser2 == nRand3)
                nBall++;
            if (nUser3 == nRand3)
                nStrike++;
            else if (nUser3 == nRand2 || nUser3 == nRand1)
                nBall++;
            else
                nOut;

            cout << "스트라이크 : " << nStrike << endl;
            cout << "        볼 : " << nBall << endl;
            cout << "      아웃 : " << nOut << endl;

            system("pause");
            
        }
        cout << "총 도전 횟수 : " << nCount << endl;


        // 게임 클리어 후 새 게임, 게임 종료 선택
        char chYN;
        cout << "새 게임(y, n)";
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
