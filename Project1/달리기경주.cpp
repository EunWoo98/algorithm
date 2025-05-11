#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings)
{
    //players 현재등수
    //callings 콜링순서

    unordered_map<string, int> mapPlayer;

    for (int i = 0; i < players.size(); ++i)
    {
        mapPlayer.insert(make_pair(players[i], i));
    }


    
    for (int i = 0; i < callings.size(); ++i)
    {
        int index = mapPlayer[callings[i]];

        if (index == 0)
        {
            continue;
        }
        
        string prev = players[index - 1];

        swap(players[index], players[index - 1]);


        mapPlayer[callings[i]] = index - 1;
        mapPlayer[prev] = index;

    }


    return players;
}