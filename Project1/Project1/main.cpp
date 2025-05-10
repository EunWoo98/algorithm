#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

//long finalState(int operations_rows, int operations_columns, int** operations)
//{
//    //1,4 -> 0~3 스위치 작동 모두 Not 연산 반복
//
//        //operations_rows -> 1차원 배열 크기
//        //operation_columns -> 2차원 배열 크기
//        //operation_operations -> 작업내용
//
//    int iArray[1000000] = { 0, };
//
//    for (int i = 0; i < operations_rows; ++i)
//    {
//        for (int k = operations[i][0]; k <= operations[i][1]; ++k)
//        {
//            iArray[k - 1] = iArray[k - 1] == 0 ? 1 : 0;
//        }
//    }
//
//    long lResult = 0;
//
//    for (int i = 0; i < 1000000; ++i)
//    {
//        if (iArray[i] == 1)
//        {
//            lResult += i + 1;
//        }
//    }
//
//    return lResult;
//}
//
//long finalState2(int operations_rows, int operations_columns, int operations[7][2])
//{
//    //1,4 -> 0~3 스위치 작동 모두 Not 연산 반복
//
//        //operations_rows -> 1차원 배열 크기
//        //operation_columns -> 2차원 배열 크기
//        //operation_operations -> 작업내용
//
//    int iMaxIndex = 0;
//    for (int i = 0; i < operations_rows; ++i)
//    {
//        if(iMaxIndex < operations[i][1])
//        {
//            iMaxIndex = operations[i][1];
//        }
//    }
//
//    vector<int> vecArray(iMaxIndex, 0);
//    for (int i = 0; i < operations_rows; ++i)
//    {
//        for (int k = operations[i][0]; k <= operations[i][1]; ++k)
//        {
//            vecArray[k - 1] = vecArray[k - 1] == 0 ? 1 : 0;
//        }
//    }
//
//    long lResult = 0;
//
//    for (int i = 0; i < vecArray.size(); ++i)
//    {
//        if (vecArray[i] == 1)
//        {
//            lResult += i + 1;
//        }
//    }
//
//    return lResult;
//}
//
//long finalState(vector<vector<int>> operations)
//{
//
//
//    //operations_rows -> 1차원 배열 크기
//    //operation_columns -> 2차원 배열 크기
//    //operation_operations -> 작업내용
//
//    int iMaxIndex = 0;
//    for (int i = 0; i < operations.size(); ++i)
//    {
//        if (iMaxIndex < operations[i][1])
//        {
//            iMaxIndex = operations[i][1];
//        }
//    }
//    iMaxIndex += 1;
//    vector<int> vecResult(iMaxIndex, 0);
//
//    for (int i = 0; i < operations.size(); ++i)
//    {
//        for (int k = operations[i][0]; k <= operations[i][1]; ++k)
//        {
//            vecResult[k - 1] = vecResult[k - 1] == 0 ? 1 : 0;
//        }
//    }
//
//    long lResult = 0;
//
//    for (int i = 0; i < vecResult.size(); ++i)
//    {
//        if (vecResult[i] == 1)
//        {
//            lResult += i + 1;
//        }
//    }
//
//    return lResult;
//}

//long finalState(vector<vector<int>> operations)
//{
//
//
//    //operations_rows -> 1차원 배열 크기
//    //operation_columns -> 2차원 배열 크기
//    //operation_operations -> 작업내용
//
//    int iMaxIndex = 0;
//    for (int i = 0; i < operations.size(); ++i)
//    {
//        if (iMaxIndex < operations[i][1])
//        {
//            iMaxIndex = operations[i][1];
//        }
//    }
//    iMaxIndex += 1;
//    vector<int> vecResult(iMaxIndex, 0);
//
//    for (int i = 0; i < operations.size(); ++i)
//    {
//        int iLow = operations[i][0] - 1;
//        int iHigh = operations[i][1];
//         
//        vecResult[iLow] += 1;
//        vecResult[iHigh] += 1;
//    }
//
//    long lResult = 0;
//
//    int iSwitch = 0;
//    for (int i = 0; i < iMaxIndex; ++i)
//    {
//        iSwitch += vecResult[i];
//        if (iSwitch % 2 == 1)
//        {
//            lResult += i + 1;
//        }
//    }
//
//    return lResult;
//}


vector<int> sortBinaryNumbers(vector<vector<int>> bitArrays)
{

    vector<int> vecSort;
    for (int i = 0; i < bitArrays.size(); ++i)
    {
        int Decimal = 0;
        for (int j = 0; j < bitArrays[i].size(); ++j)
        {
            Decimal |= 1 << bitArrays[i][j];
        }

        vecSort.push_back(Decimal);
    }

    vector<int> vecArray;

    for (int i = 0; i < vecSort.size(); ++i)
    {
        vecArray.push_back(i);
    }

    sort(vecArray.begin(), vecArray.end(), [&](int a, int b)
        {
            return vecSort[a] > vecSort[b];
        }
    );


    return vecArray;


}
int main()
{
    vector<vector<int>> a = { {0,1,2},{3,1,0} };



    sortBinaryNumbers(a);




    return 0;
}
