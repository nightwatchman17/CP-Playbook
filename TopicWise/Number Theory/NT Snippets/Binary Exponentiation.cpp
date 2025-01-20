// Binary Exponentiation
//===========================

ll bin_pow(ll a, ll b, ll M) {
     ll res = 1LL;
     while (b > 0) {
          if (b & 1ll) res = (res * a) % M;
          a = (a * a) % M;
          b >>= 1LL;
     }
     return res;
}