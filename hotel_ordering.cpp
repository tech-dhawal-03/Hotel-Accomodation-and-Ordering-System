#include<iostream>
using namespace std;
struct customers
{
    char customer_name[30];
    long long int mobile_no;
    long long int UIDAI_No;
    int members;

};


int foodo()

{ int Qpasta , Qnoodles , Qburger , Qpizza , Qdesserts , Qshakes;
int c1;
int choice;int food;

int cost;


    cout<<"What would you like to eat"<<endl;
    cout<<"Please choose from the menu" <<endl;
    cout<<"1. Pasta       250/plate"<<endl;
    cout<<"2. Noodles     120/plate"<<endl;
    cout<<"3. Veg Burger  180/piece"<<endl;
    cout<<"4. Desserts"<<endl;
    cout<<"5. Shakes"<<endl;
    cout<<"6. Exit"<<endl;
    cin>>food;
    
    
    switch (food)
    {
    case 1 : //pasta
    
    cout<<"Enter quantity of pasta"<<endl;
    cin>>Qpasta;
    
     cost=250*Qpasta;
     
       
        cout<<"You have been charged Rs. "<< cost<<endl;
         return cost;
        break;

        case 2 : //Noodles
    cout<<"Enter quantity of noodles"<<endl;
    cin>>Qnoodles;
     cost=120*Qnoodles;
        return cost;
        break;
        
    
           case 3 : //Veg Burger
          
    cout<<"Enter quantity of Veg Burger"<<endl;
    cin>>Qburger;
     cost=180*Qburger;
       return cost;
        break;
    
           case 4 : //Desserts
           int Sweet;
    cout<<"Available Options"<<endl;
    cout<<"1. Gulab Jamun   25 each"<<endl;
    cout<<"2. Rasmalai      50 each"<<endl;
    cout<<"3. Rasgulla      15 each"<<endl;
    cout<<"4. MoongdalHalwa 85 each"<<endl;
    cout<<"5. Rabdi         80 each"<<endl;
    cin>>Sweet;
    switch (Sweet)
    {
    case 1:
        int G;
        cout<<"Enter Quantity "<<endl;
        cin>>G;
        cost=G*25;
        
        return cost;
        break;

        case 2:
        int R;
        cout<<"Enter Quantity "<<endl;
        cin>>R;
        cost=R*50; 
        return cost;
        break;

        case 3:
        int Ri;
        cout<<"Enter Quantity "<<endl;
        cin>>Ri;
        return cost;
        break;

        case 4:
        int M;
        cout<<"Enter Quantity "<<endl;
        cin>>M;
        cost=M*85;
        return cost;
        break;

        case 5:
        int Rb;
        cout<<"Enter Quantity "<<endl;
        cin>>Rb;
        cost=Rb*80; 
        return cost;
        break;
        
        default:
        break;
        
    }
    //switch ends of dessert
        break;
    
           case 5 : //Shakes
           int shakes;

    cout<<"1. Hot Chocolate Shake with Dark Chocolate  --  Rs.180/-"<<endl;
    cout<<"2. Oreo Shake   --  Rs.220/-"<<endl;
    cout<<"3. Fruits Shake"<<endl;
    cout<<"4. Butterscotch Shake --- Rs.150/-"<<endl;
    cin>>shakes;
    switch(shakes)
    {    int h; char add_on;
        case 1 : cout<<"You have selected  Hot Chocolate Shake with Dark Chocolate  "<<endl;
        cout<<"enter the quantity";
        cin>>h;
        cout<<"Do you want Ice-cream as add on"<<endl;
        cout<<"Press 'Y' for yes"<<endl;
        cout<<"Press 'N' for no"<<endl;
        cin>>add_on;
        if (add_on == 'Y')
        {
            cost=(h*180)+60;
            cout<<"You have been charged for Shake + Ice Cream (Charge Rs. 60/- only) "<<cost;
            
        }
        else if (add_on == 'N'){
            cost=h*180;
            cout<<"You have been charged Rs. "<<cost;
        }
        else {cout<<"Invalid Intput";}
            return cost;
            case 2 : cout<<"You have selected  Oreo Shake  "<<endl;
        cout<<"enter the quantity";
        cin>>h;
        cout<<"Do you want Ice-cream as add on"<<endl;
        cout<<"Press 'Y' for yes"<<endl;
        cout<<"Press 'N' for no"<<endl;
        cin>>add_on;
        if (add_on == 'Y')
        { cost=(h*220)+60;
            cout<<"You have been charged for Shake + Ice Cream (Charge Rs. 60/- only) "<<cost;
           
        }
        else if (add_on == 'N'){
            cost=h*220;
            cout<<"You have been charged Rs. "<<cost;
        }
        else {cout<<"Invalid Intput";}
        return cost;

         case 3 : cout<<"You have selected Fruits Shake  "<<endl;
         int fruit;
         cout<<"Available Options ";
         cout<<"1.Apple Shake -- Rs.120/-"<<endl; 
         cout<<"2.Mango Shake -- Rs.130/-"<<endl; 
         cout<<"3.Pineapple Shake -- Rs.180/-"<<endl; 
         cout<<"4.Rose Shake -- Rs.130/-"<<endl; 
         cout<<"5.Papaya Shake -- Rs.140/-"<<endl;
         cout<<"Please enter your choice as in avaliable options"<<endl;
         cin>>fruit;
         switch (fruit)
         {
         case 1:
            cout<<"You have selected Apple Shake"<<endl;
            cout<<"enter the quantity";
        cin>>h;
        cout<<"Do you want Ice-cream as add on"<<endl;
        cout<<"Press 'Y' for yes"<<endl;
        cout<<"Press 'N' for no"<<endl;
        cin>>add_on;
        if (add_on == 'Y')
        { cost=(h*120)+60;;
            cout<<"You have been charged for Shake + Ice Cream (Charge Rs. 60/- only) "<<cost;
            return cost;
            
        }
        else if (add_on == 'N'){
            cost=h*120;
            cout<<"You have been charged Rs. "<<cost;
            return cost;
        }
        else {cout<<"Invalid Intput";}
            break;
            return cost;

             case 2:
            cout<<"You have selected Mango Shake"<<endl;
            cout<<"enter the quantity";
        cin>>h;
        cout<<"Do you want Ice-cream as add on"<<endl;
        cout<<"Press 'Y' for yes"<<endl;
        cout<<"Press 'N' for no"<<endl;
        cin>>add_on;
        if (add_on == 'Y')
        {cost=(h*130)+60;
            cout<<"You have been charged for Shake + Ice Cream (Charge Rs. 60/- only) "<<cost;
            return cost;
            
        }
        else if (add_on == 'N'){
            cost=h*130;
            cout<<"You have been charged Rs. "<<cost;
            return cost;
        }
        else {cout<<"Invalid Intput";}
        break;
        return cost;
         
          case 3:
            cout<<"You have selected Pineapple Shake"<<endl;
            cout<<"enter the quantity";
        cin>>h;
        cout<<"Do you want Ice-cream as add on"<<endl;
        cout<<"Press 'Y' for yes"<<endl;
        cout<<"Press 'N' for no"<<endl;
        cin>>add_on;
        if (add_on == 'Y')
        { cost=(h*180)+60;
            cout<<"You have been charged for Shake + Ice Cream (Charge Rs. 60/- only) "<<cost;
            return cost;
            
        }
        else if (add_on == 'N'){
            cost=h*180;
            cout<<"You have been charged Rs. "<<cost;
        }
        else {cout<<"Invalid Intput";}
        break;
        return cost;

         case 4:
            cout<<"You have selected Rose Shake"<<endl;
            cout<<"enter the quantity";
        cin>>h;
        cout<<"Do you want Ice-cream as add on"<<endl;
        cout<<"Press 'Y' for yes"<<endl;
        cout<<"Press 'N' for no"<<endl;
        cin>>add_on;
        if (add_on == 'Y')
        { cost=(h*130)+60;
            cout<<"You have been charged for Shake + Ice Cream (Charge Rs. 60/- only) "<<cost;
            return cost;
            
        }
        else if (add_on == 'N'){
            cost=h*130;
            cout<<"You have been charged Rs. "<<cost;
              return cost;
        }
        else {cout<<"Invalid Intput";}
        break;
      

         case 5:
            cout<<"You have selected Papaya Shake"<<endl;
            cout<<"enter the quantity";
        cin>>h;
        cout<<"Do you want Ice-cream as add on"<<endl;
        cout<<"Press 'Y' for yes"<<endl;
        cout<<"Press 'N' for no"<<endl;
        cin>>add_on;
        if (add_on == 'Y')
        { cost=(h*140)+60;
            cout<<"You have been charged for Shake + Ice Cream (Charge Rs. 60/- only) "<<cost;
            return cost;
            
        }
        else if (add_on == 'N'){
            cost=h*140;
            cout<<"You have been charged Rs. "<<cost;}
        else {cout<<"Invalid Intput";}
         
            break;
            return cost;
         }// switch of fruit shakes types ends here

        break;
        
         
        case 4 : cout<<"You have selected Butterscotch Shake  "<<endl;
        cout<<"enter the quantity";
        cin>>h;
        cout<<"Do you want Ice-cream as add on"<<endl;
        cout<<"Press 'Y' for yes"<<endl;
        cout<<"Press 'N' for no"<<endl;
        cin>>add_on;
        if (add_on == 'Y')

        { cost=(h*150)+60;
            cout<<"You have been charged for Shake + Ice Cream (Charge Rs. 60/- only) "<<cost;
            
        }
        else if (add_on == 'N'){
            cost=h*150;
            cout<<"You have been charged Rs. "<<cost;
        }
        else {cout<<"Invalid Intput";}
        return cost;

    default:
        break;}//switch of shakes ends here

        case 6:
        return 0;
    default: 
    break;
}}

int main()
{ int Qrooms , Trooms=10;
int nonac=10; int room_type; int days[2];
float total_charges;
float gst;

int total[2];
for(int i=0;i<2;i++)
{
    total[i]=0;
}
float sum=0;
    cout<<"Welcome to our hotel , How can we help you ? "<<endl;
    customers C1;
    cout<<"Enter the name of the customer"<<endl;
    gets(C1.customer_name);
    cout<<"Enter Mobile No."<<endl;
    cin>>C1.mobile_no;
    cout<<"Enter Valid UIDAI No."<<endl;
    cin>>C1.UIDAI_No;
    cout<<"No. of Members including you"<<endl;
    cin>>C1.members;


    cout<<"No of AC Rooms Available "<<Trooms<<endl;
    cout<<"No of NON-AC Rooms Available "<<nonac<<endl;
    cout<<"Enter the quantity as per your choice"<<endl;
    

        cout<<"No. of AC Rooms required "<<endl;
        cin>>Qrooms;
        cout<<"For how many days "<<endl;
        cin>>days[0];
        cout <<Qrooms<<" rooms have been alloted to you "<<"for "<<days[0]<<" days"<<endl;
        
        total[0]=Qrooms*950*days[0];
        cout<<"You have been charged Rs. "<<total[0]<<endl; 

        cout<<"Total Charges "<<total[0]<<endl;
           
        cout<<"No. of Non-AC Rooms required "<<endl;
        cin>>nonac;
        cout<<"For how many days "<<endl;
        cin>>days[1];
        cout <<nonac<<" rooms have been alloted to you "<<"for "<<days[2]<<" days"<<endl;
        
        total[1]=nonac*650*days[1];
        cout<<"You have charged Rs. "<< total[1]<<endl;

     total_charges = total[0]+total[1];
         cout<<"Total Charges "<<total_charges<<endl;

        
    cout<<endl;
// calling function for ordering food    
    char more;
    for(int i=0;i>=0;i++)
{  sum = sum+foodo();
   cout<<endl;
   cout<<"Total Cost of Food "<<sum<<endl;
    cout<<"Do you want to order more "<<endl;
    cout<<"Please reply in 'Y' or 'N'"<<endl;
     cin>>more;
    if (more=='N')

    { cout<<"      INVOICE       "<<endl;
         cout<<"Name :  " <<C1.customer_name<<endl;      
         cout<<"Mobile No. :  " <<C1.mobile_no<<endl;
         cout<<"Aadhar No. :  " << C1.UIDAI_No<<endl;
         cout<<"Total No of Members :  "<<C1.members<<endl;   
         
         cout<<"AC Rooms      -\t"<<  Qrooms <<"\t"<<days[0]<<" days  "<<   total[0]<<"/-"<<endl;
         cout<<"Non-AC Rooms  -\t"<<  nonac  <<"\t"<<days[1]<<" days  "<<   total[1]<<"/-"<<endl;
         cout<<"Room Charges -\t"<<  total_charges<<endl;  
         cout<<"Food Charges  -\t"<<  sum<<endl;  
         cout<<"Total Charges -\t"<<total_charges+sum<<endl;
         gst = (total_charges+sum)*0.05;
         cout<<"GST(5%)       -\t"<<gst<<endl;
         cout<<endl;
         cout<<"Total Payable Amount  -  \t"<<total_charges+sum+gst;

    
        
        return 0;
    }
    
    
}
return 0;
}