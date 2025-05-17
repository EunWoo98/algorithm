#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index)
{
    string answer = "";

    for (int i = 0; i < s.size(); ++i)
    {
        int iResult = s[i];
        int moved = 0;

        while (moved < index)
        {
            iResult++;
            if (iResult > 122)  // 'z'
                iResult = 97;   // 'a'

            bool bSkip = false;
            for (int j = 0; j < skip.size(); ++j)
            {
                if (iResult == skip[j])
                {
                    bSkip = true;
                    break;
                }
            }

            if (!bSkip)
                moved++;
        }

        s[i] = iResult;
    }

    answer = s;


    return answer;
}