#include <iostream>
using namespace std;
int main()

{
    char service_code = '0';
    int account_number;
    int bill;
    double minutes_used, night_minutes, day_minutes;

    const double regular_Base_Rate = 10.00;
    const double regular_Per_Minutes_Rate = 0.20;
    const double regular_Free_Minutes = 50;
    const double regular_Premium_Rate = 25;
    const double premium_Day_Free_Rate = 75;
    const double premium_Night_Free_Minutes = 100;
    const double premium_Day_Rate = 0.10;
    const double premium_Night_Rate = 0.05;

    cout << " Enter account number " << endl;
    cin >> account_number;

    cout << " Service codes " << endl;
    cout << " R for regular " << endl;
    cout << " P for premium " << endl;
    cin >> service_code;

    if (service_code != 'R' && service_code != 'r' && service_code != 'P' && service_code != 'p')
    {
        cout << "Invalid service code. Please enter R or P." << endl;
    }
    if (service_code == 'r' || service_code == 'R')
    {
        cout << " Enter the minutes you used the service " << endl;
        cin >> minutes_used;
        cout<<"==================================="<<endl;
        cout<<"=========     INVOICE     ========="<<endl;
        cout<<"==================================="<<endl;
        cout << "Account number :  "<< account_number << endl;
        cout << "Service type   : Regular" << endl;
        cout << "Minutes used   : " << minutes_used << endl;
        cout<<"==================================="<<endl<<endl;
        int smallbill=minutes_used - regular_Free_Minutes;
        if (smallbill<=0)
        {
            smallbill=0;
        }
        
        bill = (smallbill) * regular_Per_Minutes_Rate + regular_Base_Rate;

        cout << "Total          : " << bill << "$" << endl;
        cout<<"==================================="<<endl<<endl;
        cout << " Thankyou for using our service " << endl;
    }
    else if (service_code == 'P' || service_code == 'p')
    {

       
        cout << " Enter the minutes you used the service during night " << endl;
        cin >> night_minutes;
        cout << " Enter the minutes you used the service day " << endl;
        cin >> day_minutes;
        


        cout<<"==================================="<<endl;
        cout<<"=========     INVOICE     ========="<<endl;
        cout<<"==================================="<<endl;
        cout << "Account number :  "<< account_number << endl;
        cout << "Service type   : Premium" << endl;
        cout << "Night minutes  : " << night_minutes<< endl;
        cout << "Day minutes    : " << day_minutes  << endl;
        cout<<"==================================="<<endl<<endl;

        int nightbill=(night_minutes-premium_Night_Free_Minutes)*premium_Night_Rate;
        if (nightbill<=0)
        {
            nightbill=0;
        }
        
        int daybill=(day_minutes-premium_Day_Free_Rate)*premium_Day_Rate;
        if (daybill<=0)
        {
            daybill=0;
        }
        
        bill =  regular_Premium_Rate+daybill+nightbill;
        cout << "Total          : " << bill << "$" << endl;
        cout<<"==================================="<<endl<<endl;
        cout << "Thankyou for using our service " << endl;
    }

    return 0;
}