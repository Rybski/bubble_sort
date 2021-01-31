#include <iostream>
void tablePrint(int table[],int size){  //prints the content to the stdo
    for(int i = 0;i<size;++i){
        std::cout<<table[i]<<", ";
    }
    std::cout<<"\n";
}

int main() {        //simple bubble sort implementation from wiki. Modified to sort in descending order.
    int dane_size = 7;
    int dane[7]={7,5,9,6,7,8,10};
    tablePrint(dane,dane_size);
    int swap;
   do{
       for(int i =0; i<dane_size-1; ++i){
           if(dane[i]<dane[i+1]){
               swap=dane[i];
               dane[i]=dane[i+1];
               dane[i+1]=swap;
           }
       }dane_size = dane_size-1;
   } while (dane_size>1);
   tablePrint(dane,7);
   return 0;
}