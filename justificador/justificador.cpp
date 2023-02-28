#include <iostream>
#include <string>

using namespace std;

string arr[100];

int main()
{
     int tam = 0;
     int mx = 0;
     string str;
     string tmp = "";
     int hlp = 0;
     getline(cin, str);
     hlp = stoi(str);

     while(hlp != 0)
     {
        tam = 0;
        mx = 0;
        for(int j = 0; j < hlp; j++)
        {
           getline(cin, str);
           for(int i = 0; i < str.length(); i++)
           {
              for(;i < str.length() && str.at(i) == ' '; i++);
              for(;i < str.length() && str.at(i) != ' '; i++) tmp = tmp + str.at(i);
              tmp = tmp + ' ';
           }
           int k = 0;
           for(k = tmp.length()-1; tmp.at(k) == ' '; k--);
           if(k != 0) tmp = tmp.substr(0, k+1);
           arr[tam] = tmp;
           int g = tmp.length();
           mx = max(mx, g);
           tam++;
           tmp = "";
        }

        for(int l = 0; l < tam; l++)
        {
           if(arr[l].length() == mx) cout << arr[l] << endl;
           else
           {
              for(int h = 0; h < (mx-arr[l].length()); h++) cout << ' ';
              cout << arr[l] << endl; 
           }    
        }        
        cout << endl;  
        getline(cin, str);
        hlp = stoi(str);
     } 

     return 0;
}
