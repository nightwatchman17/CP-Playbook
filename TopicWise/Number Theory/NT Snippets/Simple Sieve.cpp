
const int inf = 3e5 + 100;
vector<bool> mark(inf);
vector<int> primes;

void simple_sieve() {
     mark[0] = mark[1] = 1;
     primes.push_back(2);

     for (int i = 4; i < inf; i += 2) mark[i] = 1;
     
     int sq = sqrt(inf+1);
     for (int i = 3; i < inf; i += 2) {
          if (!(mark[i])) {
               primes.push_back(i);
               if (i <= sq){
                    for (int j = i * i; j < inf; j += (i + i)) mark[j] = 1;
               }
          }
     }
}
