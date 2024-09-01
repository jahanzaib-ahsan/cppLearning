#include <iostream>

using namespace std;
void board()
{ 
    cout<<" ---------------------- "<<endl;
    cout<<"|     BASHIR SONS      |"<<endl; 
    cout<<" ---------------------- "<<endl; 
    int bus[10];                     
    for (int i = 1; i < 11; i++)
    { 
        bus[i]=i;
       if(bus[i]%2!=0)
           {
            if (bus[i]<10)
            {
              cout<<"|0"<<bus[i]<<"|"; 
            }
            else
            cout<<"|"<<bus[i]<<"|"; 
           }
       else if (bus[i]%2==0)
       {
         if (bus[i]<10)
            {
            cout<<"________________"<<"|0"<<bus[i]<<"|"<<endl;
            }
         else
            cout<<"________________"<<"|"<<bus[i]<<"|"<<endl;

       }
      
    }

          cout<<" ---------------------- "<<endl;
          cout<<"|     SAFE JOURNEY     |"<<endl;
          cout<<" ---------------------- "<<endl;





   
}
int main()
{
    board();
    int choice=9;
    int n;
    int seatNumber[5];
    while(choice!=0){

    cout<<"Enter seat number you want to book between (1 to 10) "<<endl;
    cin>>n;

    while (n>10||n<=0)
    {
        cout<<" Invalid Input Please select between range";
        cin>>n;
    }
    
    if (seatNumber[n]==1)
    {
        cout<<" Seat is already booked ";
    }
    else
    {
        seatNumber[n]=1;
        cout<<"Your seat is booked successfully"<<endl;;
    }

    cout<<"Do you want to book another seat"<<endl;
    cout<<"Press  1 to select another and press 0 to quit"<<endl;
    cin>>choice;
    }

  return 0;
}