#include<iostream>
using namespace std;
class Smartphone
{
public:
    virtual void takeSelfie()=0;
    virtual void makeCall()=0;
};

class Android : public Smartphone
{
public:
    void takeSelfie()
    {
        cout<<"Take selfie with Android"<<endl;
    }
    void makeCall()
    {
        cout<<"Making call using Android"<<endl;
    }

};

class Iphone : public Smartphone
{
public:

    void takeSelfie()
    {
        cout<<"Take selfie with Iphone"<<endl;
    }
    void makeCall()
    {
        cout<<"Making call using Iphone"<<endl;
    }

};

int main()
{
    Android *a=new Android;
    a->takeSelfie();
    a->makeCall();
    delete a;

    Iphone *i=new Iphone;
    i->takeSelfie();
    i->makeCall();
    delete i;
    return 0;
}
