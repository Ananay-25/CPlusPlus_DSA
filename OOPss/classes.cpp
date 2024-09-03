#include<bits/stdc++.h>
using namespace std;

class Shop{

    int item_id[100];
    int item_price[100];
    int counter ;
public:
    void initialize_counter(void){ counter=0; }
    void setPrice(void);
    void getPrice(void);

};

void Shop :: setPrice(void){

    cout<<"Enter ID of the item : ";
    cin>>item_id[counter];

    cout<<"Enter price of the Item : ";
    cin>> item_price[counter];

    counter++;

}

void Shop :: getPrice(void){

    for(int i=0;i<counter;i++){

        cout<<"Price of item with id : "<< item_id[i]<<" is "<< item_price[i]<<endl;       

    }


}

int main()
{

    Shop myshop;
    myshop.initialize_counter();
    myshop.setPrice();
    myshop.setPrice();
    myshop.setPrice();
    myshop.setPrice();
    myshop.getPrice();

    return 0;
}
