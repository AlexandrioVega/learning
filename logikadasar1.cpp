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
    int k = 1;
    int baris, kolom;
    for( baris = 1; baris <= a ; baris++ )
    {
        kolom = 1;  
        for(kolom ; kolom <= b ; kolom++)
        {
            A[baris][kolom] = k;
            
        }
        k += 1;  
    }
}

void tampilan(int a, int b)
{
    int batas = 1;
    int baris, kolom;
    for(baris = 1; baris <= a; baris++)
    {   
        kolom = 1;  
        for(kolom ; kolom <= b; kolom++)
        {
            if (kolom <= batas)
            {
                cout<<A[baris][kolom];
            }
        }
        batas  += 1;
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