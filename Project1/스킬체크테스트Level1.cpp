#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) 
{

    //id_list 유저 idlist
    //report [신고한 유저 신고받은 유저]
    //신고 횟수 k 이상이면 정지

    //횟수 push_back


    vector<int> vecResult(id_list.size(), 0);
    vector<vector<bool>> vecDeclaration(id_list.size(), vector<bool>(id_list.size(),false));


    for (int i = 0; i < report.size(); ++i)
    {
        int pos = report[i].find(" ");

         string  strReporter = report[i].substr(0, pos);
         string  strDeclaration =  report[i].substr(pos+1, report[i].size());


         int ireporter = -1;
         int ideclaration = -1;
         for (int j = 0; j < id_list.size(); ++j)
         {
             if (id_list[j] == strDeclaration)
             {
                 ideclaration = j;
             }
             else if (id_list[j] == strReporter)
             {
                 ireporter = j;
             }

             if (ireporter != -1  && ideclaration != -1)
             {
                 break;
             }

         }
      
         if (vecDeclaration[ireporter][ideclaration] == false)
         {
             vecResult[ideclaration]++;
             vecDeclaration[ireporter][ideclaration] = true;

         }
    }

    vector<int> vecMail(vecResult.size(),0);

    for (int i = 0; i < vecResult.size(); ++i)
    {
        if (vecResult[i] >= k)
        {
            //vecMail[i] = vecResult[i];


            for (int j = 0; j < vecDeclaration.size(); ++ j)
            {
                if (vecDeclaration[j][i] == true)
                {
                    vecMail[j]++;
                }
            }


        }
    }




    return vecMail;
}