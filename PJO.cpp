#include <iostream>
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
 cout<<"1) Rock  2) Classical   3) Inspirational, instrumental pieces"<<endl;
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

 cout<<"Fifth question: What power would you choose?"<<endl;
 //cout<<"1) Controling water  2) Making good life decisions   3) "<<endl;
 int guess5;
 cin>>guess5;
 if (guess5 == 1) {
 percy = percy + 1;
 } else if (guess5 == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }
 cout<<" "<<endl;

 cout<<"Sixth question: What is your favourite animal?"<<endl;
 cout<<"1) Horse  2) Owl   3) I love all animals"<<endl;
 int guess6;
 cin>>guess6;
 if (guess6 == 1) {
 percy = percy + 1;
 } else if (guess6 == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }
 cout<<" "<<endl;

 cout<<"Seventh question: Which weapon would you choose?"<<endl;
 cout<<"1) Sword  2) Dagger   3) Reed pipes"<<endl;
 int guess7;
 cin>>guess7;
 if (guess7 == 1) {
 percy = percy + 1;
 } else if (guess7 == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }
 cout<<" "<<endl;

 cout<<"Eight question: Which one do you prefer?"<<endl;
 cout<<"1) Seaside  2) City   3) Mountain"<<endl;
 int guess8;
 cin>>guess8;
 if (guess8 == 1) {
 percy = percy + 1;
 } else if (guess8 == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }
 cout<<" "<<endl;

 //cout<<"Ninth question: ?"<<endl;
 //cout<<"1)   2)    3) "<<endl;
 int guess9;
 cin>>guess9;
 if (guess9 == 1) {
 percy = percy + 1;
 } else if (guess9 == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }
 cout<<" "<<endl;

 //cout<<"Tenth question: ?"<<endl;
 //cout<<"1)   2)    3) "<<endl;
 int guess10;
 cin>>guess10;
 if (guess10 == 1) {
 percy = percy + 1;
 } else if (guess10 == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }
 cout<<" "<<endl;


 if (percy > annabeth && percy > grover ) {
    cout<<"Your character's like Percy's! Thanks for playing!";
 } else if (annabeth > percy && annabeth > grover) {
    cout<<"Your character's like Annabeth's! Thanks for playing!";
 } else {
    cout<<"Your character's like Grover's! Thank's for playing!";}

 return 0;
}
