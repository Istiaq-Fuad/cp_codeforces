#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int t;
  cin >> t;
  long long hc, dc, hm, dm, k, w, a, current_chealth, current_cdamage, monster_attack, character_attack;
  bool flag;

  while(t--){
    flag = false;
    cin >> hc >> dc;
    cin >> hm >> dm;
    cin >> k >> w >> a;

    for (int i = 0; i <= k; i++){
      current_chealth = hc + (k - i) * a;
      current_cdamage = dc + i * w;
      monster_attack = ceil((long double)current_chealth/dm);
      character_attack = ceil((long double)hm/current_cdamage);
      //(hm + current_cdamage - 1) / current_cdamage <= (current_chealth + dm - 1) / dm
      if(monster_attack >= character_attack){  
        flag = true;
        break;
      };
    }

    if (flag){
      cout << "YES" << endl;
    } else{
      cout << "NO" << endl;
    } 
  }
}
