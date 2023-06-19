#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
  int user = 0;
  int cpu = 0;
  cout<<"Rock Paper Scissors SHOOT!\n";
  cout<<"1) Rock\n";
  cout<<"2) Paper\n";
  cout<<"3) Scissors\n";
  cin>>user;
  if (user == 1) {
    cout<<"You chose rock\n";
  }
  else if (user == 2) {
    cout<<"You chose paper.\n";
  }
  else {
    cout<<"You chose scissors\n";
  };

  cpu = rand()%3+1;
  if (cpu == 1) {
    cout<<"The computer chose rock\n";
  }
  else if (cpu == 2) {
    cout<<"The computer chose paper.\n";
  }
  else {
    cout<<"The computer chose scissors\n";
  };

  //match
  if(user == cpu) {
    cout<<"It's a tie!\n";
  }
  else if (user == 1) { //user chose rock
    if(cpu == 2) {
      cout<<"You lose\n";
    }
    if(cpu == 3) {
      cout<<"You Win!\n";
    }  
  }
  else if (user == 2) {//user chose paper
    if (cpu == 1) {
      cout<<"You win!\n";
    }
    if (cpu == 3) {
      cout<<"You lose!\n";
    }
  }
  else if (user == 3) { //user chose scissors
    if (cpu == 1) {
      cout<<"You lose!\n";
    }
    if (cpu == 2) {
      cout<<"You win!\n";
    }
  }
};