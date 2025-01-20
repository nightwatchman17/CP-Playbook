bool isPrime(ll x) {
     ll sq = sqrtl(x + 1);
     if (x < 2) return false;
     if (x == 2) return true;
     if (!(x & 1)) return false; // even numbers
     for (ll i = 3; i <= sq; i += 2)
          if ((x - (x / i) * i) == 0) return false; // (x-(x/i)*i)=(x%i) 

     return true;
}