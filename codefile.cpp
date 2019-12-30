#include<iostream>
#include<conio.h>
#include<ctime>
#include<string.h>
#include<cstring>
using namespace std;

int Time[8] = {8,9,10,11,12,1,2,3};
string Day[6] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
string Monday[8] = { "Physics","Chemistry","Maths","English","Programming","French","ECA","Reference" };
string Tuesday[8] = { "English","Maths","Chemistry","Physics","Reference","French","ECA","Programming" };
string Wednesday[8] = { "Physics","ECA","Maths","English","Programming","French","Chemistry","Reference" };
string Thursday[8] = { "Chemistry","Physics","Maths","English","Programming","Reference","ECA","French" };
string Friday[8] = { "Reference","Chemistry","Maths","English","Programming","French","ECA","Physics" };
string Saturday[8] = { "Physics","Programming","Maths","English","Chemistry","French","ECA","Reference" };


int time(int var1);
int main()
{
	int var1;
	int var2;
	int var3;
	cout << "Enter the Time" << endl;
	cin >> var1;
	char day[15];
	if (var1 == Time[0])
	{
		cout << "Enter the day\n";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o')
            {
            cout << "you have\n";
            cout<<Monday[0]<<endl;
            cout << "your next class is\n";
            cout<<Monday[1];
            }
            else
            {
                cout << "you have\n";
                cout<<Friday[0]<<endl;
                cout << "your next class is\n";
                cout<<Friday[1];
            }
        }
        if(strlen(day)==7)
        {
            cout << "you have\n";
            cout<<Tuesday[0]<<endl;;
            cout << "your next class is\n";
            cout<<Tuesday[1];

        }
         if(strlen(day)==9)
        {
            cout << "you have\n";
            cout<<Wednesday[0]<<endl;
            cout << "your next class is\n";
            cout<<Wednesday[1];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
            cout << "you have\n";
            cout<<Thursday[0]<<endl;
            cout << "your next class is\n";
            cout<<Thursday[1];
            }
            else
            {

            cout << "you have\n";
            cout<<Saturday[0]<<endl;
            cout << "your next class is\n";

            cout<<Saturday[1];
            }
        }
	}
	if (var1 == Time[1])
	{
        cout << "Enter the day\n";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout << "you have\n";
            cout<<Monday[1]<<endl;
            cout << "your next class is\n";
            cout<<Monday[2];
            }
            else
            {

            cout << "you have\n";
            cout<<Friday[1]<<endl;
            cout << "your next class is\n";

                cout<<Friday[2];
            }
        }
        if(strlen(day)==7)
        {

            cout << "you have\n";
            cout<<Tuesday[1]<<endl;
            cout << "your next class is\n";
            cout<<Tuesday[2];

        }
         if(strlen(day)==9)
        {
            cout << "you have\n";
            cout<<Wednesday[1]<<endl;
            cout << "your next class is\n";
            cout<<Wednesday[2];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){

            cout << "you have\n";
            cout<<Thursday[1]<<endl;
            cout << "your next class is\n";
            cout<<Thursday[2];
            }
            else
            {

            cout << "you have\n";
                cout<<Saturday[1]<<endl;
            cout << "your next class is\n";
                cout<<Saturday[2];
            }
        }
	}
if (var1 == Time[2])
	{
        cout << "Enter the day\n";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout << "you have\n";
            cout<<Monday[2]<<endl;
            cout << "your next class is\n";
            cout<<Monday[3];
            }
            else
            {

            cout << "you have\n";
            cout<<Friday[2]<<endl;
            cout << "your next class is\n";
            cout<<Friday[3];
            }
        }
        if(strlen(day)==7)
        {

            cout << "you have\n";
            cout<<Tuesday[2]<<endl;
            cout << "your next class is\n";

            cout<<Tuesday[3];

        }
         if(strlen(day)==9)
        {

            cout << "you have\n";
            cout<<Wednesday[2]<<endl;;
            cout << "your next class is\n";


            cout<<Wednesday[3];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){

            cout << "you have\n";
            cout<<Thursday[2]<<endl;;
            cout << "your next class is\n";


            cout<<Thursday[3];
            }
            else
            {

            cout << "you have\n";
            cout<<Saturday[2]<<endl;
            cout << "your next class is\n";


                cout<<Saturday[3];
            }
        }
	}
	if (var1 == Time[3])
	{
         cout << "Enter the day \n";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){

            cout << "you have\n";
                        cout<<Monday[3]<<endl;;
            cout << "your next class is\n";


            cout<<Monday[4];
            }
            else
            {

            cout << "you have\n";
            cout<<Friday[3]<<endl;
            cout << "your next class is\n";
            cout<<Friday[4];
            }
        }
        if(strlen(day)==7)
        {

            cout << "you have\n";
            cout<<Tuesday[3]<<endl;;
            cout << "your next class is\n";

            cout<<Tuesday[4];

        }
         if(strlen(day)==9)
        {

            cout << "you have\n";
            cout<<Wednesday[3]<<endl;;
            cout << "your next class is\n";

            cout<<Wednesday[4];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){

            cout << "you have\n";
            cout<<Thursday[3]<<endl;;
            cout << "your next class is\n";

            cout<<Thursday[4];
            }
            else
            {

            cout << "you have\n";
                cout<<Saturday[3]<<endl;
            cout << "your next class is\n";



                cout<<Saturday[4];
            }
        }
	}
	if (var1 == Time[4])
	{
        cout << "Enter the day\n";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){

            cout << "you have\n";
            cout<<Monday[4]<<endl;
            cout << "your next class is\n";

            cout<<Monday[5];
            }
            else
            {

            cout << "you have\n";
                cout<<Friday[4]<<endl;
            cout << "your next class is\n";


                cout<<Friday[5];
            }
        }
        if(strlen(day)==7)
        {

            cout << "you have\n";
            cout<<Tuesday[4]<<endl;;
            cout << "your next class is\n";


            cout<<Tuesday[5];

        }
         if(strlen(day)==9)
        {

            cout << "you have\n";
            cout<<Wednesday[4]<<endl;;
            cout << "your next class is\n";


            cout<<Wednesday[5];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){

            cout << "you have\n";
            cout<<Thursday[4]<<endl;;
            cout << "your next class is\n";


            cout<<Thursday[5];
            }
            else
            {

            cout << "you have\n";
                cout<<Saturday[4]<<endl;
            cout << "your next class is\n";



                cout<<Saturday[5];
            }
        }
	}
	if (var1 == Time[5])
	{
         cout << "Enter the day\n";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){

            cout << "you have\n";
            cout<<Monday[5]<<endl;;
            cout << "your next class is\n";

            cout<<Monday[6];
            }
            else
            {

            cout << "you have\n";
            cout<<Friday[5]<<endl;
            cout << "your next class is\n";

                cout<<Friday[6];
            }
        }
        if(strlen(day)==7)
        {

            cout << "you have\n";
            cout<<Tuesday[5]<<endl;;
            cout << "your next class is\n";


            cout<<Tuesday[6];

        }
         if(strlen(day)==9)
        {

            cout << "you have\n";
            cout<<Wednesday[5]<<endl;;
            cout << "your next class is\n";


            cout<<Wednesday[6];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
             cout << "you have\n";
            cout<<Thursday[5]<<endl;;
            cout << "your next class is\n";


            cout<<Thursday[6];
            }
            else
            {

             cout << "you have\n";
                cout<<Saturday[5]<<endl;
            cout << "your next class is\n";



                cout<<Saturday[6];
            }
        }
	}
	if (var1 == Time[6])
	{
        cout << "Enter the day\n";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){

             cout << "you have\n";
            cout<<Monday[6]<<endl;;
            cout << "your next class is\n";


            cout<<Monday[7];
            }
            else
            {

            cout << "you have\n";
            cout<<Friday[6]<<endl;
            cout << "your next class is\n";


                cout<<Friday[7];
            }
        }
        if(strlen(day)==7)
        {
            cout << "you have\n";
            cout<<Tuesday[6]<<endl;;
            cout << "your next class is\n";


            cout<<Tuesday[7];

        }
         if(strlen(day)==9)
        {
            cout << "you have\n";
            cout<<Wednesday[6]<<endl;;
            cout << "your next class is\n";
            cout<<Wednesday[7];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){

            cout << "you have\n";
            cout<<Thursday[6]<<endl;;
            cout << "your next class is\n";

            cout<<Thursday[7];
            }
            else
            {

            cout << "you have\n";
                cout<<Saturday[6]<<endl;
            cout << "your next class is\n";



                cout<<Saturday[7];
            }
        }
	}
	if (var1 == Time[7])
	{
        cout << "Enter the day\n";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){

            cout << "you have\n";
            cout<<Monday[7]<<endl;;
            cout << "your next class is tomorrow\n";


            cout<<Monday[8];
            }
            else
            {

            cout << "you have\n";
            cout<<Friday[7]<<endl;
            cout << "your next class is tomorrow\n";


                cout<<Friday[8];
            }
        }
        if(strlen(day)==7)
        {
            cout << "you have\n";
            cout<<Tuesday[7]<<endl;;
            cout << "your next class is tomorrow\n";


            cout<<Tuesday[8];

        }
         if(strlen(day)==9)
        {
        cout << "you have\n";
        cout<<Wednesday[7]<<endl;;
        cout << "your next class is tomorrow\n";
        cout<<Wednesday[8];

        }
        if(strlen(day)==8)
        {
        if(day[1]=='h'){
        cout << "you have\n";
        cout<<Thursday[7]<<endl;;
        cout << "your next class is tomorrow\n";
        cout<<Thursday[8];
        }
        else
        {
            cout << "you have\n";
            cout<<Saturday[7]<<endl;
            cout << "your next class is tomorrow\n";
            cout<<Saturday[8];
        }
    }
}


	getch();
}
