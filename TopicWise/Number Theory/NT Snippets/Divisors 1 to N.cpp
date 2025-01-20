// Count, Sum and Divisors of numbers from 1 to N
//====================================================

const int inf = 3e5+5;
vector<int> div_count(inf);
vector<ll> div_sum(inf);
vector<int> divisors[inf];

void divisors_gen() {
     for (ll i = 1; i < inf; i++) {
          for (ll j = i; j < inf; j += i) {
               div_count[j]++;
               div_sum[j] += i;
               divisors[j].push_back(i);
          }
     }
}