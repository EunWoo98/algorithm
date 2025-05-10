#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int solution(int k, vector<int> tangerine) 
{
    int answer = 0;

    //sort(tangerine.begin(), tangerine.end());


    map<int,int> mapCount;

    for (int i = 0; i < tangerine.size(); ++i)
    {
        mapCount[tangerine[i]]++;
    }

    
    vector<int> vec;
    for (auto iter : mapCount)
    {
        vec.push_back(*iter.second);
    }

    sort(vec.rbegin(), vec.rend());

    int sum = 0; 
    int type = 0;

    for (int count : vec)
    {
        sum += count;
        type++;
        if (sum >= k)
        {
            break;
        }

    }


    return type;
}