#include<bits/stdc++.h>

using namespace std;

struct item{
    double weight;
    double price;
    string name;
};

bool comp(struct item item1, struct item item2){
    double i = item1.price/item1.weight;
    double j = item2.price/item2.weight;

    return i>j;
}

double fractionalKnapsack(struct item items[], int n, int W){

    sort(items, items+n, comp);
    double value = 0;

    for(int i=0; i<n; i++){
        if(W>=items[i].weight){
            value += items[i].price;
            W -= items[i].weight;
            cout<<"Taken "<<items[i].weight<<" kg's of "
            <<items[i].name<< ", Price: "<<items[i].price<<endl;
        }else{
            value += (W/items[i].weight)*items[i].price;
            cout<<"Taken "<<W%((int)items[i].weight)<<" kg's of "
            <<items[i].name<< ", Price: "
            <<(W/items[i].weight)*items[i].price<<endl;
            break;
        }
    }

    return value;

}

int main(){
    int n;
    cout<<"Number of items: ";
    cin>>n;


    struct item items[n];

    for(int i=0; i<n; i++){
        cout<<"Enter item name: ";
        cin>>items[i].name;
        cout<<"Enter the weight: ";
        cin>>items[i].weight;
        cout<<"Enter the price: ";
        cin>>items[i].price;
    }

    int W;
    cout<<"Knapsack Capacity: ";
    cin>>W;

    double gain = fractionalKnapsack(items, n, W);
    cout<<"Highest Possible Gain: "<<gain;

}
