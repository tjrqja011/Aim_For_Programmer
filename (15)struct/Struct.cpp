// Struct.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

// 구조체는 여러가지 데이터를 하나로 묶어서 관리 할 수 있게 해준다
struct tagMonster           // 몬스터 구조체
{
    string strName;         // 몬스터 이름
    int    nHp;             // 체력
    int    nMp;             // 마나
    int    nAtt;            // 공격력
    int    nDef;            // 방어력
};

int main()
{
    srand(time(NULL));
    rand();

    tagMonster stMonster;   // 구조체 선언

    // 구조체 값 설정
    stMonster.strName = "오우거";
    stMonster.nHp = 100;
    stMonster.nMp = 30;
    stMonster.nAtt = 10;
    stMonster.nDef = 5;

    cout << stMonster.strName.c_str() << "의 공격력은 " << stMonster.nAtt << "이다" << endl;

    tagMonster stMonster1 = { "뱀파이어", 50, 100, 25, 1 };     //구조체 선언

    cout << stMonster1.strName.c_str() << "의 공격력은 " << stMonster1.nAtt << "이다" << endl;

    // tagMonster* pMonster = new tagMonster;
    tagMonster* pMonster;

    pMonster = new tagMonster;

    pMonster->strName = "트롤";
    pMonster->nHp = 100;

    delete pMonster;

    tagMonster stMonsterArray[10];
    for (int i = 0; i < 10; i++)
    {
        stMonsterArray[i].strName = "오우거";
        stMonsterArray[i].nHp = 100 + rand() % 51;
        stMonsterArray[i].nMp = 30 + rand() % 30;
        stMonsterArray[i].nAtt = 10 + rand() % 5;
        stMonsterArray[i].nDef = 5 + rand() % 2;
    }

    tagMonster* aMonster = new tagMonster[10];
    aMonster[0].strName = "뱀파이어2";
    aMonster[1].strName = "뱀파이어3";
    delete[] aMonster;

    tagMonster* aMonster2;                      // 몬스터를 포인터로 선언
    int nNumOfMon = 10 + rand() % 11;           // 생성 할 몬스터 숫자를 랜덤으로 결정 (10 ~ 20)
    aMonster2 = new tagMonster[nNumOfMon];      // 정해진 숫자만큼 몬스터 구조체를 할당

    for (int i = 0; i < nNumOfMon; i++)
    {
        aMonster2[i].strName = "던전형 몬스터";
        aMonster2[i].nHp = 100 + rand() % 51;
        aMonster2[i].nMp = 30 + rand() % 30;
        aMonster2[i].nAtt = 10 + rand() % 5;
        aMonster2[i].nDef = 5 + rand() % 2;
    }

    cout << "소환 몬스터 수 : " << nNumOfMon << endl;

    for (int i = 0; i < nNumOfMon; i++)
    {
        cout << "몬스터 종류 : " << aMonster2[i].strName.c_str() << endl;
        cout << "몬스터 체력 : " << aMonster2[i].nHp << endl;
        cout << "몬스터 공격력 : " << aMonster2[i].nAtt << endl << endl;
    }

    system("pause");
     
    return 0;
}

