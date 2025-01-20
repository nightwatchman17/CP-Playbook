//--------------------------------------------------------------------------
inline ll _norm(ll a, ll M) { a = a - a / M * M; if (a < 0) a += M; return a; }
inline ll modAdd(ll a, ll b, ll M) { a = _norm(a, M), b = _norm(b, M); return (a + b) % M; }
inline ll modSub(ll a, ll b, ll M) { a = _norm(a, M), b = _norm(b, M); return _norm(a - b, M); }
inline ll modMul(ll a, ll b, ll M) { a = _norm(a, M), b = _norm(b, M); return (a * b) % M; }
inline ll bigMod(ll a, ll b, ll M) { ll res = 1; while (b > 0) { if (b & 1LL) res = modMul(res, a, M); a = modMul(a, a, M); b >>= 1LL; } return res; }
inline ll fermats_inverse(ll a, ll M) { return bigMod(a, M - 2, M); }
// (a^-1) ... M must be prime; (a,M) must be coprime
inline ll modDiv(ll a, ll b, ll M) { return modMul(a, fermats_inverse(b, M), M); }
//---------------------------------------------------------------------------