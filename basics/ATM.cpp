#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// 0 < X <=2000  (WITHDRAW AMT)
	// 0<=Y<=2000     (BANK BALANCE)
	int Y; 
	int X;

	cout<<"ENTER THE AMOUNT TO WITHDRAW =   ";
	cin>>X;
    cout<<"ENTER THE AMOUNT IN THE BANK =   ";
	cin>>Y;

    double new_x= static_cast<double> (X)+0.50;
//static_cast<data-type>(var)
//  X + $ 0.50
if (new_x>Y and X%5==0)
{
    cout<<"CANT WITHDRAW"<<endl;
    cout<<"BALANCE IS = "<<Y;
        
}
    else if((X>0) and (X<=2000) and (Y>=0) and (Y<=2000))
    {
        double new_Y=static_cast<double>(Y)-new_x;
        cout<<"NEW AMMOUNT IN BANK = "<<new_Y<<endl;
        cout<<"OLD AMMOUNT IN BANK WAS = "<<Y;


}else {

    cout<<"INPUT LIMITS EXCEEDS CODE FT GAYA";
}
	return 0;
}

