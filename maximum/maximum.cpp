#include <iostream>
#include <string>

using namespace std;


int main()
{
     string str;

     int tam = 0;

     int l = 0;
     int c = 0;

     int tmp = 0;
     int ans = 0;
     
     int l1 = 0;
     int l2 = 0;
     int c1 = 0;
     int c2 = 0;

     scanf("%d", &tam);
     //cout << tam << endl;

     int m[tam][tam];     
     
     for(l = 0; l < tam; l++)
        for(c = 0; c < tam; c++) 
           scanf("%d", &m[l][c]);
     

     /*for(l = 0; l < tam; l++)
     {
        for(c = 0; c < tam; c++)
        { 
           cout << m[l][c];
           cout << " ";
        }
        cout << endl;       
     }*/
     
     //cout << endl;

     ans = -127 * 100 * 100;
     //cout << ans << endl;

     for(l = 0; l < tam; l++)
     {
        for(c = 0; c < tam; c++)
        { 
           for(l1 = l; l1 < tam; l1++)
           {
              for(c1 = c; c1 < tam; c1++)
              {
                 tmp = 0;
                 for(l2 = l; l2 <= l1; l2++)
                 {
                    for(c2 = c; c2 <= c1; c2++) tmp += m[l2][c2];               
                 }
                 ans = max(ans, tmp);
              }
           }
        }      
     }

     cout << ans << endl;
     scanf("%d", &tam);


     return 0;
}
