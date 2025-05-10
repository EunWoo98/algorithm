#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) 
{
    vector<string> answer;

    int count = 1;
    int loop = 0;
    for (int i = 0; i < words.size(); ++i)
    {

        for (int j = 0; j < answer.size(); ++j)
        {
            if (answer[j] == words[i])
            {
                return (count,loop);
            }
        }
        answer.push_back(words[i]);

        if (count == n)
        {
            count = 0;
            loop++;
        }

        count++;
    }
   




    return (0,0);
}