#include <iostream>
using namespace std;
string array1[20],array2[20];
string array3[20];
string array4[20],array5[20];
int total=0;
void Enter(){
	int choice;
cout<<"\t\t--how many student you want to enter:";
cin>>choice;
	if(total==0){
	
		total=total+choice;
		for(int i=0;i<choice;i++){
			
cout<<"\t\t--Enenter data of student:"<<i+1<<endl;
		
cout<<"\t\t--Enter a Name:";
		
	cin>>array1[i];
	cout<<"\t\t--Enter Student Rollno:";
		

	cin>>array2[i];
	cout<<"\t\t--Enter Course:";
	cin>>array3[i];
	cout<<"\t\t--Enter Student Class:";
	cin>>array4[i];
	cout<<"\t\t--Contact:";
	cin>>array5[i];
	cout<<"\t\t----------------------------------------"<<endl;
		
       }
	}
	else{
		
		for(int i=total;i<total+choice;i++)
	{
	cout<<"\t\t--------------------------"<<endl;
	cout<<"\t\t--Enenter data of student"<<i+1<<endl;
	cout<<"\t\t--Enter a Name:";
	cin>>array1[i];
	cout<<"\t\t--Enter student rollno:";
	cin>>array2[i];
	cout<<"\t\t--Enter course:";
	cin>>array3[i];
	cout<<"\t\t--Enter student class:";
	cin>>array4[i];
	cout<<"\t\t--Contact:";
	cin>>array5[i];
	cout<<"\t\t----------------------------"<<endl;
	}
	total+total+choice;
	}
}
void showw()
{
	if(total==0){
	cout<<"\t\t----------------------------"<<endl;
	cout<<"\t\t--no data is entered"<<endl;
	}
	
	for(int i=0;i<total;i++)
	{
	cout<<"\t\t----------------------------"<<endl;
	cout<<"\t\t--Student Data:"<<i+1<<endl;
	cout<<"\t\t--Name:"<<array1[i]<<endl;
	cout<<"\t\t--Roll.No:"<<array2[i]<<endl;
	cout<<"\t\t--Course:"<<array3[i]<<endl;
	cout<<"\t\t--Class:"<<array4[i]<<endl;
	cout<<"\t\t--Contact:"<<array5[i]<<endl;
	cout<<"\t\t----------------------------"<<endl;
}
}

	
	
void search(){
		if(total==0){
	cout<<"--------------------------"<<endl;
		cout<<"\t\t--no data is stored"<<endl;
		
	}
	else{
	
	string rollno;
cout<<"\t\t--Enter a roll no that you want to search:";
	cin>>rollno;
	for(int i=0;i<total;i++)
{
	if(rollno==array2[i]){
	
	cout<<"--------------------------"<<endl;
    cout<<"\t\t--Student data:"<<i+1<<endl;
	cout<<"\t\t--Name:"<<array1[i]<<endl;
	cout<<"\t\t--Rollno:"<<array2[i]<<endl;
	cout<<"\t\t--Course:"<<array3[i]<<endl;
	cout<<"\t\t--Class:"<<array4[i]<<endl;
	cout<<"\t\t--Contact:"<<array5[i]<<endl;
	cout<<"--------------------------"<<endl;
}
}
}
}
void update(){
		if(total==0){
				cout<<"--------------------------"<<endl;
		cout<<"\t\t--No data is stored"<<endl;
		
	}
	else{
	
	string rollno;
	cout<<"\t\t--Enter a roll no that you want to search";
	cin>>rollno;
	for(int i=0;i<total;i++)
{
	if(rollno==array2[i]){
	
	cout<<"\t\t--Previous Data"<<endl;
	cout<<"\t\t--Student Data:"<<i+1<<endl;
		cout<<"\t\t--Name:"<<array1[i]<<endl;
		cout<<"\t\t--RollNo:"<<array2[i]<<endl;
		cout<<"\t\t--Course:"<<array3[i]<<endl;
		cout<<"\t\t--Class:"<<array4[i]<<endl;
		cout<<"\t\t--Contact:"<<array5[i]<<endl;
		cout<<"\t\t--\nEnter New Data:"<<endl;
		cout<<"\t\t--\nEnter Name:";
		cin>>array1[i];
		cout<<"\t\t--enter rollno:";
		cin>>array2[i];
		
		cout<<"\t\t--Course:"<<array3[i]<<endl;
		cout<<"\t\t--Class:"<<array4[i]<<endl;
		cout<<"\t\t--Contact:"<<array5[i]<<endl;
		cout<<"\t\t--------------------------"<<endl;
}
}
}
}
void deletecode()
{
		if(total==0)
		{
		cout<<"\t\t--------------------------"<<endl;
		cout<<"\t\t--No data is stored"<<endl;
		
	}
	else{
	
	int a;
	
	cout<<"\t\t--Enter 1 to delet full record"<<endl;
	cout<<"\t\t--Enter 2 to delet spacefic record"<<endl;
	cin>>a;
	if(a==1)
	{
		total=0;
		cout<<"\t\t--All record is delete"<<endl;
		
	}
	else(a==2);
	{
		string rollno;
		cout<<"\t\t--Enter rollno which you want to delet"<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++) 
		{
		if(rollno==array2[i])
		{
		for(int j=i;j<total;j++)
		{
		array1[j]=array1[j+1];
		array2[j]=array2[j+1];
		array3[j]=array3[j+1];
		array4[j]=array4[j+1];
		array5[j]=array5[j+1];
					
				}
				total--;
				cout<<"\t\t--your required recod is deleted"<<endl;
				cout<<"\t\t---------------------------------------"<<endl;
			}
		}

	}
}
}

int main(){
	
	int value;
	while(true)
	{   cout<<"\t\t======================================"<<endl;
		cout << "\n\t\t--- Student Management System ---\n";
		cout<<"\t\t======================================="<<endl;
		cout<<"\t\t----------------------------"<<endl;
        cout<<"\t\t--tpress 1 to enter data--"<<endl;
	    cout<<"\t\t--tpress 2 to show data--"<<endl;
		cout<<"\t\t--tpress 3 to search data--"<<endl;
		cout<<"\t\t--tpress 4 to update data--"<<endl;
		cout<<"\t\t--tpress 5 to delete data--"<<endl;
		cout<<"\t\t--press 6 to exit data--"<<endl;
			cout<<"\t\t----------------------------"<<endl;
		cin>>value;
		switch(value){
			case 1:
			Enter();
			break;
			case 2:
			showw();
			break;
			case 3:
			search();
			break;
			case 4:
			update();
			break;
			case 5:
			deletecode();
			break;
			case 6:
			exit(6);
			break;
			default:
			cout<<"\t\t--invalid input"<<endl;
			break;
			
		
		}
	}
}

