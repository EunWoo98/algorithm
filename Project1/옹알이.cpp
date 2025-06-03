#include <string>
#include <vector>

using namespace std;
int solution(vector<string> babbling)
{
    int answer = 0;
    vector<string> words = { "aya", "ye", "woo", "ma" };

    for (int i = 0; i < babbling.size(); ++i)
    {
        string& str = babbling[i];
        string prev = "";
        bool valid = true;
        int idx = 0;

        while (idx < str.size())
        {
            bool matched = false;

            for (string w : words)
            {
                if (str.substr(idx, w.size()) == w && prev != w)
                {
                    prev = w;
                    idx += w.size();
                    matched = true;
                    break;
                }
            }

            if (!matched)
            {
                valid = false;
                break;
            }
        }

        if (valid) answer++;
    }

    return answer;
}