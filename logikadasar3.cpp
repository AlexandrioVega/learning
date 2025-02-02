#include <iostream>
using namespace std;
int A[11][11];
void input(int &a, int &b)
{
    cout<<"Baris : ";
    cin>>a;
    cout<<"kolom : ";
    cin>>b;
}

int input2(int a, int b)
{
    int batas = b;
    int k = 1;
    int baris, kolom;
    for( baris = 1; baris <= a ; baris++ )
    {
        k = 1;
        kolom = 1;  
        for(kolom ; kolom <= b ; kolom++)
        {
            if(kolom > (batas - 1))
            {
                A[baris][kolom] = k;
            }
            else
            {
                A[baris][kolom] = 0;
            }
            k += 1;
        }
        batas -= 1;
    }
}

void tampilan(int a, int b)
{
    int batas = b;
    int baris, kolom;
    for(baris = 1; baris <= a; baris++)
    {   
        kolom = 1;  
        for(kolom ; kolom <= b; kolom++)
        {
            cout<<A[baris][kolom];
        }
        cout<<"\n";
    }
}

int main()
{
    int i, j, A[11][11];
    input(i, j); 
    input2(i, j);
    tampilan(i , j);
}