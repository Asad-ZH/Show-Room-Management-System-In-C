#include <iostream>
#include <fstream>
using namespace std;
class showroom
{
	
	public:
	class car
		{
			public:
			string make;
			string color;
			int model;
			bool is_avail; 
			
			car(string ma="TOYOTA",string c="BLACK",int mo=2017, bool avail=true)
			{
				make=ma;
				color=c;
				model=mo;
				is_avail = true;
			}
			
			
			void display()
			{
cout<<"\t\t\t";				cout<<"the make: "<<make<<endl;
cout<<"\t\t\t";				cout<<"the color: "<<color<<endl;
cout<<"\t\t\t";				cout<<"the model: "<<model<<endl;
			}
			
			void input()
			{
			//	ofstream fout;
			//	fout.open("cars.txt",ios::app);
				
				cout<<"\t\t\tenter the make: "<<endl;
cout<<"\t\t\t"; cin>>make;
			//	fout<<make<<endl;
			
				cout<<"\t\t\tenter the color: "<<endl;
cout<<"\t\t\t"; cin>>color;
			//	fout<<color<<endl;
			
				cout<<"\t\t\tenter the model: "<<endl;
cout<<"\t\t\t"; cin>>model;
			//	fout<<model<<endl;
			//	fout.close();
			}
			
		};
	
		int no_of_cars=0;
		int storage=0;
		int max_cap=20;
	//	car* cars;
		car cars[20];
		showroom(int n=0,int g=0, int m=20)
		{
			no_of_cars=n;
			storage=g;
			max_cap = m;
		}
		
		void set_storage(int store)
		{
			storage = store;
		}
		
		display()
		{
			cout<<endl;
			cout<<endl;
			
			cout<<"\t\t\t________________________\t\t\t"<<endl;
			cout<<endl;
	
			cout<<"\t\t\t\t\t WELCOME TO THE CAR MANAGEMENT SYSTEM\t\t\t\t\t"<<endl;
		
			cout<<"\t\t\t________________________\t\t\t"<<endl;
			cout<<endl;
			cout<<endl;
			
		}

		
		int add_cars()
     	{
//			ofstream fout;   //libaray for file handling
//			fout.open("data.txt"); //fout is object //create files its own when file is no avaliable. 
//			
			int new_cars=0;
			     cout<<"\t\t\tHow many cars do you want to add in your garage? "<<endl;
cout<<"\t\t\t";  cin>>new_cars; // user tells how many cars he wants to add

	//		fout<<new_cars;
	//		fout.close();
	
	//		cars = new car[new_cars]; // we create space for the new cars by dynamically allocating array of cars
	//	car carr[new_cars];
	//	cars[new_cars];
			car c1;
			
			if(storage <= no_of_cars && (storage + new_cars) <= max_cap )
			{
				 storage = storage + new_cars;
			}
			else
			{
				cout<<"\t\t\tApologies, the garage capacity is full.";
			}
			
			for(int i=no_of_cars; i<storage; i++)
			{
				cout<<"\t\t\tNow enter details of car number: "<<i+1<<endl;
				c1.input();
				cars[i].make=c1.make;
				cars[i].color=c1.color;
				cars[i].model=c1.model;
			//	cars[i].is_avail=true;
				cout<<endl;
				cout<<"\t\t\tCar added"<<endl;
			
			}
			no_of_cars=no_of_cars+new_cars;
				cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\t\t\t";				system("pause");
            	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"\t\t\t";				system("cls");
			
			
		
			
//			cout<<"The list of cars present right now is: "<<endl;
//			for (int i=0; i<no_of_cars; i++)
//			{
//				if(cars[i].is_avail == true)
//				{
//					cout<<i<<". "<<endl;
//					cars[i].display();
//				}
//			}
//		
			
			//return cars;
		}
		
		cars_details()
		{
			cout<<"\t\t\tThe list of cars present right now is: "<<endl;
			for (int i=0; i<no_of_cars; i++)
			{
				if(cars[i].is_avail == true)
				{
					cout<<i<<". "<<endl;
					cars[i].display();
				}
			}
			cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\t\t\t";			system("pause");
cout<<"\t\t\t";			system("cls");
		}
		
		
		void sell_cars()
		{
			int y;
			y=0;
			
			A:
			int new_cars=0;
		    	cout<<"\t\t\tHow many cars do you want to sell "<<endl;
cout<<"\t\t\t"; cin>>new_cars; // customer tells how many cars he wants to sell

			//cars = new car[new_cars]; // we create space for the new cars by dynamically allocating array of cars
		   // car  carr[new_cars];
		  // cars[new_cars];// = carr[new_cars];
			car c1;
			
			if(storage <= no_of_cars && (storage + new_cars) <= max_cap )
			{
				 storage = storage + new_cars;
			    // cout<<"storage extended";
			}
			else
			{
				cout<<"\t\t\tApologies, the garage capacity is full.";
			}
			cout<<storage;
			for(int i=no_of_cars; i<storage; i++)
			{
				cout<<"number of cars:"<<no_of_cars;
				cout<<"\n STORAGE = "<<storage;
				cout<<"\n index i :"<<i;
				cout<<endl;
				cout<<"\t\t\tNow enter details of car : "<<endl;
				c1.input();
				cars[i].make=c1.make;
				cars[i].color=c1.color;
				cars[i].model=c1.model;
				cout<<"number of cars:"<<no_of_cars;
				cout<<"\n STORAGE = "<<storage;
				cout<<"\n index i :"<<i;
			//	cars[i].is_avail=true;
				cout<<endl;

			}
			
			no_of_cars=no_of_cars+new_cars;
			
//		        cout<<endl;
//		        	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
//		        cout<<"\t\t\t";			   system("pause");
//		        	cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
//			    cout<<endl;
				cout<<"\t\t\tDo you want to sell any more cars"<<endl;
			    cout<<"\t\t\tyes    ----- 1"<<endl;
			    cout<<"\t\t\tno     ----- 2"<<endl;
cout<<"\t\t\t"; cin>>y;

//cout<<"\t\t\t";			   system("cls");

			if(y==1)
			{
				goto A;
			}
			system("cls");
			
		}
		
		void buy_cars()
		{
			B:
			int z,count=0;
			cout<<"\t\t\tThese cars are available: "<<endl;
			for (int i=0; i<no_of_cars; i++)
			{
				if(cars[i].is_avail == true)
				{
					cout<<i<<". "<<endl;
					cars[i].display();
				}
			}
			
			car c1;
			
	            cout<<endl;
                cout<<"\t\t\tEnter the details of car you want to buy: "<<endl;
               c1.input();
	
	for(int i=0;i<no_of_cars;i++)
	{
		
	if(cars[i].make==c1.make && cars[i].color==c1.color && cars[i].model==c1.model)
	{
		++count;
		cars[i].make=cars[no_of_cars-1].make;
		cars[i].color=cars[no_of_cars-1].color;
		cars[i].model=cars[no_of_cars-1].model;
		cout<<endl;
		
		cout<<"\t\t\tSOLD"<<endl;
		no_of_cars=no_of_cars-1;
		storage=storage-1;
		

	}
	
    }
    

	if(count>0)
	{
		cout<<endl;
		cout<<"\t\t\tDo you want to buy any more car"<<endl;
		cout<<"\t\t\tyes    ----- 1"<<endl;
		cout<<"\t\t\tno     ----- 2"<<endl;
		cin>>z;
		if(z==1)
		{
		   goto B;	
		}

	}
	
	else
	{
		cout<<endl;
		cout<<"\t\t\tOUT OF STOCK OR EITHER SOLD"<<endl;
		cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\t\t\t";		system("pause");
	   cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<endl;
		cout<<"\t\t\tDo you want to check the cars again"<<endl;
		cout<<"\t\t\tyes    ----- 1"<<endl;
		cout<<"\t\t\tno     ----- 2"<<endl;
		cin>>z;
		if(z==1)
		{
		   goto B;	
		}
		
	}
	system("cls");
	

		}
		
		
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	
	showroom s;
	int x;
	while(x!=3)
	{
	
//	cout<<"WELCOME TO THE CAR MANAGEMENT SYSTEM"<<endl;
    s.display();
	
    cout<<"\t\t\tOWNER         ----- 1"<<endl;
	cout<<"\t\t\tCUSTOMER      ----- 2"<<endl;
    cout<<"\t\t\tEXIT          ----- 3"<<endl;
	cin>>x;
	system("cls");
	s.display();
	if(x==1)
	{
	//	system("cls"); 
		int x1;
	//	while(x1!=3)
	//	{
			
		cout<<"\t\t\tWANT TO ADD CARS TO SHOWROOM        ------- 1"<<endl;
		cout<<"\t\t\tWANT TO CHECK THE STOCK DETAILS     ------- 2"<<endl;
		cout<<"\t\t\tEXIT                                ------- 3"<<endl;
		cin>>x1;
		system("cls");
		
		if(x1==1)
		{
			s.display();
			s.add_cars();
		}
		if(x1==2)
		{
			s.display();
			s.cars_details();
		}
		
		
	//	cin>>x1;
	//	}
			
	}
	
	else if(x==2)
	{
		int x2;
		
	cout<<"\t\t\tWANT TO BUY CAR      ----- 1"<<endl;
	cout<<"\t\t\tWANT TO SELL CAR     ----- 2"<<endl;
	cout<<"\t\t\tEXIT                 ----- 3"<<endl;
	cin>>x2;
	system("cls");

	if(x2==1)
	{
		s.display();
		s.buy_cars();
	}
	
	else if (x2==2)
	{
		s.display();
		s.sell_cars();
	}
	
	}
}

system("cls");
}
