#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

string solution(string s) 
{
    string answer = "";

    int max = 0;
    int min = 0;


    vector<string> result;

    string token;
    for (char c : s)
    {
        if (c == ' ')
        {
            int itoken = stoi(token);

            if (min == 0 && max == 0)
            {
                min = itoken;
                max = itoken;
            }
            else if (itoken < min)
            {
                min = itoken;
            }
            else if (itoken > max)
            {
                max = itoken;
            }

            token.clear();
        }
        else
        {
            token += c;
        }
    }

    int itoken = stoi(token);

    if (itoken < min)
    {
        min = itoken;
    }
    else if (itoken > max)
    {
        max = itoken;
    }

    answer = to_string(min) + " " + to_string(max);
    

    return answer;
}