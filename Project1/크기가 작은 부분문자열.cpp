#include <string>
#include <vector>

using namespace std;

int solution(string t, string p)
{
    int answer = 0;

    long long iComparison = stoll(p);

    for (int i = 0; i < t.size() - (p.size() - 1); ++i)
    {
        string temp = t.substr(i, p.size());
        long long iValue = stoll(temp);

        if (iValue <= iComparison)
        {
            answer++;
        }

    }

    return answer;
}