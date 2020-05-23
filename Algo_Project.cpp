#include<bits/stdc++.h>
using namespace std;
int arr[]= {3,1,5,6,2,18,20,21,22,25,26,7,9,28,29,31,33,13,16,10,11,34};
int burger=5,puri,grill,choap;
int sum=0;
//                  All Functions diclare        //

void fst_page();
void login();
void admin();
void admin_display();
void customer();
void sandwich();
void rolls();
void fries();
void burgerr();
void pizza();
void momos();
void biriany();
int searching(int arr[],int low,int high,int n);
void sorting(int arr[]);
void recieve_money(int total);
void coin_change(int back_money);

int main()
{

    login();

}

void login()
{
    string name,pass;
    while(1)
    {
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t"<<" RESTURANT BILLING SOFTWARE"<<endl;
        cout<<"\t\t\t\t\t"<<"****************************"<<endl;
        cout<<"\n";

        cout<<"\t\t\t\t\t\t"<<"LOG-IN"<<endl;
        cout<<"\t\t\t\t\t"<<"    -------------"<<endl;
        cout<<"\t\t\t\t\t"<<"User_Name : ";
        cin>>name;
        cout<<"\t\t\t\t\t"<<"Password : ";
        cin>>pass;
        if(name=="admin" && pass=="1234")
        {
            fst_page();
            break;
        }

        system("CLS");
        cout<<"\t\t\t\t\t"<<"You are incorrect"<<endl;
    }
}

void fst_page()
{
    int choice;

    system("CLS");

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t"<<" RESTURANT BILLING SOFTWARE"<<endl;
    cout<<"\t\t\t\t\t"<<"****************************"<<endl;
    cout<<"\n";
    cout<<"\t\t\t\t\t"<<"  1. Menu"<<endl;
    cout<<"\t\t\t\t\t"<<"  2. Admin panel"<<endl<<endl<<endl;

    cout<<"\t"<<"press 1 if you want enter Menu,,,,press 2 if you want enter Admin Panel : ";

    cin>>choice;

    if(choice==1)
    {
        //getch();
        system("CLS");
        admin();
    }
    else
    {
        // getch();
        system("CLS");
        customer();
    }

}

void admin()
{
    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t"<<" Menu Categories"<<endl;
    cout<<"\t\t\t\t\t"<<"****************************"<<endl;
    cout<<"\n";

    cout<<"\t\t\t\t\t\t"<<" KATTI ROLLS"<<endl<<endl;
    cout<<"\t\t\t\t\t"<<"1. Alo tikki                40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"2. Mixed Veg                40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"3. Paneer Roll              40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"4. Spicy Babycorn Roll      50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"5. Egg Roll                 50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"6. Spicy Chicken Roll       50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"7. Egg with chicken Roll    60.00"<<endl<<endl;

    cout<<"\t\t\t\t\t\t"<<" SANDWICH"<<endl<<endl;
    cout<<"\t\t\t\t\t"<<" 8. Veg sandwich             35.00"<<endl;
    cout<<"\t\t\t\t\t"<<" 9. Cheese Grilled sandwich  40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"10. Corn sandwich            40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"11. Paneer Grilled sandwich  45.00"<<endl;
    cout<<"\t\t\t\t\t"<<"12. Mushroom sandwich        45.00"<<endl;
    cout<<"\t\t\t\t\t"<<"13. Chicken sandwich         50.00"<<endl<<endl;

    cout<<"\t\t\t\t\t\t"<<" FRIES"<<endl<<endl;
    cout<<"\t\t\t\t\t"<<"14. Cutlet                   30.00"<<endl;
    cout<<"\t\t\t\t\t"<<"15. French Fries             35.00"<<endl;
    cout<<"\t\t\t\t\t"<<"16. Smileys                  35.00"<<endl;
    cout<<"\t\t\t\t\t"<<"17. Potato pops              35.00"<<endl;
    cout<<"\t\t\t\t\t"<<"18. chicken popcorn          60.00"<<endl;
    cout<<"\t\t\t\t\t"<<"19. Chicken nuggets          60.00"<<endl<<endl;

    cout<<"\t\t\t\t\t\t"<<" BURGER"<<endl<<endl;
    cout<<"\t\t\t\t\t"<<"20. veg classic burger       50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"21. Alo tikki burger         50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"22. Herb chilli burger       50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"23. veg momo burger          50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"24. chicken burger           50.00"<<endl<<endl;

    cout<<"\t\t\t\t\t\t"<<" PIZZA"<<endl<<endl;
    cout<<"\t\t\t\t\t"<<"25. veg pizza                70.00"<<endl;
    cout<<"\t\t\t\t\t"<<"26. Paneer pizza             80.00"<<endl;
    cout<<"\t\t\t\t\t"<<"27. Musroom pizza            80.00"<<endl;
    cout<<"\t\t\t\t\t"<<"28. Baby corn pizza          80.00"<<endl;
    cout<<"\t\t\t\t\t"<<"29. chicken pizza            100.00"<<endl<<endl;

    cout<<"\t\t\t\t\t\t"<<" MOMOS"<<endl<<endl;
    cout<<"\t\t\t\t\t"<<"30. veg steam                30.00"<<endl;
    cout<<"\t\t\t\t\t"<<"31. veg fried                40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"32. chicken steam            40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"33. chicken fried            50.00"<<endl<<endl;

    cout<<"\t\t\t\t\t\t"<<" BIRYANI"<<endl<<endl;
    cout<<"\t\t\t\t\t"<<"34. chicken biriany          100.00"<<endl;

    cout<<"Press 0 if you want to back first page :";
    int n;
    cin>>n;

    if(n==0)
    {
        system("CLS");
        fst_page();
    }



}

//           Customer Panel           //

void customer()
{
    int n;

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t"<<"      Menu Categories"<<endl;
    cout<<"\t\t\t\t\t"<<"****************************"<<endl;
    cout<<"\n";
    cout<<"\t\t\t\t\t"<<"1. KATTI ROLLS"<<endl;
    cout<<"\t\t\t\t\t"<<"2. SANDWICH"<<endl;
    cout<<"\t\t\t\t\t"<<"3. FRIES"<<endl;
    cout<<"\t\t\t\t\t"<<"4. BURGER"<<endl;
    cout<<"\t\t\t\t\t"<<"5. PIZZA"<<endl;
    cout<<"\t\t\t\t\t"<<"6. MOMOS"<<endl;
    cout<<"\t\t\t\t\t"<<"7. BIRYANI"<<endl;
    cout<<"\t\t\t\t\t"<<"0. Back"<<endl;


    cout<<"Enter your choice : ";
    cin>>n;


    system("CLS");

    if(n==0)
        fst_page();

    if(n==1)
        rolls();
    if(n==2)
        sandwich();
    if(n==3)
        fries();
    if(n==4)
        burgerr();
    if(n==5)
        pizza();
    if(n==6)
        momos();
    if(n==7)
        biriany();
    //if(n==5)fst_page();

}

void rolls()
{
    int n,m,total,x;

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t"<<"    Menu - KATTI ROLLS"<<endl;
    cout<<"\t\t\t\t\t"<<"****************************"<<endl;
    cout<<"\n";
    cout<<"\t\t\t\t\t"<<"1. Alo tikki                40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"2. Mixed Veg                40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"3. Paneer Roll              40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"4. Spicy Babycorn Roll      50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"5. Egg Roll                 50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"6. Spicy Chicken Roll       50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"7. Egg with chicken Roll    60.00"<<endl;
    cout<<"\t\t\t\t\t"<<"0. Back"<<endl;


    cout<<"Enter your choice : ";
    cin>>n;
    if(n==0)
    {
        system("CLS");
        customer();
    }

    else
    {

        if(searching(arr,0,21,n)==-1)
        {
            system("CLS");
            cout<<"Not Available,Please choose another one"<<endl;
            rolls();
        }
        else
        {
            system("CLS");

            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"    Menu - KATTI ROLLS"<<endl;
            cout<<"\t\t\t\t\t"<<"****************************"<<endl;
            cout<<"\n";
            cout<<"\t\t\t\t\t"<<"1. Alo tikki                40.00"<<endl;
            cout<<"\t\t\t\t\t"<<"2. Mixed Veg                40.00"<<endl;
            cout<<"\t\t\t\t\t"<<"3. Paneer Roll              40.00"<<endl;
            cout<<"\t\t\t\t\t"<<"4. Spicy Babycorn Roll      50.00"<<endl;
            cout<<"\t\t\t\t\t"<<"5. Egg Roll                 50.00"<<endl;
            cout<<"\t\t\t\t\t"<<"6. Spicy Chicken Roll       50.00"<<endl;
            cout<<"\t\t\t\t\t"<<"7. Egg with chicken Roll    60.00"<<endl;
            cout<<"\t\t\t\t\t"<<"0. Back"<<endl<<endl;

            cout<<"\t\t\t\t\t"<<"Quantity : ";
            cin>>m;

            if(n==1)
                sum=sum+(m*40);
            if(n==2)
                sum=sum+(m*40);
            if(n==3)
                sum=sum+(m*40);
            if(n==4)
                sum=sum+(m*50);
            if(n==5)
                sum=sum+(m*50);
            if(n==6)
                sum=sum+(m*50);
            if(n==7)
                sum=sum+(m*60);


            int vat=(sum*12)/100;
            int tax=(sum*5)/100;
            total=(sum)+vat+tax;
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"  YOUR BILL "<<endl;
            cout<<"\t\t\t\t\t"<<"*************"<<endl;
            cout<<"\t\t\t\t\t"<<"Amount before tax = "<<sum<<endl;
            cout<<"\t\t\t\t\t"<<"Vat 12%           = "<<vat<<endl;
            cout<<"\t\t\t\t\t"<<"Service Tax 5%    = "<<tax<<endl;
            cout<<"\t\t\t\t\t"<<"Total amount      = "<<total<<endl;
            recieve_money(total);
        }

    }

}

void sandwich()
{
    int n,m,total,x;

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t"<<"     Menu - SANDWICH"<<endl;
    cout<<"\t\t\t\t\t"<<"****************************"<<endl;
    cout<<"\n";

    cout<<"\t\t\t\t\t"<<" 8. Veg sandwich             35.00"<<endl;
    cout<<"\t\t\t\t\t"<<" 9. Cheese Grilled sandwich  40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"10. Corn sandwich            40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"11. Paneer Grilled sandwich  45.00"<<endl;
    cout<<"\t\t\t\t\t"<<"12. Mushroom sandwich        45.00"<<endl;
    cout<<"\t\t\t\t\t"<<"13. Chicken sandwich         50.00"<<endl;
    cout<<"\t\t\t\t\t"<<" 0. Back"<<endl;


    cout<<"Enter your choice : ";
    cin>>n;

    if(n==0)
    {
        system("CLS");
        customer();
    }

    else
    {
        if(searching(arr,0,21,n)==-1)
        {
            system("CLS");
            cout<<"Not Available,Please choose another one"<<endl;
            sandwich();
        }
        else
        {
            system("CLS");

            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"     Menu - SANDWICH"<<endl;
            cout<<"\t\t\t\t\t"<<"****************************"<<endl;
            cout<<"\n";

            cout<<"\t\t\t\t\t"<<" 8. Veg sandwich             35.00"<<endl;
            cout<<"\t\t\t\t\t"<<" 9. Cheese Grilled sandwich  40.00"<<endl;
            cout<<"\t\t\t\t\t"<<"10. Corn sandwich            40.00"<<endl;
            cout<<"\t\t\t\t\t"<<"11. Paneer Grilled sandwich  45.00"<<endl;
            cout<<"\t\t\t\t\t"<<"12. Mushroom sandwich        45.00"<<endl;
            cout<<"\t\t\t\t\t"<<"13. Chicken sandwich         50.00"<<endl;
            cout<<"\t\t\t\t\t"<<" 0. Back"<<endl<<endl;

            cout<<"\t\t\t\t\t"<<"Quantity : ";
            cin>>m;


            if(n==8)
                sum=sum+(m*35);
            if(n==9)
                sum=sum+(m*40);
            if(n==10)
                sum=sum+(m*40);
            if(n==11)
                sum=sum+(m*45);
            if(n==12)
                sum=sum+(m*45);
            if(n==13)
                sum=sum+(m*50);

            int vat=(sum*12)/100;
            int tax=(sum*5)/100;
            total=(sum)+vat+tax;
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"  YOUR BILL "<<endl;
            cout<<"\t\t\t\t\t"<<"*************"<<endl;
            cout<<"\t\t\t\t\t"<<"Amount before tax = "<<sum<<endl;
            cout<<"\t\t\t\t\t"<<"Vat 12%           = "<<vat<<endl;
            cout<<"\t\t\t\t\t"<<"Service Tax 5%    = "<<tax<<endl;
            cout<<"\t\t\t\t\t"<<"Total amount      = "<<total<<endl;
            recieve_money(total);
        }

    }


}
void fries()
{
    int n,m,total,x;

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t"<<"       Menu - FRIES"<<endl;
    cout<<"\t\t\t\t\t"<<"****************************"<<endl;
    cout<<"\n";

    cout<<"\t\t\t\t\t"<<"14. Cutlet                   30.00"<<endl;
    cout<<"\t\t\t\t\t"<<"15. French Fries             35.00"<<endl;
    cout<<"\t\t\t\t\t"<<"16. Smileys                  35.00"<<endl;
    cout<<"\t\t\t\t\t"<<"17. Potato pops              35.00"<<endl;
    cout<<"\t\t\t\t\t"<<"18. chicken popcorn          60.00"<<endl;
    cout<<"\t\t\t\t\t"<<"19. Chicken nuggets          60.00"<<endl;
    cout<<"\t\t\t\t\t"<<" 0. Back"<<endl;


    cout<<"Enter your choice : ";
    cin>>n;
    if(n==0)
    {
        system("CLS");
        customer();
    }

    else
    {

        if(searching(arr,0,21,n)==-1)
        {
            system("CLS");
            cout<<"Not Available,Please choose another one"<<endl;
            fries();
        }
        else
        {
            system("CLS");

            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"       Menu - FRIES"<<endl;
            cout<<"\t\t\t\t\t"<<"****************************"<<endl;
            cout<<"\n";

            cout<<"\t\t\t\t\t"<<"14. Cutlet                   30.00"<<endl;
            cout<<"\t\t\t\t\t"<<"15. French Fries             35.00"<<endl;
            cout<<"\t\t\t\t\t"<<"16. Smileys                  35.00"<<endl;
            cout<<"\t\t\t\t\t"<<"17. Potato pops              35.00"<<endl;
            cout<<"\t\t\t\t\t"<<"18. chicken popcorn          60.00"<<endl;
            cout<<"\t\t\t\t\t"<<"19. Chicken nuggets          60.00"<<endl;
            cout<<"\t\t\t\t\t"<<" 0. Back"<<endl<<endl;

            cout<<"\t\t\t\t\t"<<"Quantity : ";
            cin>>m;


            if(n==14)
                sum=sum+(m*30);
            if(n==15)
                sum=sum+(m*35);
            if(n==16)
                sum=sum+(m*35);
            if(n==17)
                sum=sum+(m*35);
            if(n==18)
                sum=sum+(m*60);
            if(n==19)
                sum=sum+(m*60);

            int vat=(sum*12)/100;
            int tax=(sum*5)/100;
            total=(sum)+vat+tax;
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"  YOUR BILL "<<endl;
            cout<<"\t\t\t\t\t"<<"*************"<<endl;
            cout<<"\t\t\t\t\t"<<"Amount before tax = "<<sum<<endl;
            cout<<"\t\t\t\t\t"<<"Vat 12%           = "<<vat<<endl;
            cout<<"\t\t\t\t\t"<<"Service Tax 5%    = "<<tax<<endl;
            cout<<"\t\t\t\t\t"<<"Total amount      = "<<total<<endl;
            recieve_money(total);
        }

    }
}

void burgerr()
{
    int n,m,total,x;

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t"<<"       Menu - BURGER"<<endl;
    cout<<"\t\t\t\t\t"<<"****************************"<<endl;
    cout<<"\n";

    cout<<"\t\t\t\t\t"<<"20. veg classic burger       50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"21. Alo tikki burger         50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"22. Herb chilli burger       50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"23. veg momo burger          50.00"<<endl;
    cout<<"\t\t\t\t\t"<<"24. chicken burger           50.00"<<endl;
    cout<<"\t\t\t\t\t"<<" 0. Back"<<endl;



    cout<<"Enter your choice : ";
    cin>>n;
    if(n==0)
    {
        system("CLS");
        customer();
    }

    else
    {

        if(searching(arr,0,21,n)==-1)
        {
            system("CLS");
            cout<<"Not Available,Please choose another one"<<endl;
            burgerr();
        }
        else
        {
            system("CLS");
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"        Menu - BURGER"<<endl;
            cout<<"\t\t\t\t\t"<<"****************************"<<endl;
            cout<<"\n";

            cout<<"\t\t\t\t\t"<<"20. veg classic burger       50.00"<<endl;
            cout<<"\t\t\t\t\t"<<"21. Alo tikki burger         50.00"<<endl;
            cout<<"\t\t\t\t\t"<<"22. Herb chilli burger       50.00"<<endl;
            cout<<"\t\t\t\t\t"<<"23. veg momo burger          50.00"<<endl;
            cout<<"\t\t\t\t\t"<<"24. chicken burger           50.00"<<endl;
            cout<<"\t\t\t\t\t"<<" 0. Back"<<endl<<endl;

            cout<<"\t\t\t\t\t"<<"Quantity : ";
            cin>>m;


            if(n==20)
                sum=sum+(m*50);
            if(n==21)
                sum=sum+(m*50);
            if(n==22)
                sum=sum+(m*50);
            if(n==23)
                sum=sum+(m*50);
            if(n==24)
                sum=sum+(m*50);

            int vat=(sum*12)/100;
            int tax=(sum*5)/100;
            total=(sum)+vat+tax;
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"  YOUR BILL "<<endl;
            cout<<"\t\t\t\t\t"<<"*************"<<endl;
            cout<<"\t\t\t\t\t"<<"Amount before tax = "<<sum<<endl;
            cout<<"\t\t\t\t\t"<<"Vat 12%           = "<<vat<<endl;
            cout<<"\t\t\t\t\t"<<"Service Tax 5%    = "<<tax<<endl;
            cout<<"\t\t\t\t\t"<<"Total amount      = "<<total<<endl;
            recieve_money(total);
        }
    }
}

void pizza()
{
    int n,m,total,x;

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t"<<"        Menu - PIZZA"<<endl;
    cout<<"\t\t\t\t\t"<<"****************************"<<endl;
    cout<<"\n";

    cout<<"\t\t\t\t\t"<<"25. veg pizza                70.00"<<endl;
    cout<<"\t\t\t\t\t"<<"26. Paneer pizza             80.00"<<endl;
    cout<<"\t\t\t\t\t"<<"27. Musroom pizza            80.00"<<endl;
    cout<<"\t\t\t\t\t"<<"28. Baby corn pizza          80.00"<<endl;
    cout<<"\t\t\t\t\t"<<"29. chicken pizza            100.00"<<endl;
    cout<<"\t\t\t\t\t"<<" 0. Back"<<endl;




    cout<<"Enter your choice : ";
    cin>>n;
    if(n==0)
    {
        system("CLS");
        customer();
    }
    else
    {

        if(searching(arr,0,21,n)==-1)
        {
            system("CLS");
            cout<<"Not Available,Please choose another one"<<endl;
            pizza();
        }
        else
        {
            system("CLS");
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"        Menu - PIZZA"<<endl;
            cout<<"\t\t\t\t\t"<<"****************************"<<endl;
            cout<<"\n";

            cout<<"\t\t\t\t\t"<<"25. veg pizza                70.00"<<endl;
            cout<<"\t\t\t\t\t"<<"26. Paneer pizza             80.00"<<endl;
            cout<<"\t\t\t\t\t"<<"27. Musroom pizza            80.00"<<endl;
            cout<<"\t\t\t\t\t"<<"28. Baby corn pizza          80.00"<<endl;
            cout<<"\t\t\t\t\t"<<"29. chicken pizza            100.00"<<endl;
            cout<<"\t\t\t\t\t"<<" 0. Back"<<endl<<endl;

            cout<<"\t\t\t\t\t"<<"Quantity : ";
            cin>>m;


            if(n==25)
                sum=sum+(m*70);
            if(n==26)
                sum=sum+(m*80);
            if(n==27)
                sum=sum+(m*80);
            if(n==28)
                sum=sum+(m*80);
            if(n==29)
                sum=sum+(m*100);

            int vat=(sum*12)/100;
            int tax=(sum*5)/100;
            total=(sum)+vat+tax;
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"  YOUR BILL "<<endl;
            cout<<"\t\t\t\t\t"<<"*************"<<endl;
            cout<<"\t\t\t\t\t"<<"Amount before tax = "<<sum<<endl;
            cout<<"\t\t\t\t\t"<<"Vat 12%           = "<<vat<<endl;
            cout<<"\t\t\t\t\t"<<"Service Tax 5%    = "<<tax<<endl;
            cout<<"\t\t\t\t\t"<<"Total amount      = "<<total<<endl;
            recieve_money(total);
        }
    }
}

void momos()
{
    int n,m,total,x;

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t"<<"        Menu - MOMOS"<<endl;
    cout<<"\t\t\t\t\t"<<"****************************"<<endl;
    cout<<"\n";

    cout<<"\t\t\t\t\t"<<"30. veg steam                30.00"<<endl;
    cout<<"\t\t\t\t\t"<<"31. veg fried                40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"32. chicken steam            40.00"<<endl;
    cout<<"\t\t\t\t\t"<<"33. chicken fried            50.00"<<endl;
    cout<<"\t\t\t\t\t"<<" 0. Back"<<endl;



    cout<<"Enter your choice : ";
    cin>>n;
    if(n==0)
    {
        system("CLS");
        customer();
    }
    else
    {

        if(searching(arr,0,21,n)==-1)
        {
            system("CLS");
            cout<<"Not Available,Please choose another one"<<endl;
            momos();
        }
        else
        {
            system("CLS");
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"        Menu - MOMOS"<<endl;
            cout<<"\t\t\t\t\t"<<"****************************"<<endl;
            cout<<"\n";

            cout<<"\t\t\t\t\t"<<"30. veg steam                30.00"<<endl;
            cout<<"\t\t\t\t\t"<<"31. veg fried                40.00"<<endl;
            cout<<"\t\t\t\t\t"<<"32. chicken steam            40.00"<<endl;
            cout<<"\t\t\t\t\t"<<"33. chicken fried            50.00"<<endl;
            cout<<"\t\t\t\t\t"<<" 0. Back"<<endl<<endl;

            cout<<"\t\t\t\t\t"<<"Quantity : ";
            cin>>m;


            if(n==30)
                sum=sum+(m*30);
            if(n==31)
                sum=sum+(m*40);
            if(n==32)
                sum=sum+(m*40);
            if(n==33)
                sum=sum+(m*50);


            int vat=(sum*12)/100;
            int tax=(sum*5)/100;
            total=(sum)+vat+tax;
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"  YOUR BILL "<<endl;
            cout<<"\t\t\t\t\t"<<"*************"<<endl;
            cout<<"\t\t\t\t\t"<<"Amount before tax = "<<sum<<endl;
            cout<<"\t\t\t\t\t"<<"Vat 12%           = "<<vat<<endl;
            cout<<"\t\t\t\t\t"<<"Service Tax 5%    = "<<tax<<endl;
            cout<<"\t\t\t\t\t"<<"Total amount      = "<<total<<endl;
            recieve_money(total);
        }

    }
}

void biriany()
{
    int n,m,total,x;

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\t"<<"      Menu - BIRYANI"<<endl;
    cout<<"\t\t\t\t\t"<<"****************************"<<endl;
    cout<<"\n";

    cout<<"\t\t\t\t\t"<<"34. chicken biriany           100.00"<<endl;
    cout<<"\t\t\t\t\t"<<" 0. Back"<<endl;




    cout<<"Enter your choice : ";
    cin>>n;
    if(n==0)
    {
        system("CLS");
        customer();
    }
    else
    {

        if(searching(arr,0,21,n)==-1)
        {
            system("CLS");
            cout<<"Not Available,Please choose another one"<<endl;
            customer();
        }
        else
        {
            system("CLS");
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"       Menu - BIRYANI"<<endl;
            cout<<"\t\t\t\t\t"<<"****************************"<<endl;
            cout<<"\n";

            cout<<"\t\t\t\t\t"<<"34. chicken biriany           100.00"<<endl;
            cout<<"\t\t\t\t\t"<<" 0. Back"<<endl<<endl;

            cout<<"\t\t\t\t\t"<<"Quantity : ";
            cin>>m;


            if(n==34)
                sum=sum+(m*100);


            int vat=(sum*12)/100;
            int tax=(sum*5)/100;
            total=(sum)+vat+tax;
            cout<<"\n\n\n";
            cout<<"\t\t\t\t\t"<<"  YOUR BILL "<<endl;
            cout<<"\t\t\t\t\t"<<"*************"<<endl;
            cout<<"\t\t\t\t\t"<<"Amount before tax = "<<sum<<endl;
            cout<<"\t\t\t\t\t"<<"Vat 12%           = "<<vat<<endl;
            cout<<"\t\t\t\t\t"<<"Service Tax 5%    = "<<tax<<endl;
            cout<<"\t\t\t\t\t"<<"Total amount      = "<<total<<endl;
            recieve_money(total);
        }
    }
}
int searching(int arr[],int low,int high,int n)
{

    sorting(arr);
    //int low=0,high=7;

    if(low<=high)
    {
        int mid = (high + low) / 2;

        if (arr[mid] == n)
            return mid;

        if (arr[mid] > n)
            return searching(arr, low, mid - 1, n);

        return searching(arr, mid + 1, high, n);
    }
    return -1;


}
void sorting(int arr[])
{
    //int l=arr.size();
    for(int i=0; i<22-1; i++)
    {
        for(int j=i+1; j<22; j++)
        {
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
}

void recieve_money(int total)
{
    int n;
    cout<<endl<<"How many amounts are reciept from customer : ";
    cin>>n;
    int back_money=n-total;

    cout<<"Money Back = "<<back_money<<endl<<endl;
    cout<<"Note"<<"\t"<<"Quantity"<<endl<<endl;
    coin_change(back_money);

}

void coin_change(int back_money)
{
    int r=back_money;
    int arr[]= {1000,500,100,50,20,10,5,2,1};
    for(int i=0; i<=8; i++)
    {
        if(r>=arr[i])
        {
            int res=(r/arr[i]);
            r=r%arr[i];
            cout<<arr[i]<<"\t"<<res<<endl;
        }
    }

}


