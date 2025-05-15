#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets)
{
    vector<int> answer;


    //keymap 1번키 2번키
    //target 작성할 글 


    for (string target : targets)
    {
        int sum = 0;
        for (int i = 0; i < target.size(); ++i)
        {
            int min = -1;
            for (string key : keymap)
            {
                int zero = -1;
                zero = key.find(target[i]);

                if (zero != -1)
                {
                    if (min > zero || min == -1)
                    {
                        min = zero;
                    }
                }
            }

            if (min == -1)
            {
                sum = -1;
                break;
            }
            else
            {
                sum += min + 1;
            }

        }

        answer.push_back(sum);
    }



    return answer;
}