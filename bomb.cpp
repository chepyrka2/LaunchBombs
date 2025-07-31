#include <iostream>
#include <chrono>
#include <ostream>
#include <thread>
#include <limits>
using namespace std;

int main(){
  char place[100];
  long amount;
  char power[100];

  cout << "Куда кидать ядерные бомбы? ";
  cin.getline(place, 99);
  cout << "Сколько кидать? ";
  cin >> amount;
  cout << "Какой силы? ";
  cin.getline(power, 99);
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  char a[2];
  this_thread::sleep_for(chrono::seconds(1));
  cout << "Поиск местонахождения..." << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << "Найдено!" << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << "Подготовка бомб..." << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << "Бомбы готовы! Нажми на Enter для запуска" << endl;
  cin.getline(a, 1);
  for(int i = 3; i > 0; i--){
    cout << i << "... " << flush;
    this_thread::sleep_for(chrono::seconds(1));
  }
  this_thread::sleep_for(chrono::seconds(1));
  cout << endl << "Бомбы прилетели в " << place << "!";

}
