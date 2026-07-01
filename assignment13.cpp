#include<iostream>
using namespace std;
class playlist
{
    public:
    string name;
    string createOn;
    bool isPublic;
    void display(){
        cout<<"playlist name :"<<name<<endl;
        cout<<"created on :"<<createOn<<endl;
        cout<<"Public :";
        if(isPublic)
        cout<<"yes";
        else
        cout<<"no";
        cout<<endl;
    }
};
int main(){
playlist p1;
p1.name ="My Favourite Songs";
p1.createOn ="01-07-2026";
p1.isPublic= true;
p1.display();
return 0;
}