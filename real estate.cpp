#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;

int selection = 0;
int sInput = 0;
int loopcontrol = 1;

//Function to input an option from the user
int option()
{
	int indicator = 0;
	
	cout<<"Enter The Option Here : ";
	cin>>indicator;
	system("cls");
	
	return indicator;
}

//Function to Display the Main Menu
int displayMainMenu(void)
{
	cout<<"Welcome to the Real Estate Managemant System ";
	cout<<"\n\n";
	cout<<"Press 1 : To Manage Owners \n\n";
	
	cout<<"Press 2 : To Manage Purchasers \n\n";
	
	selection = option();
	
	return selection;
}

//Function to Display the Owners Menu
int displayOwnersMenu(void)
{
	cout<<" You are in the Owners Menu \n\n";
	
	cout<<"Press 1 : To Manage Comercial Properties \n\n";
	
	cout<<"Press 2 : To Manage Residental Properties \n\n";
	
	cout<<"Press 3 : To Exit \n\n";
	
	cout<<"Press 4 : To Go To Main Menu \n\n";
	
	selection = option();
	
	return selection;
}

//Function to Display the Purchasers Menu
int displayPurchasersMenu(void)
{
	cout<<" You are in the Purchasers Menu \n\n";
	
	cout<<"Press 1 : To Manage Comercial Properties \n\n";
	
	cout<<"Press 2 : To Manage Residental Properties \n\n";
	
	cout<<"Press 3 : To Exit \n\n";
	
	cout<<"Press 4 : To Go To Main Menu \n\n";
	
	selection = option();
	
	return selection;
}

//Function to Display the Commercial Properties Menu
int displayCommercialMenu(void)
{
	cout<<" You are in the Commercial Properties Menu \n\n";
	
	cout<<"Press 1 : To Manage Plots \n\n";
	
	cout<<"Press 2 : To Manage Shops \n\n";
	
	cout<<"Press 3 : To search \n\n";
	
	cout<<"Press 4 : To exit \n\n";
	
	selection = option();
	
	return selection;
}

//Function to Display the Residental Properties Menu
int displayResidentalMenu(void)
{
	cout<<" You are in the Residental Properties Menu \n\n";
	
	cout<<"Press 1 : To Manage Plots \n\n";
	
	cout<<"Press 2 : To Manage Houses \n\n";
	
	cout<<"Press 3 : To search \n\n";
	
	cout<<"Press 4 : To exit \n\n";
	
	selection = option();
	
	return selection;
}
 
 











class plot
{
	string name;
	string contactNo;
	string address;
	string size;
	string plotLocation;

public:
	 
	
	void plotInput(void)
	{
		ofstream plotObj("plot.txt",ios::app|ios::ate);

		while(loopcontrol)
		{
		cout<<"\nEnter Name : ";
		cin>>name;

		cout<<"\nEnter Contact Number : ";
		cin>>contactNo;

		cout<<"\nEnter Address : ";
		cin>>address;

		cout<<"\nEnter Size : ";
		cin>>size;

		cout<<"\nEnter Plot Location : ";
		cin>>plotLocation;

		cout<<" Do u want to enter more Press '1', Otherwise Press'0' : ";

			
		cin>>loopcontrol;

		plotObj<<name<<" "<<contactNo<<" "<<address<<" "<<size<<" "<<plotLocation<<" "<<endl;
		}

		plotObj.close();
	}
};


// Fuction to search plot


void compare(string c)
{
	

	string sze;
	string plotlocation;
	string nam;
	string contactno;
	string adress;
	

	ifstream obj("plot.txt");
	
	
	while(obj)
	{
		obj>>nam>>contactno>>adress>>sze>>plotlocation;
		if(c==sze)
		{
			cout<<endl<<setw(10)<<"Size"<<setw(15)<<"PlotLocation"<<setw(10)<<"OwnerName"<<setw(10)<<"ContactNo"<<setw(10)<<"Address";
			cout<<endl<<setw(10)<<c<<setw(10)<<plotlocation<<setw(13)<<nam<<setw(10)<<contactno<<setw(10)<<adress<<endl;
		}
		
	   
	}
		cout<<endl<<endl<<endl;
}
    

    
void size (void)
{

string s;
cout<<" Enter your desired size : ";
cin>>s;
compare(s);


}


		  

 
 




class house
{
	string size;
	string houseLocation;
	string name;
	string contactNo;
	string address;

public:
	
	void houseInput(void)
	{
		ofstream houseObj("house.txt",ios::app|ios::ate);

		while(loopcontrol)
		{
		cout<<"\nEnter Name : ";
		cin>>name;

		cout<<"\nEnter Contact Number : ";
		cin>>contactNo;

		cout<<"\nEnter Address : ";
		cin>>address;

		cout<<"\nEnter Size : ";
		cin>>size;

		cout<<"\nEnter Plot Location : ";
		cin>>houseLocation;

		cout<<" Do u want to enter more Press '1', Otherwise Press'0' : ";

			
		cin>>loopcontrol;

		houseObj<<name<<" "<<contactNo<<" "<<address<<" "<<size<<" "<<houseLocation<<" "<<endl;

		system("cls");
		}

		houseObj.close();
	}
};
	
	
	
	//Funtion to search house
	void compare1(string c1)
{
	

	string sze;
	string houselocation;
	string nam;
	string contactno;
	string adress;
	

	ifstream obj("house.txt");

	
	
	while(obj)
	{
		obj>>nam>>contactno>>adress>>sze>>houselocation;
		if(c1==sze)
		{
			cout<<endl<<setw(10)<<"Size"<<setw(15)<<"houseLocation"<<setw(10)<<"OwnerName"<<setw(10)<<"ContactNo"<<setw(10)<<"Address";
			cout<<endl<<setw(10)<<c1<<setw(10)<<houselocation<<setw(13)<<nam<<setw(10)<<contactno<<setw(10)<<adress<<endl;
		}
		
	   
	}
		cout<<endl<<endl<<endl;
}
    

    
void size1 (void)
{

string s1;
cout<<" Enter your desired size : ";
cin>>s1;
compare1(s1);


}
	
	
	class shop
{
	string size;
	string shopLocation;
	string name;
	string contactNo;
	string address;

public:
	
	void shopInput(void)
	{
		ofstream shopObj("shop.txt",ios::app|ios::ate);

		while(loopcontrol)
		{
		cout<<"\nEnter Name : ";
		cin>>name;

		cout<<"\nEnter Contact Number : ";
		cin>>contactNo;

		cout<<"\nEnter Address : ";
		cin>>address;

		cout<<"\nEnter Size : ";
		cin>>size;

		cout<<"\nEnter Plot Location : ";
		cin>>shopLocation;

		cout<<" Do u want to enter more Press '1', Otherwise Press'0' : ";

			
		cin>>loopcontrol;

		shopObj<<name<<" "<<contactNo<<" "<<address<<" "<<size<<" "<<shopLocation<<" "<<endl;

		system("cls");
		}

		shopObj.close();
	}
};


int main()
{
	plot plotObject;
	shop shopObject;
	house houseObject;
	
	

	while(1)
	{
		
		int input = displayMainMenu();
		
		switch(input)
		{
			
			case 1:	input = displayOwnersMenu();
			
				switch(input)
				{
					case 1: sInput = displayCommercialMenu();
				
						switch(sInput)
						{
							case 1: plotObject.plotInput();   //manage plots;
								break;
					
							case 2: shopObject.shopInput();   //manage shops;
								break;
					
							case 3: size();
								break;
					
							case 4: exit(1);
								break;
					
							default: cout<<"Please Enter The Correct Option";
								break;
						}
						break;
				
					
					case 2: sInput = displayResidentalMenu();
						
						switch(sInput)
						{
							case 1: plotObject.plotInput();
								break;
						
							case 2: houseObject.houseInput();
								break;
					
							case 3: size1();
								break;
					
							case 4: exit(1);
								break;
											
							default: cout<<"Please Enter The Correct Option";
								break;
						}
						break;
					
					case 3: exit(1);
						break;
					
					case 4: displayMainMenu();
						break;
					
					default: cout<<"Please Enter The Correct Option";

				}				
				break;

				
			case 2:	input = displayPurchasersMenu();
			
				switch(input)
				{
					case 1: sInput = displayCommercialMenu();
				
						switch(sInput)
						{
							case 1: plotObject.plotInput();//manage plots;
								break;
					
							case 2: houseObject.houseInput();//manage shops;
								break;
					
							case 3: exit(1);
								break;
					
							case 4: displayMainMenu();
								break;
					
							default: cout<<"Please Enter The Correct Option";
								break;
						}
						break;
				
					
					case 2: sInput = displayResidentalMenu();
						
						switch(sInput)
						{
							case 1: plotObject.plotInput();//manage plots;
								break;
						
							case 2: houseObject.houseInput();//manage house;
								break;
					
							case 3: exit(1);
								break;
					
							case 4: displayMainMenu();
								break;
											
							default: cout<<"Please Enter The Correct Option";
								break;
						}
						break;
					
					case 3: exit(1);
						break;
					
					case 4: displayMainMenu();
						break;
									
					default: cout<<"Please Enter The Correct Option";
				}
				break;

			default: cout<<"Please Enter The Correct Option";			
		}
	}	
	return 0;
}
				
	
	
