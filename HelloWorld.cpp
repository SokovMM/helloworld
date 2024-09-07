#include <iostream>

template<typename number_t, typename index_t> number_t get_fibbonachi_number(index_t required_number) {
    number_t first_last_number = 1, second_last_number = 1;
    for (index_t current_number_index = 2; current_number_index < required_number; current_number_index++) {
        number_t current_number = first_last_number + second_last_number;
        first_last_number = second_last_number, second_last_number = current_number;
    }
    return second_last_number;
}

void sortArray(int a[],int n){
    for (int i =1;i<n;i++){

        int j=i-1;
        int key=a[i];

        while(j>=0 && key<a[j]){
            a[j+1]=a[j];
            j--;


        }
        a[j+1]=key;
    
    }

//7 5 3 4 10
//

}

    void printArray(int a[],int n){

        for(int i=0;i<n;i++){
    
        
        printf("%d",a[i]);
        printf("\n");

        }
}

int main()
{
    int b[]={5,10,3,12,17};
    printArray(b,5);
    sortArray(b,5);
        printArray(b,5);
    

    std::cout << "Hello world!" << std::endl;

    const unsigned short fibbonachi_numbers_amount = 10;
    std::cout << "Here goes first " << fibbonachi_numbers_amount << " fibbonachi numbers: ";
    for (unsigned short n = 1; n <= 10; n++) std::cout << get_fibbonachi_number<unsigned long long, unsigned short>(n) << ' ';
    std::cout << std::endl;

    return 0;
}