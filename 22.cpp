#include<iostream>
using namespace std;

class Chef{
    public:
    void makePasta(){
        cout<<"The chef makes pasta"<<endl;
    }
    void makeChicken(){
        cout<<"The chef makes Chicken"<<endl;
    }
    void makeSpecialDish(){
        cout<<"The chef makes barbeque"<<endl; 
    }
};
    class ItalianChef: public Chef{
        public:
        void makePasta(){
            cout<<"The chef makes pasta"<<endl;
        }
        void makePizza(){
            cout<<"The chef makes pizza"<<endl;
        }
        void makeSpecialDish(){
            cout<<"The chef makes BAIGAN!"<<endl;
        }
};
class IndianChef: public Chef{
    public:
    void makePavBhaji(){
        cout<<"The chef makes Pav Bhaji"<<endl;
    }
    void makeOmelette(){
        cout<<"The chef makes Omelette"<<endl;
    }
    void makeBaiganKaBharta(){
        cout<<"The chef makes BAIGAN KA BHARTA!"<<endl;
    }
    void makeSpecialDish(){
        cout<<"The chef makes MOMO!"<<endl;
    }
};
int main()
{
    Chef  ch1;
    ch1.makeSpecialDish();
    IndianChef che1;
    che1.makeBaiganKaBharta();
    ItalianChef chef1;
    chef1.makeSpecialDish();

}

