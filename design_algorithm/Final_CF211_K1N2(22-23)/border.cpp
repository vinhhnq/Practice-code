#include <iostream>
using namespace std;
int main()
{
    int w , h ;
    cin >> w >> h ;
    char area[h][w];
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            cin >> area[i][j];
        }
    }
    int tong_ngang = 0 , tong_doc = 0;
    for(int i = 0 ; i < h ; i++) // duyet hang
    {
        for(int j = 0 ; j < w-1 ; j++)
        {
            if(area[i][j] == area[i][j+1]) 
                tong_ngang+=0;
            else 
                tong_ngang+=1;
        }
    }

    for(int i= 0 ; i < w ; i++)
    {
        for(int j = 0 ; j < h-1 ; j++)
        {
            if(area[j][i] != area[j+1][i]) tong_doc++;
        }
    }

    cout << tong_ngang + tong_doc;
    return 0;
}