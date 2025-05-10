#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool compare(int a, int b)
{
    return a > b;
}

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), compare);

    int ASum = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        ASum += A[i] * B[i];
    }

    sort(A.begin(), A.end(), compare);
    sort(B.begin(), B.end());

    int BSum = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        BSum += A[i] * B[i];
    }

    if (ASum > BSum)
    {
        return BSum;
    }
    else
    {
        return ASum;
    }
    
}