/// Segmented Sieve
//-------------------------------------------------------

const ll inf = (ll)(sqrt(2147483647)) + 100;
vector<bool> mark(inf);
vector<int> primes;

void simple_sieve() {
     mark[0] = mark[1] = 1;
     primes.push_back(2);

     for (int i = 4; i < inf; i += 2) mark[i] = 1;
     
     int sq = sqrt(inf + 1);
     for (int i = 3; i < inf; i += 2) {
          if (!(mark[i])) {
               primes.push_back(i);
               if (i <= sq){
                    for (int j = i * i; j < inf; j += (i + i)) mark[j] = 1;
               }
          }
     }
}

void seg_sieve(ll L, ll R) {
     vector<bool> check(R - L + 1);
     for (ll i = 0; primes[i] <= (R + 1) / primes[i]; i++) {
          ll base = (L / primes[i]) * primes[i];
          if (base < L) base += primes[i];
          for (ll j = base; j <= R; j += primes[i]) check[j - L] = 1;
          if (base == primes[i]) check[base - L] = 0;
     }
     if (L == 1) check[0] = 1;
}