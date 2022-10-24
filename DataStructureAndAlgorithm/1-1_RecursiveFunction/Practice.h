#pragma once
#include <stdio.h>

// Ex001 12.1
void recursive(int count)
{
    if (4 == count)
    {
        return;
    }

    recursive(count + 1);

    printf("%d\n", count);
}

//r(1)
//{
//    if(false)
//    r(2)
//    {
//        if(false)
//        r(3)
//        {
//            if(false)
//            r(4)
//            {
//                if (true)
//                {
//                    return;
//                }
//            }
// 
//            printf(3);
//        }
//        printf(2);
//    }
//    printf(1);
//}
// 결과 : 3 2 1

// Ex002 12.1
void SayHello(int _Count)
{
    if (_Count > 20 || _Count <= 0)
    {
        return;
    }

    printf("Hello\n");
    if (0 < _Count - 1)
    {
        SayHello(_Count - 1);
    }
}

//SH(3)
//{
//    if (false)
//    printf("Hello\n");
//    
//    if (false)
//    {
//        SH(2)
//        {
//            if (false)
//            printf("Hello\n");
//
//            if(false)
//            SH(1)
//            {
//                if (false)
//                printf("Hello\n");
//                if(false)
//            }
//        }
//    }
//}

//Ex003 12.1
void PrintStar(int _StarCount)
{
    if (_StarCount > 20 || _StarCount <= 0)
    {
        return;
    }

    printf("*");
    if (0 < _StarCount - 1)
    {
        PrintStar(_StarCount - 1);
    }
}

//PS(3)
//{
//    if (false)
//    printf("*");
//    if (true)
//    {
//        PS(2)
//        {
//            if (false)
//            printf("*");
//            if (true)
//            {
//                PS(1)
//                if (false)
//                printf("*");
//                if (false)
//            }
//        }
//    }
//}

// Ex004 12.1
void PrintNumberToOne(int _StartNum)
{
	if (_StartNum > 20 || _StartNum <= 0)
	{
		return;
	}

    std::cout << _StartNum << " ";
    PrintNumberToOne(_StartNum - 1);
}

//ANTO(5)
//{
//    if (false)
//    cout(5 );
//    ANTO(4)
//    {
//        if (false)
//        cout(4 );
//        ANTO(3)
//        {
//            if (false)
//            cout(3 );
//            ANTO(2)
//            {
//                if (false)
//                cout(2);
//            }
//            ANTO(1)
//            {
//                if (false)
//                cout(1);
//                ANTO(0)
//                {
//                    if (true)
//                    {
//                        return;
//                    }
//                }
//            }
//        }
//    }
//}

// Ex005 12.1
void PrintNumberFromOne(int _EndNum)
{
    if (_EndNum > 20 || _EndNum <= 0)
    {
        return;
    }

    PrintNumberFromOne(_EndNum - 1);
    std::cout << _EndNum << " ";
}



//
//PNFO(5)
//{
//    if (false)
//    PNFO(4)
//    {
//        if (false)
//        PNFO(3)
//        {
//            if (false)
//            PNFO(2)
//            {
//                if (false)
//                PNFO(1)
//                {
//                    if (true)
//                    {
//                        return;
//                    }
//                    cout(1);
//                }
//                cout(2);
//            }
//            cout(3);
//        }
//        cout(4);
//    }
//    cout(5);
//}

// Ex007 12.1
void FindOddNum(int _StartNum, int _EndNum)
{
    if (_StartNum >= _EndNum)
    {
        return;
    }

    if (_StartNum % 2 != 0) // 홀수면
    {
        std::cout << _StartNum << ' ';
    }

	FindOddNum(_StartNum + 1, _EndNum);
}

//FON(2, 7)
//{
//    if(false)
//    if (false)
//    
//	FON(3, 7)
//	{
//        if (false)
//        if (true)
//        cout(3);
//        
//        FON(4, 7)
//        {
//            if(false)
//            if(false)
//
//            FON(5, 7)
//            {
//                if (false)
//                if (true)
//                cout(5);
//
//                FON(6, 7)
//                if (false)
//                if (false)
//
//                FON(7, 7)
//                if (false)
//                return;
//            }
//        }
//	}
//}
//



//
//FON()
//{
//    if (true)
//    cout(a);
//    if (true)
//    cout(b);
//    FON()
//    {
//        if (false)
//        if (false)
//        FON()
//        {
//            if (true)
//            cout(a);
//            if(false)
//            FON()
//            {
//                if (false)
//                if (true)
//                cout(b);
//            }
//        }
//    }
//}

// Ex008 12.1
void DivideByTwoUntilOne(int OriginNum)
{
	if (OriginNum > 0)
	{
		std::cout << OriginNum << ' ';
		DivideByTwoUntilOne((OriginNum / 2));
	}
}

//DBTUO(10)
//{
//    if (true)
//    {
//        cout(10);
//        DBTUO(5)
//        {
//            if (true)
//            {
//                cout(5);
//                DBTUO(2)
//                {
//                    if (true)
//                    {
//                        cout(2);
//                        DBTUO(1);
//                        if (true)
//                        {
//                            cout(1);
//                            DBTUO(0);
//                            if(false)
//                        }
//                    }
//                }
//            }
//        }
//    }
//}

// Ex009 12.1
void DivideByTwoFromOne(int OriginNum)
{
    if (OriginNum > 0)
    {
        DivideByTwoFromOne((OriginNum / 2));
        std::cout << OriginNum << ' ';
    }
}
//
//DBFO(10)
//{
//	if (true)
//	{
//		DBFO(5)
//		if (true)
//		{
//			DBFO(2)
//            if (true)
//            {
//                DBFO(1)
//                {
//                    if (true)
//                    {
//						DBFO(0)
//                    }
//                    cout(1);
//                }
//                cout(2);
//            }
//            cout(5);
//		}
//        cout(10);
//	}
//}

int AddNum(int _StartNum, int _EndNum)
{
    if ((_StartNum < 0 || _EndNum < 0) ||
        (_StartNum > 20 || _EndNum > 20))
    {
        return -1;
    }

    if (_StartNum == _EndNum)
    {
        return _EndNum;
    }

    return _StartNum + AddNum(_StartNum+1, _EndNum);
}
//
//AN(1, 5)
//{
//    if (false)
//    if (false)
//    1 + [AddNum(2, 5) = 14]
//    {
//        if(false)
//        if(false)
//        2 + [AddNum(3, 5) = 12]
//        {
//            if(false)
//            if(false)
//            3 + [AddNum(4, 5) = 9]
//            {
//                if(false)
//                if (false)
//                {
//                    4 + [AddNum(5,5) = 5]
//                    if(false)
//                    if (true)
//                    {
//						return 5
//                    }
//                }
//            }
//        }
//    }
//
//    TTL return 15
//}

int AddNum(int _EndNum)
{
    if (_EndNum != 1)
    {
        return _EndNum + AddNum(_EndNum - 1);
    }
    else
    {
        return 1;
    }
}

//AN(5)
//{
//    if (true)
//    {
//        5 + [AN(4) = 10] 
//        {
//            if (true)
//            {
//                4 + [AN(3) = 6]
//                {
//                    if (true)
//                    {
//                        3 + [AN(2) = 3]
//                        {
//                            if (true)
//                            {
//                                2 + [AN(1) = 1]
//                                if(false)
//                                if (true)
//                                {
//                                    return 1;
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//}

// TTL return 15

int AddEveryNum(int Num) //2571
{
    int a = Num / 1000;
    int b = Num / 100 - ((Num / 1000) * 10);
    int c = Num / 10 - ((Num / 100)* 10);
    int d = Num - ((Num / 10) * 10);

    return a + b + c + d;
}

//// 전개도
//2571 / 1000 = 2
//2571 / 100 = 25 - ((2571 / 1000) * 10) = 5
//2571 / 10 = 257 - ((2571/100) * 10) = 7
//2571 - ((2571 / 10) * 10) = 1

int PrintFactorial(int Num)
{
    if (Num == 1)
    {
        return Num;
    }

    return Num * PrintFactorial(Num - 1);
}

//PF(5)
//{
//    if(false)
//    return 5 * [PF(4) = 24]
//    {
//        if (false)
//        {
//            return 4 * [PF(3) = 6]
//            {
//                if (false)
//                {
//                    return 3 * [PF(2) = 2]
//                    {
//                        if (false)
//                        {
//                            return 2 * [ PF(1) = 1] 
//                            if (true)
//                            return 1;
//                        }
//                    }
//                }
//            }
//        }
//    }
//}

// TTL return 120

int AToThePowerB(int NumA, int NumB)
{
    if (1 <= (NumB))
    {
        return NumA * AToThePowerB(NumA, NumB - 1);
    }
    else
    {
        return 1;
    }
}


//ATTPB(3, 3)
//{
//    if (true)
//    {
//        3 * [ATTPB(3, 2) = 9]
//        {
//            if(true)
//            3 * [ATTPB(3, 1) = 3]
//            {
//                if (true)
//                3 * [ATTPB(3, 0) = 1]
//                return 1;
//            }
//        }
//    }
//}

int MinusToZero(int _Num)
{
    if (0 == (_Num / 10))
    {
        return _Num;
    }
    else
    {
        return MinusToZero(_Num / 10);
    }
}

int Count(int _Num, int _Count)
{
    if (_Num == 0)
    {
        return _Count;
    }

    return Count(_Num - MinusToZero(_Num), ++_Count);
}
//
//// 전개도
//CUZ(13, 0)
//{
//    CUZ(13 - [MTZ(13) = 1], 1)
//    {
//        CUZ(12 - [MTZ(12) = 1], 2)
//        { 
//            CUZ(11 - [MTZ(11) = 1], 3)
//            {
//                CUZ(10 - [MTZ(10) = 1], 4)
//                {
//                    CUZ(9 - [MTZ(9) = 9], 5)
//                }
//            }
//        }
//    }
//}
//
//// TTL return 5