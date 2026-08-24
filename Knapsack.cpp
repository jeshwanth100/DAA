#include<iostream>
#include<algorithm>
using namespace std;
struct item{
    int value,weight;
    double ratio;
};
bool compare(item a,item b){
    return a.ratio>b.ratio;
}
int main(){
    int n,w;
    cin>>n;
    item item[n];
    for(int i=0;i<n;i++){
        cin>>item[i].value>>item[i].weight;
        item[i].ratio=(double)item[i].value/item[i].weight;
    }
    cin>>w;
    sort(item,item+n,compare);
    double profit=0;
    for(int i=0;i<n;i++){
        if(w>=item[i].weight){
            w-=item[i].weight;
            profit+=item[i].value;
        }
        else{
            profit+=item[i].ratio*w;
            break;
        }

    }
    cout<<"maximum value"<<profit;
    return 0;
}

