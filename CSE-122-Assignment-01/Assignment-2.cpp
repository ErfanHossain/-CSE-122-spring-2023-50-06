#include<iostream>
using namespace std;
class publication
{
    public:
    string s;
    float a;
    void getData()
    {
        cout<<"Enter a title:";
        cin>>s;
        cout<<"Enter a price:";
        cin>>a;
    }
    void putData()
    {
        cout<<s<<endl<<a<<endl;
    }
};

class Book: public publication
{
    public:
    int p;
    void getData()
    {
        cout<<"adds a page:";
        cin>>p;
    }
    void putData()
    {
        cout<<p<<endl;
    }
};

class tape : public publication
{
    public:
    float t;
    void getData()
    {
        cout<<"Enter playing time :";
        cin>>t;
    }
    void putData()
    {

        cout<<t<<endl;
    }

};

int main()
{
    publication o1;
    o1.getData();
    Book o2;
    o2.getData();
    tape o3;
    o3.getData();

    o1.putData();
    o2.putData();
    o3.putData();
    return 0;
}
