#include <iostream>
#include <string>

using namespace std;

string dict[2000];
int tam[2000];
int pos = 0;

int main()
{
     int anaTam = 0;
     int worTam = 0;
     string str;
     getline(cin, str);

     while(str != "#")
     {
        dict[pos] = str;
        tam[pos] = str.length();
        pos++;
        getline(cin, str);    
     }

     getline(cin, str);

     while(str != "#")
     {
        worTam = str.length();
        char wor[worTam];
        for(int i = 0; i < worTam; i++) wor[i] = str.at(i);
        for(int j = 0; j < pos; j++) //percorre dict
        {
           for(int a = 0; a < dict[j].length(); a++) //percorre palavra no dict
           {
              for(int b = 0; b < worTam; b++) //percorre palavra
              {
                 
              }
           }
        }
        getline(cin, str);  
     }   

     return 0;
}
