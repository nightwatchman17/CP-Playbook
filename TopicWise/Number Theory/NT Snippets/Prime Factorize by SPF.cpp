// Factorize by SPF. Faster but doesn't work in high memory(array length)
//=================================

const int inf = 2e6 + 5;
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

void prime_factorize(ll x) {
     vector<pair<ll, ll>> vp;
     int cnt = 0;
     while (x > 1) {
          cnt++;
          ll a = spf[x];
          x = x / spf[x];
          if (a != spf[x]) {
               vp.push_back({a, cnt});
               cnt = 0;
          }
     }
    //  for (auto u : vp)
    //       cout << u.first << "^" << u.second << " ";
    //  cout << '\n';
}