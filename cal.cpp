#include<iostream>
using namespace std;
#include<cmath>
#include<string>
int main()
{int ans,calc,Menu;long double angles,de,deg,gr,rad;
    cout<<"1.Menu\t\t\t2.perform calculations"<<endl;
    cin>>Menu;
    if(Menu == 1){
        cout<<"1.convert angles"<<endl;
        cin>>angles;
        if (angles ==1){
            cout<<"1.radians to Degress\t\t\t2. Radians to gradians\n\n\n3.degress to Gradians\t\t\t4.gradians to radians\n\n\n5.gradians to degree\t\t\t6.Degree to radians"<<endl;
            cin>>ans;
            if (ans == 1){
                cout<<"enter a number to conver to degress:  "<<endl;
                cin>>deg;
                de = deg*180/M_PI;
                cout<<de<<endl;
            }
            if (ans ==2)
            {
                cout<<"enter a number to conver to gradians:  "<<endl;
                cin>>deg;
                gr = deg*200/M_PI;
                cout<<gr<<endl;
            }
            if(ans == 3){
                cout<<"enter a number in  degress to conver to gradians:  "<<endl;
                cin>>de;
                gr = de*10/9;
                cout<<gr<<endl;
            }
            if(ans == 4){
                cout<<"enter a number in  gradian to conver to radians:  "<<endl;
                cin>>de;
                gr = de*(M_PI/200);
                cout<<gr<<endl;
            }
            if(ans ==5){
                cout<<"enter a number in  gradian to conver to degree:  "<<endl;
                cin>>de;
                gr = de*9/10;
                cout<<gr<<endl;
            }
            if(ans ==6){
                cout<<"enter a number in  degree to conver to radians:  "<<endl;
                cin>>de;
                gr = de*(M_PI/180);
                cout<<gr<<endl;
            }while(true){
            cout<<"press q to turn off"<<endl;
            char response;
            cin>>response;
            if (response == 'q'){
                break;
            }}
        }
    }
    
}