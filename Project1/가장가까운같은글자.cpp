#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;

    for (int i = 0; i < s.size(); ++i)
    {
        int pos = -1;
        

        for (int j = i - 1; j >= 0; --j)
        {
            if (s[j] == s[i])
            {
                pos = j;
                break;
            }
        }

        if (pos < i && pos != -1)
        {
            answer.push_back(i - pos);
        }
        else
        {
            answer.push_back(-1);
        }

    }

    return answer;
}