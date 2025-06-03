#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) 
{
    int answer = 0;


    vector<int> vecBurger;
    for (int i = 0; i < ingredient.size(); ++i)
    {
        vecBurger.push_back(ingredient[i]);


        int size = vecBurger.size();
        if (size >= 4 &&
            vecBurger[size - 1] == 1 &&
            vecBurger[size - 2] == 3 &&
            vecBurger[size - 3] == 2 &&
            vecBurger[size - 4] == 1 )
        {
            vecBurger.pop_back();
            vecBurger.pop_back();
            vecBurger.pop_back();
            vecBurger.pop_back();

            answer++;
        }


    }


    return answer;
}