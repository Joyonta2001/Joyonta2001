#include<iostream>
using namespace std;
class box;
class product;

class box{
    double v;
    public:
void setVolume();

friend bool checksize(box,product);
};

void box::setVolume(){

cout<<"Enter volume"<<endl;
cin>>v;
}

class product{
    double l,w,d,e;
public:
    void setDimentions();
    friend bool checksize(box,product);
};

void product::setDimentions(){

cout<<"Enter lenght,width,product"<<endl;
cin>>l>>w>>d;
e=l*w*d;
}
bool checksize(box b1,product m1){
if(m1.e<=b1.v){
    return true;
}
else
    return false;

}
int main(){
    box b1;
product m1;
m1.setDimentions();
b1.setVolume();

bool f=checksize(b1,m1);
//cout<<f;
if(f==true)
    cout<<"True"<<endl;
else
    cout<<"False"<<endl;
return 0;
}
