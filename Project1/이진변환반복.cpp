#include <string>
#include <xstring>
#include <vector>
#include <stdlib.h>
using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;

    //이진 변환 반복
    //x의 모든 01 제거
    //x의 길이를 c라고하면 x를 "c를 2진법으로 표현한 문자열" 로 변경


    int iZeroCount = 0;
    int iLoopCount = 0;

    int iarray = 0;
    while (true)
    {
        if (s == "1")
        {
            break;
        }
        else
        {
            iLoopCount++;
        }

        string strTemp;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] != '0')
            {
                strTemp += s[i];
            }
            else
            {
                iZeroCount++;
            }

        }

        int a = strTemp.size();
        string res;

        while (a > 0)
        {
            res = to_string(a % 2) + res;
            a /= 2;
        }
        s = res;



    }

    answer.push_back(iLoopCount);
    answer.push_back(iZeroCount);

    return answer;
}