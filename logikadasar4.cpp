#include <iostream>

void screendisplay(int row, int columns){
    int right{columns}, left{1};
    int r, k;

    for(r = 1; r <=  row; r++){
        k = 1;
        for(k; k <= columns; k++){
            if(k >= left && k <= right){
                std::cout<<left<<" ";
            }
            else{
                std::cout<<0<<" ";
            }
        }
        left += 1;
        right -= 1;
        std::cout<<std::endl;
    }

}
int main(){
    int i = 5, j = 9;
    screendisplay(i, j);
    return 0;
}