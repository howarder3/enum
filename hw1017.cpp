#include<iostream>
using namespace std;

int main()
{
	//#1
	const double NORMAL = 36.5;
	double temperature;

	cout<<"Enter your temperature: ";
	cin>> temperature;

	if(temperature > NORMAL )
	{
		cout<<"You have a fever.\n";
		cout<<"Drink lots of liquids and get to bed.\n"<<endl;
	}
	else
	{
		cout<<"You don't have a fever.\n";
		cout<<"Go study.\n"<<endl;	
	}

	//#2
	int time,limit;
	cout<<"Enter the time used: ";
	cin>> time;  //please key in 36
	cout<<"Enter the limit : ";
	cin>> limit; //please key in 60
	if(!time > limit)
		cout<<"not time > limit" <<endl<<endl;
	else
		cout<<"time > limit"<<endl<<endl;

	//#3
	enum Direction{NORTH,SOUTH,EAST,WEST};
	cout<<NORTH<<" "<<SOUTH<<" "<<EAST<<" "<<WEST<<" "<<endl<<endl;

	enum MyEnum{ONE=17,TWO,THREE,FOUR=-3,FIVE};
	cout<<ONE<<" "<<TWO<<" "<<THREE<<" "<<FOUR<<" "<<FIVE<<" "<<endl<<endl;

	//#4
	/*
	double fuel;
	cout<<"Enter the amount of fuel: ";
	cin>>fuel;
	if(fuel < 0.75)
		if(fuel < 0.25)
			cout << "Fuel very low.\n";
	else
		cout << "Fuel over 3/4. Great!\n";
	*/

	double fuel;
	cout<<"Enter the amount of fuel: ";
	cin>>fuel;
	if(fuel < 0.75)
		if(fuel < 0.25)
			cout << "Fuel very low.\n"<<endl;
		else
			cout << "Fuel over 3/4. Great!\n"<<endl;
		
	system("PAUSE");
	return 0;
}
