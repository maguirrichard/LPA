#include <iostream>
#include <string>

using namespace std;

int main()
{
     string str1 = "";
     string str2 = "";

     string tmp1 = "";
     string tmp2 = "";
     string tmp3 = "";

     int hlp1 = 0;
     int hlp2 = 0;
     int hlp3 = 0;
     int count = 0;
     int j = 0;
     int pos = 0;
     int mn = 0;

     getline(cin, str1);
     hlp1 = stoi(str1);
     count = hlp1;

     while(hlp1 != 0)
     {        
        getline(cin, str1);
        getline(cin, str2);
        hlp2 = str1.length()-hlp1;
        hlp3 = str2.length()-hlp1;
        count = hlp1;
        j = 0;
        mn = min(str1.length(), str2.length());

        for(int i = 0; i <= hlp2; i++)
        {
           int k = i;
           for(; count > 0; count--, k++)
              tmp1 = tmp1 + str1.at(k);
           
           //cout << tmp1 + " tmp1" << endl;
           for(int c = j; c <= hlp3; c++)
           { 
              tmp3 = str2.substr(c, hlp1);
              //cout << tmp3 + " tmp3" << endl;
              if(tmp3 == tmp1)
              {
                 tmp2 = tmp2 + tmp1;
                 //cout << tmp1 + " tmp1<" << endl;
                 //cout << tmp2 + " tmp2" << endl;
                 j = c + hlp1;
                 for(;k < mn && j < mn && str1.at(k) == str2.at(j); k++, j++)
                    tmp2 = tmp2 + str1.at(k);
                 c = hlp3;   
                 i = k-1;
              }              
           }
           
           count = hlp1;
           //cout << tmp1 << endl;          
           tmp1 = "";
        } 
        

        //cout << tmp2 << endl;
        cout << tmp2.length() << endl;
        tmp2 = "";
        getline(cin, str1);
        hlp1 = stoi(str1);
     } 

     return 0;
}
