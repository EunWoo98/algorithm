#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal)
{
    string answer = "";

    //cards1 cards2 조합 해서 goal 만들기 못만들면 No 반환 만들 수 있으면 Yes반환

    int iResult = 0;
    int iArray1 = 0;
    int iArray2 = 0;
    while (true)
    {   
        if (cards1[iArray1] == goal[iResult])
        {
            iResult++;
            iArray1++;
        }
        else if (cards1[iArray2] == goal[iResult])
        {
            iResult++;
            iArray2++;
        }
        else
        {
            return "No";
        }


        break;
    }

    return "Yes";
}