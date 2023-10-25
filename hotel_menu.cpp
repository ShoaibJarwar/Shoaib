#include<iostream>
using namespace std;
int main ()
{
    char choice;
    int subcat;
    cout<<"------------------------------"<<endl;
    cout<<"Our Menu:"<<endl;
    cout<<"a: Breakfast."<<endl;
    cout<<"b: Rice Bowl."<<endl;
    cout<<"c: Salad."<<endl;
    cout<<"d: Chicken."<<endl;
    cout<<"e: Burger."<<endl;
    cout<<"f: Juice."<<endl;
    cout<<"g: Cake."<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Enter your choice.  ";
    cin>>choice;
    switch(choice)
    {
        case 'a':
        {
        cout<<"  Breakfast."<<endl;
        cout<<" ---------------------------"<<endl;
        cout<<"1: Paratha."<<endl;
        cout<<"2: Omelet."<<endl;
        cout<<"3: Green Tea."<<endl;
        cout<<"4: Dawn Slice."<<endl;
        cout<<"5: Peanut Butter."<<endl;
        cout<<"Now place your order. ";
        cin>>subcat;
        if(subcat==1)
        cout<<"You have ordered Paratha."<<endl<<"Its price is Rs.40/-.";
        else if (subcat==2)
        cout<<"You have ordered Omelet."<<endl<<"Its price is Rs.30/-.";
        else if (subcat==3)
        cout<<"You have ordered Green Tea."<<endl<<"Its price is Rs.50/-.";
        else if (subcat==4)
        cout<<"You have ordered Dawn Slice."<<endl<<"Its price is Rs.25/-.";
        else if (subcat==5)
        cout<<"You have ordered Peanut Butter."<<endl<<"Its price is Rs.25/-.";
        else
        cout<<"Invalid Entry.";
        break;
        }
        case 'b':
        {
        cout<<"  Rice Bowl."<<endl;
        cout<<" ---------------------------"<<endl;
        cout<<"1: Chicken Biryani."<<endl;
        cout<<"2: Veg Biryani."<<endl;
        cout<<"3: Plain Rice."<<endl;
        cout<<"4: Beef Pulao."<<endl;
        cout<<"5: Rice Bowl."<<endl;
        cout<<"Now place your order. ";
        cin>>subcat;
        if(subcat==1)
        cout<<"You have ordered Chicken Biryani."<<endl<<"Its price is Rs.120/-.";
        else if (subcat==2)
        cout<<"You have ordered Veg Biryani."<<endl<<"Its price is Rs.100/-.";
        else if (subcat==3)
        cout<<"You have ordered Plain Rice."<<endl<<"Its price is Rs.90/-.";
        else if (subcat==4)
        cout<<"You have ordered Beef Pulao."<<endl<<"Its price is Rs.150/-.";
        else if (subcat==5)
        cout<<"You have ordered Rice Bowl."<<endl<<"Its price is Rs.110/-.";
        else
        cout<<"Invalid Entry.";
        break;
    }
    case 'c':
        {
        cout<<"  Salad."<<endl;
        cout<<" ---------------------------"<<endl;
        cout<<"1: Greek Salad."<<endl;
        cout<<"2: Asian Chicken Salad"<<endl;
        cout<<"3: Caesar Salad."<<endl;
        cout<<"4: Broccoli Rabe."<<endl;
        cout<<"Now place your order. ";
        cin>>subcat;
        switch (subcat)
        {
            case 1:
            cout<<"You have ordered Greek Salad."<<endl<<"Its price is Rs.20/-.";
            break;
            case 2:
             cout<<"You have ordered Asian Chicken Salad."<<endl<<"Its price is Rs.25/-.";
              break;
            case 3:
               cout<<"You have ordered Caesar Salad."<<endl<<"Its price is Rs.20/-.";
                break;
           case 4:
               cout<<"You have ordered Broccoli Rabe."<<endl<<"Its price is Rs.25/-.";
               break;
           default:
               cout<<"Invalid Entry.";
               break;
        }
        break;
        }
        case 'd':
        {
        cout<<"  Chicken."<<endl;
        cout<<" ---------------------------"<<endl;
        cout<<"1: Chicken Grilled."<<endl;
        cout<<"2: Chicken Wrap."<<endl;
        cout<<"3: Chicken Marsala."<<endl;
        cout<<"4: Finger Chicken."<<endl;
        cout<<"Now place your order. ";
        cin>>subcat;
        switch (subcat)
        {
            case 1:
               cout<<"You have ordered Chicken Grilled."<<endl<<"Its price is Rs.90/-.";
               break;
             case 2:
                cout<<"You have ordered Chicken Wrap."<<endl<<"Its price is Rs.70/-.";
                break;
              case 3:
                cout<<"You have ordered Chicken Marsala."<<endl<<"Its price is Rs.100/-.";
                break;
              case 4:
                cout<<"You have ordered Chicken Finger."<<endl<<"Its price is Rs.125/-.";
                break;
              default:
               cout<<"Invalid Entry.";
               break;
        }
        break;
        }
        case 'e':
        {
        cout<<"  Burger."<<endl;
        cout<<" ---------------------------"<<endl;
        cout<<"1: Classic Burger."<<endl;
        cout<<"2: Veggie Burger."<<endl;
        cout<<"3: Spicy Burger."<<endl;
        cout<<"4: Chicken Burger."<<endl;
        cout<<"5: Zinger."<<endl;
        cout<<"Now place your order. ";
        cin>>subcat;
        if(subcat==1)
        cout<<"You have ordered Classic Burger."<<endl<<"Its price is Rs.120/-.";
        else if (subcat==2)
        cout<<"You have ordered Veggie Burger."<<endl<<"Its price is Rs.130/-.";
        else if (subcat==3)
        cout<<"You have ordered Spicy Burger."<<endl<<"Its price is Rs.110/-.";
        else if (subcat==4)
        cout<<"You have ordered Chicken Burger."<<endl<<"Its price is Rs.135/-.";
        else if (subcat==5)
        cout<<"You have ordered Zinger."<<endl<<"Its price is Rs.150/-.";
        else
        cout<<"Invalid Entry.";
        break;
        }
        case 'f':
        {
        cout<<"  Juice."<<endl;
        cout<<" ---------------------------"<<endl;
        cout<<"1: Orange Juice."<<endl;
        cout<<"2: Lemonade."<<endl;
        cout<<"3: Apple Juice."<<endl;
        cout<<"4: Grape Juice."<<endl;
        cout<<"5: Pineapple Juice."<<endl;
        cout<<"Now place your order. ";
        cin>>subcat;
        if(subcat==1)
        cout<<"You have ordered Orange Juice."<<endl<<"Its price is Rs.100/-.";
        else if (subcat==2)
        cout<<"You have ordered Lemonade."<<endl<<"Its price is Rs.50/-.";
        else if (subcat==3)
        cout<<"You have ordered Apple Juice."<<endl<<"Its price is Rs.90/-.";
        else if (subcat==4)
        cout<<"You have ordered Grape Juice."<<endl<<"Its price is Rs.75/-.";
        else if (subcat==5)
        cout<<"You have ordered Pineapple Juice."<<endl<<"Its price is Rs.85/-.";
        else
        cout<<"Invalid Entry.";
        break;
        }
        case 'g':
        {
        cout<<"  Cake."<<endl;
        cout<<" ---------------------------"<<endl;
        cout<<"1: Pineapple Cake."<<endl;
        cout<<"2: Eggless Truffle Cake."<<endl;
        cout<<"3: Coffee Cake With Mocha Frosting."<<endl;
        cout<<"Now place your order. ";
        cin>>subcat;
        switch(subcat)
        {
            case 1:
              cout<<"You have ordered Pineapple Cake."<<endl<<"Its price is Rs.150/-.";
              break;
            case 2:
              cout<<"You have ordered Eggless Truffle Cake."<<endl<<"Its price is Rs.120/-.";
              break;
             case 3:
              cout<<"You have ordered Coffee Cake with Mocha Frosting."<<endl<<"Its price is Rs.160/-.";
              break;
             default:
              cout<<"Invalid Entry.";
              break;
        }
       break;
        }
        default:
        cout<<"Invalid Entry.";
    }
}
