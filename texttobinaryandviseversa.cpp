#include<iostream>
using namespace std;
int main(){
while(true){
cout<<"Press T for Text to Binary, B for Binary to Text, E for Exit: ";
char choice;
cin>>choice;      
cin.ignore();
if(choice=='T'||choice=='t'){
string text;
cout<<"Enter Some Text: ";
getline(cin,text);
for(int i=0; i<text.length();i=i+1){
char c=text[i];
for(int j=7;j>=0;j=j-1){
int bit=(c>>j)&1;
cout<<bit;
}     
}
cout<<endl;
}
else if(choice=='B'||choice=='b'){
string binary;
cout<<"Enter any Binary Number: ";
getline(cin,binary);
for(int i=0;i<binary.length();i=i+8){
int value=0;
for(int j=0;j<8;j=j+1){
char ch=binary[i+j];
int digit=ch-'0';
value=value*2+digit;
}
cout<<(char)value;
}
cout<<endl;
}
else if(choice=='E'||choice=='e'){
break;
}
else{
cout<<"Wrong option selected"<<endl;
}
}
}

