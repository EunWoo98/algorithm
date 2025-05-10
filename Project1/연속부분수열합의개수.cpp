#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> elements) 
{
    int answer = 0;

    set<int> setSum;


    for (int k = 0; k < elements.size(); ++k)
    {
        int iSum = elements[k];

        for (int i = 0; i < elements.size(); ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                iSum *= elements[j];
            }

            setSum.insert(iSum);
        }

    }

    return setSum.size();
}