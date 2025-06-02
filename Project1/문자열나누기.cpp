#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;

    char czfirst = s[0];
    int iCount = 0;
    int iArray = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (iCount == 0) {
            czfirst = s[i]; // 기준 문자 설정
        }

        if (s[i] == czfirst)
            iCount++;
        else
            iArray++;

        if (iCount == iArray)
        {
            answer++;
            iCount = 0;
            iArray = 0;
        }
    }

    if (iCount != 0 || iArray != 0)
    {
        answer++;
    }

    return answer;
}