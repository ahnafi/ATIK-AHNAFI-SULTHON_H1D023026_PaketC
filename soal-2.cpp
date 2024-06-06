#include <iostream>
using namespace std;

void sorting(int uang[],int panjang){
    int save ;
    for(int i = 0 ; i < panjang;i++){

        for(int j = 0 ; j < i ; j++){
            if(uang[j] > uang[j+1]){
                save = uang[j];
                uang[j] = uang[j+1];
                uang[j+1] = save;
            }
        }
    }
}

int main(){
    int panjang ;

    printf("masukan banyaknya uang : ");
    scanf(" %d", &panjang);

    int xxx[panjang];

    for(int i = 0 ; i < panjang; i++ ){
        scanf(" %d", &xxx[i]);
    }

    sorting(xxx,panjang);

    for (int i = 0; i < panjang; i++)
    {
        cout << xxx[i] << " "; 
    }
}