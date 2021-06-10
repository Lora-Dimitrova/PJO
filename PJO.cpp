#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
 cout<<"Which Percy Jackson and the Olympians character are you?"<<endl;
 cout<<"Please, answer with 1, 2 or 3."<<endl;
 cout<<" "<<endl;

 int percy = 0;
 int annabeth = 0;
 int grover = 0;

 cout<<"First question: What is your favourite colour?"<<endl;
 cout<<"1) Blue  2) Red  3) Green"<<endl;
 int guess1;
 cin>>guess1;
 if (guess1 == 1) {
 percy = percy + 1;
 } else if (guess1 == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }
 cout<<" "<<endl;

 cout<<"Second question: What is your favourite food?"<<endl;
 cout<<"1) Cookies  2) Burgers  3) Enchiladas"<<endl;
 int guess2;
 cin>>guess2;
 if (guess2 == 1) {
 percy = percy + 1;
 } else if (guess2 == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }
 cout<<" "<<endl;

 cout<<"Third question: Which word describes you best?"<<endl;
 cout<<"1) Loyal  2) Smart  3) Friendly"<<endl;
 int guess3;
 cin>>guess3;
 if (guess3 == 1) {
 percy = percy + 1;
 } else if (guess3 == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }
 cout<<" "<<endl;

 cout<<"Forth question: What is your favourite music?"<<endl;
 cout<<"1) Rock  2) Classical   3) Inspirational, instrumental pieces."<<endl;
 int guess4;
 cin>>guess4;
 if (guess4 == 1) {
 percy = percy + 1;
 } else if (guess4 == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }
 cout<<" "<<endl;

 //cout<<"Fifth question: What is your favourite music?"<<endl;
 //cout<<"1) Rock  2) Classical   3) Inspirational, instrumental pieces."<<endl;

 if (percy > annabeth && percy > grover ) {
    cout<<"Your character's like Percy's! Thanks for playing!";
 } else if (annabeth > percy && annabeth > grover) {
    cout<<"Your character's like Annabeth's! Thanks for playing!";
 } else {
    cout<<"Your character's like Grover's! Thank's for playing!";}

 return 0;
}
