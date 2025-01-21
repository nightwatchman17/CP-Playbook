// Smallest Prime Factor
//=================================

const ll inf = 2e6 + 5;
vector<int> spf(inf);

void SPF_gen() {
     spf[1] = 1;
     for (int i = 2; i < inf; i += 2) spf[i] = 2;
     int sq = sqrt(inf + 1);
     for (int i = 3; i < inf; i += 2) {
          if (!spf[i]) {
               spf[i] = i;
               if (i <= sq)
                    for (int j = i * i; j < inf; j += (i + i)) {
                         if (!(spf[j])) spf[j] = i;
                    }
          }
     }
}