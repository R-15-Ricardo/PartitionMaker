#include <bits/stdc++.h>
#include <fstream>
#include <string>
using namespace std;

#define ARR_SIZE 100000

string numbermaker (int);

int main ()
{
    ifstream archivo1 ("particionesin.txt");
    ofstream archivo2 ("particionesout.txt");
    string auxlinea;
    string outlinea;
    if (archivo1.is_open())
    {
        int it=1;
        int track=0;
        while (getline(archivo1,auxlinea))
        {
            outlinea="$P_{";
            outlinea+=numbermaker(it);
            outlinea+="}=";
            while (auxlinea.at(track)!='[') track++;
            for (int i=track;i<auxlinea.size();i++)
            {
                if (auxlinea.at(i)=='[') outlinea+="\\{";
                else if (auxlinea.at(i)==']') outlinea+="\\}";
                else outlinea+=auxlinea.at(i);
            }
            outlinea+="$\\\\";
            it++;
            archivo2<<outlinea<<endl;
        }
        archivo1.close();
    }
    archivo2.close();
    return 0;
}

string numbermaker (int n)
{
    string num;
    if (n<10) num=char(n+48);
    else if (n>10)
    {
        num=char((n/10)+48);
        num+=char((n%10)+48);
    }
    return num;
}
