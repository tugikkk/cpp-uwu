#include <iostream>
using namespace std;

int main()
{
  const int THOUSAND = 1000, HUNDRED = 100, FIFTY = 50, TWENTY5 = 25;
  bool run = true, failed = false;
  long int money, thousands, hundreds, fifties, twenty5;

  while (run)
  {
    if (failed == true)
    {
      cout << "Harap masukkan uang dengan kelipatan 25!" << endl;
    }

    cout << "Masukkan jumlah uang : ";
    cin >> money;

    if (money % 25 == 0)
    {
      run = false;

      thousands = money / THOUSAND;
      money = money % THOUSAND;

      hundreds = money / HUNDRED;
      money = money % HUNDRED;

      fifties = money / FIFTY;
      money = money % FIFTY;

      twenty5 = money / TWENTY5;

      cout << "Pecahan 1000 : " << thousands << endl;
      cout << "Pecahan 100 : " << hundreds << endl;
      cout << "Pecahan 50 : " << fifties << endl;
      cout << "Pecahan 25 : " << twenty5 << endl;
    }
    else
    {
      failed = true;
    }
  }

  return 0;
}
