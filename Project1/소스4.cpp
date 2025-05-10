#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{

    bool bUpper = true;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            bUpper = true;
            continue;
        }

        if (bUpper == true && s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32;
            
        }

        else if(s[i]>=65 && s[i] <= 90)
        {
            s[i] += 32;
        }


        bUpper = false;



    }


    return s;
}