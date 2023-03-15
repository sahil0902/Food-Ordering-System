//issue on totalbill

#include <iostream>
#include<cmath>
#include<string>
#include<fstream>





using namespace std;
class intro {
public:
    string name;


    void startop() {

        cout << "                                                                 " << endl;
        cout << "                                                                 " << endl;
        cout << "                                                                 " << endl;
        cout << "                                                                 " << endl;

        cout << "\t\t\t|-------------------------------------------------------|\n";
        cout << "\t\t\t|                     WELCOME                           |\n";
        cout << "\t\t\t|-------------------------------------------------------|\n\n";
        cout << "\t\t\t|-------------------------------------------------------|\n";
        cout << "\t\t\t|                Fast Food Ordering System              |\n";
        cout << "\t\t\t|-------------------------------------------------------|\n\n";
    }
    void udata() {
        cout << "Hello! Dear User " << endl;
        cout << "Please Enter your name:" << endl;
        cin >> name;
    }
};

class location : public intro {
public:
    string postcode1;
    string postcode2;
    string housen;
    void userloc()
    {
        cout << " dear " << name << endl;
        cout << "Enter Your  1st 3 digits of Postcode:" << endl;
        cin >> postcode1;
        cout << "Enter Your last 3 digits of Postcode:" << endl;
        cin >> postcode2;
        cout << "Enter Your House Number : " << endl;
        cin >> housen;
        cout << "_____________________________________________________________________________________________" << endl;
        cout << "We have noted your Adress:)" << endl;
        cout << "Your Postcode: " << postcode1 << " " << postcode2 << endl;
        cout << "Your Housenumber: " << housen << endl;
        cout << "Thankyou! for copearating with us :)" << endl;
        cout << "_____________________________________________________________________________________________" << endl;
    }

};

class payment {
private://encapsulation to hide sensitive data 
    int lim1 = 0;
    int lim2 = 3;
public:
    double num1;
    int num2, num3;
    int len;

    int choice;//payment method


    void ask()
    {
        cout << "Do you want to pay by:" << endl;
        //to let the user used any method they want
        cout << "1-Online-//x( CREDIT/DEBIT CARD)" << endl;
        cout << "2.Cash on deleivery" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
        showagain:
            cout << "Please Enter your 8 Digit Credit Card Number: " << endl;//if user chooses 1

            cin >> num1;

            len = log10(num1) + 1;//used to find length of number


            if (len == 8)//if length is equal is equal to 8 then it will go down 
            {

                cout << "Enter Expiry Date: " << endl;
                cin >> num2;
                cout << "Enter (3 digit) security Code: " << endl;
                cin >> num3;

                cout << "-------------------------------------------------------------------------------------------------" << endl;
                cout << "Your Food with Choosen drink will be dilvered to your current location within 10 minutes" << endl;
                cout << "Stay Happy!" << endl;
                cout << "-------------------------------------------------------------------------------------------------" << endl;

            }
            else if (len != 8) {
                cout << "Your card details are wrong " << endl;
                cout << "Enter you details again " << endl;
                goto showagain;//if the length is not equal to 8  it will go again to showagain 

            }
            break;
        case 2:
            cout << "As you have choosed Cash on deleivery method" << endl;
            cout << " So, you have to pay when deleivery boy gives you your food" << endl;
            cout << "Get your amount ready" << endl;
            break;
        default:
            cout << "As you have choosed Cash on deleivery method" << endl;
            cout << " So, you have to pay when deleivery boy gives you your food" << endl;
            cout << "Get your amount ready" << endl;

        }



    }
};

class menu {
public:

    string Menu[9] = {
      "NOT AVAIALABLE :(",//if the user put zero so it can display this
      "Rice",
      "Meat",
      "Noodles",
      "Pizza",
      "Burger",
      "Tea",
      "Coffee",
      "MUTTON"
    };
    string prices[9] = {
" ",
    "Rice:5.55$",
    "Meat:7$",
    "Noodles:3$",
    "Pizza:5$",
    "Burger:4$",
    "Tea:2$",
    "Coffee:3.5$",
    "MUTTON:6$"
    };
    double rate[9] = {
      0,
      5.55,
      7,
      3,
      5,
      4,
      2,
      3.5,
      6
    };

};

class order : public menu {
public:
    int x, x2, x3, x4, x5;
    double total, qty2, qty, qty3;
    double total2, discount;
    //for drinks
    int c2, i, s;
    double total3;
    double dsc2, dsc3;
    double drkquan;
    double z9;
    void orderfood()
    {






        cout << "-------" << " " << "------" << endl;

        for (int i = 1; i < 9; i++) {
            cout << i << "-" << prices[i] << endl;//to execute the prices
        }

        cout << "-------" << " " << "------" << endl;
        cout << "Select  what you want to eat( : : : Select in Numbers: : : : ) " << endl;

        cin >> x;
        //if the user inserted 0 it will display not avaialble and any number gretaer then 8 it will display invalid choice and will sk the user if they want to order something else too
        if (x == 1)

        {
            //deleted();
            cout << " Great Choice " << endl << "Your Order: " << Menu[1] << endl << "Good Choice! it is  the most hot deal " << endl;
            cout << "How Much" << " " << Menu[x] << " do you want?" << endl;
            cin >> qty;
            cout << "Do you want to order something again from the Menu " << " " << "?" << " (press 1 for yes and 0 for N0)" << endl;
            cin >> x2;
            if (x2 == 1)
            {
                cout << "What do you want to order again(SELECT IN NUMBERS) " << " ? " << endl;
                cin >> x3;
                if (x3 == 0 || x3 > 8)//if their 2nd choice is invalid
                {
                    cout << "Sorry! Invalid Choice" << endl;
                    goto here;
                }

                cout << "You Choosed:" << "  " << Menu[x3] << endl;
                cout << "How Much\t" << " " << Menu[x3] << " do you want?" << endl;
                cin >> qty2;

                cout << "You choosed:\t" << " " << Menu[x3] << " " << "Along with your previous Order:" << " " << Menu[x] << endl;
            here:
                cout << "Do you want to order anything else too? (press 1 for yess || any other number for no)" << " " << endl;
                cin >> x4;
                if (x4 == 1)
                {
                    cout << "What do you want to order again(SELECT IN NUMBERS) " << " ? " << endl;
                    cin >> x5;
                    if (x5 == 0 || x5 > 8)//if their 3rd choice is invalid
                    {
                        cout << "Sorry! Invalid Choice" << endl;
                        goto here2;// as the 3rd product is not selected so it will go to here2
                    }

                    cout << "You Choosed:" << "  " << Menu[x5] << endl;
                    cout << "How Much\t" << " " << Menu[x5] << " do you want?" << endl;
                    cin >> qty3;
                }
                if (x5 > 0 || x5 < 9) {
                    total = qty * rate[x] + qty2 * rate[x3] + qty3 * rate[x5];//only when user selected 3rd item
                }
                else {
                here2:
                    total = qty * rate[x] + qty2 * rate[x3];//when user only select 2 ietms
                }
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    cout << "Bill after the discount" << endl;
                    cout << endl;
                    cout << "Discounted Bill is:" << total2 << "$" << endl;

                    //deleted();
                }
                else
                {

                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }

            }
            else
            {

                total = qty * rate[x];//when user only select 1 item
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }

                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }
            }

            //v;
            //v;

            //x();


            //deleted();

        }
        else if (x == 2) {
            //deleted();

            cout << " Great Choice" << " " << endl << "Your Order: " << Menu[2] << endl << "Good Choice! it is  the most famous food in our SHOP" << endl;
            cout << "How Much" << " " << Menu[x] << " do you want?" << endl;
            cin >> qty;
            cout << "Do you want to order something again from the Menu " << "?" << " (press 1 for yes and 0 for N0)" << endl;
            cin >> x2;
            if (x2 == 1)
            {
                cout << "What do you want to order again(SELECT IN NUMBERS)\t" << " ? " << endl;
                cin >> x3;
                if (x3 == 0 || x3 > 8)
                {
                    cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                    goto noway;//i have to use different label  in other parts becuase it was giving error
                }

                cout << "You Choosed:" << " " << Menu[x3];
                cout << "How Much" << " " << Menu[x3] << "\tdo you want?" << endl;
                cin >> qty2;

                cout << "You choosed:" << " " << Menu[x3] << " " << "\tAlong with your previous Order:" << " " << Menu[x] << endl;
            noway:
                cout << "Do you want to order anything else too? (press 1 for yess || any other number for no)" << " " << " " << endl;
                cin >> x4;
                if (x4 == 1)
                {
                    cout << "What do you want to order again(SELECT IN NUMBERS) " << " " << " ? " << endl;
                    cin >> x5;
                    if (x5 == 0 || x5 > 8)
                    {
                        cout << "Invalid Choice!" << endl;
                        goto noway2;
                    }

                    cout << "You Choosed:" << "  " << Menu[x5] << endl;
                    cout << "How Much\t" << " " << Menu[x5] << " do you want?" << endl;
                    cin >> qty3;
                }
                if (x5 > 0 || x5 < 9) {
                    total = qty * rate[x] + qty2 * rate[x3] + qty3 * rate[x5];
                }//when user select 3 ietms
                else {
                noway2:
                    total = qty * rate[x] + qty2 * rate[x3];//when user only select 2 ietms
                }
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }
                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }

            }
            else
            {

                total = qty * rate[x];//when user select 1 item
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }


                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }
            }

            //v;
            //v;


            //x();


            //deleted();
        }
        else if (x == 3) {
            //deleted();

            cout << " Great Choice " << " " << " " << endl << "Your Order: " << Menu[3] << endl << "Good Choice! || it is the most favorite deal " << endl;
            cout << "How Much" << " " << Menu[x] << " do you want?" << endl;
            cin >> qty;
            cout << "Do you want to order something again from the Menu " << " " << "?" << "(press 1 for yes and 0 for N0)" << endl;
            cin >> x2;
            if (x2 == 1)
            {
                cout << "What do you want to order again(SELECT IN NUMBERS)\t " << " " << " ? " << endl;
                cin >> x3;
                if (x3 == 0 || x3 > 8)
                {
                    cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                    goto out;
                }

                cout << "You Choosed:\t" << "  " << Menu[x3] << endl;
                cout << "How Much\t" << " " << Menu[x3] << "do you want?" << endl;
                cin >> qty2;

                cout << "You choosed:" << " " << Menu[x3] << " " << "Along with your previous Order:" << " " << Menu[x] << endl;
            out:
                cout << "Do you want to order anything else too? (press 1 for yess || any other number for no)" << " " << " " << endl;
                cin >> x4;
                if (x4 == 1)
                {
                    cout << "What do you want to order again(SELECT IN NUMBERS) " << " " << " ? " << endl;
                    cin >> x5;
                    if (x5 == 0 || x5 > 8)
                    {
                        cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                        goto out2;
                    }

                    cout << "You Choosed:" << "  " << Menu[x5] << endl;
                    cout << "How Much\t" << " " << Menu[x5] << " do you want?" << endl;
                    cin >> qty3;
                }
                if (x5 > 0 || x5 < 9) {
                    total = qty * rate[x] + qty2 * rate[x3] + qty3 * rate[x5];
                }//when user slset 3 ietms
                else {
                out2:
                    total = qty * rate[x] + qty2 * rate[x3];//when user select 2 items
                }
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }
                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }

            }
            else
            {

                total = qty * rate[x];//when user only select 1 ietms
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }

                else

                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }
            }

            //v;
            //v;


            //x();
            //deleted();
        }
        else if (x == 4) {
            //deleted();

            cout << " Great Choice " << " " << " " << endl << "Your Order: " << Menu[4] << endl << "Good Choice! " << endl;

            cout << "How Much" << " " << Menu[x] << " do you want?" << endl;
            cin >> qty;

            cout << "Do you want to order something again from the Menu " << " " << "?" << "(press 1 for yes and 0 for N0)" << endl;

            cin >> x2;
            if (x2 == 1)
            {
                cout << "What do you want to order again " << " " << "?" << endl;
                cin >> x3;
                if (x3 == 0 || x3 > 8)
                {
                    cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                    goto there;
                }

                cout << "You Choosed:" << "  " << Menu[x3] << endl;
                cout << "How Much" << " " << Menu[x3] << " do you want?" << endl;
                cin >> qty2;

                cout << "You choosed:" << " " << Menu[x3] << "  " << "Along with your previous Order:" << " " << Menu[x] << endl;
            there:
                cout << "Do you want to order anything else too? (press 1 for yess || any other number for no)" << " " << " " << endl;
                cin >> x4;
                if (x4 == 1)
                {
                    cout << "What do you want to order again(SELECT IN NUMBERS) " << " " << " ? " << endl;
                    cin >> x5;
                    if (x5 == 0 || x5 > 8)
                    {
                        cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                        goto there2;
                    }

                    cout << "You Choosed:" << "  " << Menu[x5] << endl;
                    cout << "How Much" << " " << Menu[x5] << " do you want?" << endl;
                    cin >> qty3;
                }
                if (x5 > 0 || x5 < 9) {
                    total = qty * rate[x] + qty2 * rate[x3] + qty3 * rate[x5];//only when user selected 3rd item
                }
                else {
                there2:
                    total = qty * rate[x] + qty2 * rate[x3];////when user only select 2 ietms

                }

                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }
                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }

            }
            else
            {

                total = qty * rate[x];//when user only select 1 ietm
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }

                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }
            }



            ////v;
            //v;

            //x();
            //deleted();
        }
        else if (x == 5) {
            //deleted();


            cout << " Great Choice " << " " << " " << endl << "Your Order: " << Menu[5] << endl << "Good Choice! it is  the most famous food in our SHOP" << endl;

            cout << "How Much" << " " << Menu[x] << " do you want?" << endl;
            cin >> qty;
            cout << "Do you want to order something again from the Menu " << " " << "?" << "(press 1 for yes and 0 for N0)" << endl;
            cin >> x2;
            if (x2 == 1)
            {
                cout << "What do you want to order again(SELECT IN NUMBERS)\t" << " " << " ? " << endl;
                cin >> x3;
                if (x3 == 0 || x3 > 8)
                {
                    cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                    goto bye;
                }

                cout << "You Choosed:" << "  " << Menu[x3] << endl;
                cout << "How Much" << " " << Menu[x3] << " do you want?" << endl;
                cin >> qty2;

                cout << "You choosed:" << " " << Menu[x3] << " " << "Along with your previous Order:" << " " << Menu[x] << endl;
            bye:
                cout << "Do you want to order anything else too? (press 1 for yess || any other number for no)" << " " << " " << endl;
                cin >> x4;
                if (x4 == 1)
                {
                    cout << "What do you want to order again(SELECT IN NUMBERS) " << " " << " ? " << endl;
                    cin >> x5;
                    if (x5 == 0 || x5 > 8)
                    {
                        cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                        goto bye2;
                    }

                    cout << "You Choosed:" << "  " << Menu[x5] << endl;
                    cout << "How Much\t" << " " << Menu[x5] << " do you want?" << endl;
                    cin >> qty3;
                }
                if (x5 > 0 || x5 < 9) {
                    total = qty * rate[x] + qty2 * rate[x3] + qty3 * rate[x5];//only when user selected 3rd item
                }
                else {
                bye2:
                    total = qty * rate[x] + qty2 * rate[x3];////when user only select 2 ietms
                }

                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }
                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }

            }
            else
            {

                total = qty * rate[x];//when user only select 1 ietm
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }

                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }
            }




            //v;


            //x();
            //deleted();
        }
        else if (x == 6) {
            //deleted();


            cout << " Great Choice " << " " << " " << endl << "Your Order: " << Menu[6] << endl << "Good Choice! it is  the most famous food in our SHOP" << endl;


            cout << "How Much" << " " << Menu[x] << " do you want?" << endl;
            cin >> qty;
            cout << "Do you want to order something again from the Menu " << " " << "?" << "(press 1 for yes and 0 for N0)" << endl;
            cin >> x2;

            if (x2 == 1)
            {
                cout << "What do you want to order again(SELECT IN NUMBERS)\t" << " " << " ? " << endl;
                cin >> x3;
                if (x3 == 0 || x3 > 8)
                {
                    cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                    goto ex;
                }

                cout << "You Choosed:" << "  " << Menu[x3] << endl;
                cout << "How Much" << " " << Menu[x3] << " do you want?" << endl;
                cin >> qty2;

                cout << "You choosed:" << " " << Menu[x3] << " " << "Along with your previous Order:" << " " << Menu[x] << endl;
            ex:
                cout << "Do you want to order anything else too? (press 1 for yess || any other number for no)" << " " << " " << endl;
                cin >> x4;
                if (x4 == 1)
                {
                    cout << "What do you want to order again(SELECT IN NUMBERS) " << " " << " ? " << endl;
                    cin >> x5;
                    if (x5 == 0 || x5 > 8)
                    {
                        cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                        goto ex2;
                    }

                    cout << "You Choosed:" << "  " << Menu[x5] << endl;
                    cout << "How Much\t" << " " << Menu[x5] << " do you want?" << endl;
                    cin >> qty3;
                }
                if (x5 > 0 || x5 < 9) {
                    total = qty * rate[x] + qty2 * rate[x3] + qty3 * rate[x5];//only when user selected 3rd item
                }
                else {
                ex2:
                    total = qty * rate[x] + qty2 * rate[x3];//when user only select 2 ietms
                }
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }
                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }

            }
            else
            {

                total = qty * rate[x];//when user only select 1 ietms
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }

                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }
            }
            //v;
            //v;

            //x();
            //deleted();
        }
        else if (x == 7) {
            //deleted();


            cout << " Great Choice " << " " << " " << endl << "Your Order: " << Menu[7] << endl << "Good Choice! it is  the most famous food in our SHOP" << endl;

            cout << "How Much" << " " << Menu[x] << " do you want?" << endl;
            cin >> qty;
            cout << "Do you want to order something again from the Menu " << " " << "?" << "(press 1 for yes and 0 for N0)" << endl;
            cin >> x2;

            if (x2 == 1)
            {
                cout << "What do you want to order again(SELECT IN NUMBERS)\t" << " " << " ? " << endl;
                cin >> x3;
                if (x3 == 0 || x3 > 8)
                {
                    cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                    goto wrong;
                }

                cout << "You Choosed:" << "  " << Menu[x3] << endl;
                cout << "How Much\t" << " " << Menu[x3] << " do you want?" << endl;
                cin >> qty2;

                cout << "You choosed:" << " " << Menu[x3] << " " << "Along with your previous Order:" << " " << Menu[x] << endl;
            wrong:
                cout << "Do you want to order anything else too? (press 1 for yess || any other number for no)" << " " << " " << endl;
                cin >> x4;
                if (x4 == 1)
                {
                    cout << "What do you want to order again(SELECT IN NUMBERS) " << " " << " ? " << endl;
                    cin >> x5;
                    if (x5 == 0 || x5 > 8)
                    {
                        cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                        goto wrong2;
                    }

                    cout << "You Choosed:" << "  " << Menu[x5] << endl;
                    cout << "How Much\t" << " " << Menu[x5] << " do you want?" << endl;
                    cin >> qty3;
                }
                if (x5 > 0 || x5 < 9) {
                    total = qty * rate[x] + qty2 * rate[x3] + qty3 * rate[x5];//only when user selected 3rd item
                }
                else {
                wrong2:
                    total = qty * rate[x] + qty2 * rate[x3];//when user only select 2 ietms
                }
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }
                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }

            }
            else
            {

                total = qty * rate[x];//when user only select 1 ietms
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }

                else

                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }

            }
            //v;
            //v;



            //x();
            //deleted();
        }
        else if (x == 8) {
            //deleted();


            cout << " Great Choice " << " " << " " << endl << "Your Order: " << Menu[8] << endl << "Good Choice! it is  the most famous food in our SHOP" << endl;

            cout << "How Much" << " " << Menu[x] << " do you want?" << endl;
            cin >> qty;
            cout << "Do you want to order something again from the Menu" << " " << " " << "?" << "(press 1 for yes and 0 for N0)" << endl;
            cin >> x2;
            if (x2 == 1)
            {
                cout << "What do you want to order again(SELECT IN NUMBERS)\t" << " " << " ? " << endl;
                cin >> x3; if (x3 == 0 || x3 > 8)
                {
                    cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                    goto live;
                }

                cout << "You Choosed:" << "  " << Menu[x3] << endl;
                cout << "How Much\t" << "   " << Menu[x3] << "\tdo you want?" << endl;
                cin >> qty2;

                cout << "You choosed:" << " " << Menu[x3] << " " << "\tAlong with your previous Order:" << " " << Menu[x] << endl;
            live:
                cout << "Do you want to order anything else too? (press 1 for yess || any other number for no)" << " " << " " << endl;
                cin >> x4;
                if (x4 == 1)
                {
                    cout << "What do you want to order again(SELECT IN NUMBERS) " << " " << " ? " << endl;
                    cin >> x5;
                    if (x5 == 0 || x5 > 8)
                    {
                        cout << "Sorry this ietm is not avaialble at the moment!" << endl;
                        goto ex3;
                    }

                    cout << "You Choosed:" << "  " << Menu[x5] << endl;
                    cout << "How Much\t" << " " << Menu[x5] << " do you want?" << endl;
                    cin >> qty3;
                }
                if (x5 > 0 || x5 < 9) {
                    total = qty * rate[x] + qty2 * rate[x3] + qty3 * rate[x5];//only when user selected 3rd item
                }
                else {
                ex3:
                    total = qty * rate[x] + qty2 * rate[x3];//when user only select 2 ietms
                }

                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }
                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }

            }
            else
            {

                total = qty * rate[x];//when user only select 1 ietm
                if (total > 10)
                {
                    discount = (0.1 * total);
                    total2 = total - discount;
                    //deleted();
                    cout << " AS your total bill is greater than 10$ so you have been given a discount of 10%" << endl;
                    cout << "Your discounted Bill is:" << total2 << "$" << endl;
                    cout << "OLD BILL:" << total << "$" << endl;
                    //deleted();
                }

                else
                {
                    //deleted();
                    cout << "Your Bill is:" << total << "$" << endl;
                    //deleted();
                }
            }
            //v;
            //v;



            //x();
            //deleted();
        }
        else if (x > 8 || x == 0) {

            //deleted();

            cout << "Invalid Choice!!!" << endl;

            //  goto exit;//if the user insert first choice wrong so it can go to line 1217 while skipping all the statement coming before it
              //deleted();

        }

        else
        {
            cout << "Restart your app" << endl;
        }



    }
    void orderdrink()
    {
        cout << " Do you want any drink with your meal? " << " " << endl;
        cin >> c2;
        if (c2 == 1)

        {
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            string drink[5] = { " " ,"Coca-Cola:2$","7-UP:1.5$","Sprit:1.8$","DEW:1.4$" };
            string drinkx[5] = { " " ,"Coca-Cola","7-UP:$","Sprit","Dew" };

            double prices[5] = { 0,2,1.5,1.8,1.4 };
            for (i = 1; i < 5; i++) {
                cout << i << "-" << drink[i] << endl;
            }
            cout << "Please Choose any of the given drink:" << endl;
            cin >> s;

            if (s <= 4) {
                cout << "How much do you want???" << endl;
                cin >> drkquan;
                cout << "Drink Choosen: " << drinkx[s] << endl;
                cout << "Price: " << prices[s] << "$" << endl;

                cout << " Hope you will enjoy this drink " << endl;
                z9 = drkquan * prices[s];
                if (total > 10)//only if the total bill is greater than 10$ then it will use value stored in total2
                {
                    total3 = total2 + z9;
                    cout << "Total Bill after ordering drink::" << total3 << "$" << endl;
                }
                else//otherwise use value stored in total
                {
                    total3 = total + z9;
                    cout << "Total Bill after ordering drink::" << total3 << "$" << endl;
                }
            }
            else {
                cout << "Its okay no problem " << endl;
            }
        }

        else {

            cout << "Its Okay no problem!!!!" << endl;
        }
    }
    void dsc()//pollymorphism
    {
        cout << " Hoping to see you again!!!!" << endl;
    }
};






class discount : public order

{
public:
    double dsc2, dsc3;
    void dsc() {
        // cout << " Your totoal Bill:" << total3 << endl;

        {
            cout << " Checking if you are eligile for further more discount" << endl;

            if (total3 > 40) {

                dsc2 = (0.2 * total3);
                dsc3 = total3 - dsc2;
                cout << " As your total bill is more than 40$ you will get more discount" << endl;
                cout << " New bill:" << dsc3 << endl;
            }
            else
            {
                cout << "Sorry to say! you are not egible !!!!" << endl;
            }
        }
    }
};
class printreceipt : public location, public payment, public discount
{
private:
    int r1;
public:
    void printr() {


        if (x > 0 || x < 9) {


            cout << "DO YOU WANT to print RECEIPT ?(1 for yess)" << endl;
            cin >> r1;
            if (r1 == 1)
            {
                ofstream food;
                food.open("receipt.txt");//name of text file

                cout << endl << endl << "\t\t======================================================" << endl;
                food << endl << endl << "\t\t======================================================" << endl;
                cout << "\t\t\t ONLINE FOOD DELIVERY APP " << endl;
                cout << "\t\t======================================================" << endl << endl << endl;

                food << "\t\t\t ONLINE FOOD DELIVERY APP " << endl;
                food << "\t\t======================================================" << endl << endl << endl;
                cout << "\t\t\tRECEIPT:" << endl;
                food << "\t\t\tRECEIPT:" << endl;
                cout << "Coustomer:" << " " << name << "\t " << endl;
                food << "Coustomer:" << " " << name << "\t " << endl;
                cout << "LOCATION:";
                food << "LOCATION:";
                cout << "\t\tPostcode: " << postcode1;
                food << "\t\tPostcode: " << postcode1;
                cout << postcode2;
                food << postcode2;
                cout << "\t\tHousenumber:" << housen << endl;
                food << "\t\tHousenumber:" << housen << endl;


                if (c2 == 1) {
                    cout << "Drink:" << " ";
                    food << "Drink:" << " ";
                    switch (s)//i have to use this loop cuz i wasnt able to use drink[s] in drink section
                    {
                    case 1:
                        cout << "Coca-Cola";
                        food << "Coca-Cola";

                        break;
                    case 2:
                        cout << "7-UP";
                        food << "7-UP";
                        break;
                    case 3:
                        cout << "Sprite";
                        food << "Sprite";
                        break;
                    case 4:
                        cout << "DEW";
                        food << "DEW";
                        break;
                    default://if he input a wrong value
                        cout << " NO Drinl Choosen" << endl;
                        food << " NO Drinl Choosen" << endl;


                    }

                }
                else
                {
                    cout << "|| NO DRINK CHOOSEN ||" << endl;
                }
                if (c2 == 1) {


                    cout << "\tQTY:" << drkquan << endl;
                    food << "\tQTY:" << drkquan << endl;
                }



                cout << "\nItem:" << "\t(1st)\t " << Menu[x] << "  " << "QTY:" << qty << endl;
                food << "\nItem:" << "\t(1st)\t " << Menu[x] << "  " << "QTY:" << qty << endl;
                if (x3 > 0)
                {
                    cout << "Item:" << "\t(2nd)\t" << Menu[x3] << "  " << "QTY:" << qty2 << endl;
                    food << "Item:" << "\t(2nd)\t" << Menu[x3] << "  " << "QTY:" << qty2 << endl;
                    if (x5 > 0) {
                        cout << "Item:" << "\t(3rd)\t" << Menu[x5] << "  " << "QTY:" << qty3 << endl;
                        food << "Item:" << "\t(3rd)\t" << Menu[x5] << "  " << "QTY:" << qty3 << endl;
                        if (total > 10)
                        {//after choosing all the items if the total bill is greatee than 10$
                            cout << name << "\tAs your total bill is more than 40$ you will get more discount" << endl;
                            food << name << "\t\tAs your total bill is more than 40$ you will get more discount" << endl;
                            cout << " DISCOUNTED BILL:" << " " << total2 << "$" << endl;
                            food << " DISCOUNTED BILL:" << " " << total2 << "$" << endl;

                        }
                    }
                    else {//if the user not chooses 3rd item it will then display this
                        cout << name << "\tAs your total bill is more than 40$ you will get more discount" << endl;
                        food << name << "\t\tAs your total bill is more than 40$ you will get more discount" << endl;
                        cout << " DISCOUNTED BILL:" << " " << total2 << "$" << endl;
                        food << " DISCOUNTED BILL:" << " " << total2 << "$" << endl;
                    }

                    cout << " OLD Bill:" << " " << total << "$" << endl;
                    food << "OLD  Bill:" << " " << total << "$" << endl;

                }


                else//if the user only chooses one item then this
                {
                    cout << "\t\tBill:" << " " << total << "$" << endl;
                    food << "\t\tBill:" << " " << total << "$" << endl;
                    if (total > 10)//only if bill is greater than 10$ to give the user discount
                    {
                        cout << name << "\tAs your total bill is more than 40$ you will get more discount" << endl;
                        food << name << "\t\tAs your total bill is more than 40$ you will get more discount" << endl;
                        cout << " DISCOUNTED BILL:" << " " << total2 << "$" << endl;
                        food << " DISCOUNTED BILL:" << " " << total2 << "$" << endl;

                    }
                }
                if (c2 == 1)
                {
                    cout << " Bill After choosing Drink: " << total3 << endl;
                    food << " Bill After choosing Drink: " << total3 << endl;
                    if (total3 > 40)
                    {

                        cout << name << "\tAs your total bill is more than 40$ you will get more discount" << endl;
                        food << name << "\t\tAs your total bill is more than 40$ you will get more discount" << endl;
                        cout << " FInal Bill:" << dsc3 << endl;
                        food << " FInal Bill:" << dsc3 << endl;

                    }
                }




                if (len != 8 || choice == 2 || choice > 2)//to display payement method in file and output
                {
                    cout << "PAYEMENT METHOD: CASH ON DELEIVERY" << endl;
                    food << "PAYEMENT METHOD: CASH ON DELEIVERY" << endl;
                }
                else
                {
                    cout << "PAYEMENT METHOD: ONLINE(RECEIVED)" << endl;
                    food << "PAYEMENT METHOD: ONLINE(RECEIVED)" << endl;
                }

                cout << endl << endl << "\t\t======================================================" << endl;
                food << endl << endl << "\t\t======================================================" << endl;
                cout << "\t\t\t Enjoy A LOVELY MEAL " << endl;
                cout << "\t\t======================================================" << endl << endl << endl;

                food << "\t\t\tEnjoy A LOVELY MEAL " << endl;
                food << "\t\t======================================================" << endl << endl << endl;

                food.close();

            }
        }
      
    }
};






int main()
{

    printreceipt  u1;
    u1.startop();
    u1.udata();
    u1.orderfood();
    u1.orderdrink();
    u1.dsc();
    u1.userloc();
    u1.ask();
    u1.printr();
    return 0;

}