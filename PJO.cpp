#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
 cout<<"Which Percy Jackson and the Olympians character are you?"<<endl;

 int guess = 0;
 int percy = 0;
 int annabeth = 0;
 int grover = 0;
 int a;
 int b;

 cout<<"First question: What is your favourite colour?"<<endl;
 cout<<"a) Blue  b) Red  c) Green"<<endl;
 int guess1;
 cin>>guess1;
 if (guess1 == a) {
 percy = percy + 1;
 } else if (guess1 == b) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }



 cout<<"Second question: What is your favourite food?"<<endl;
 cout<<"a) Cookies  b) Burgers  c) Enchiladas"<<endl;
 int guess2;
 cin>>guess2;
 if (guess2 == a) {
 percy = percy + 1;
 } else if (guess2 == b) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }

 //cout<<"Third question: Which word describes you the best?"<<endl;
 //cout<<"a) Loyal  b) Smart  c) Friendly"<<endl;

 //cout<<"Forth question: What is your favourite music?"<<endl;
 //cout<<"a) Rock  b) Classical   c) Inspirational, instrumental pieces."<<endl;

 //cout<<"Fifth question: What is your favourite music?"<<endl;
 //cout<<"a) Rock  b) Classical   c) Inspirational, instrumental pieces."<<endl;

 //if (percy > annabeth && percy > grover ) {
 //   cout<<"Your character's like Percy's! Thanks for playing!";
 //} else if (annabeth > percy && annabeth > grover) {
 //   cout<<"Your character's like Annabeth's! Thanks for playing!";
 //} else {
 //   cout<<"Your character's like Grover's! Thank's for playing!";}

 return 0;
}

