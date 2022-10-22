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
//            printf(3);
//        }
//        printf(2);
//    }
//    printf(1);
//}
// °á°ú : 3 2 1

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
void AddNumberToOne(int _StartNum)
{
	if (_StartNum > 20 || _StartNum <= 0)
	{
		return;
	}

    std::cout << _StartNum << " ";
	AddNumberToOne(_StartNum - 1);
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
void AddNumberFromOne(int _StartNum, int _EndNum)
{
    if ((_EndNum - _StartNum) < 0 || _EndNum > 20)
    {
        return;
    }

    std::cout << _StartNum << " ";
    AddNumberFromOne(_StartNum + 1, _EndNum);
}

//ANFO(1, 5)
//{
//    if (false)
//    cout(1);
//    ANFO(2, 5)
//    {
//        if (false)
//        cout(2);
//        ANFO(3, 5)
//        {
//            if (false)
//            cout(3);
//            ANFO(4, 5)
//            {
//                if (false)
//                cout(4);
//                ANFO(5, 5)
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

// Ex007 12.1
void FindOddNum()
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    if (a % 2 != 0)
    {
        std::cout << a << " ";
    }

    if (b % 2 != 0)
    {
        std::cout << b << " ";
    }

    FindOddNum();
}

//FON()
//{
//    FON()
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
void DivideByTwoCoutFromOne(int OriginNum)
{
}

