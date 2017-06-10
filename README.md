# Bigmod

find very big integer formular :

## Serveral Algorithm
```bash
(A*B*C) mod N = ((A mod N) * (B mod N) * (C mod N)) mod N
```
Example
```bash
7*11*23 mod 5 is 1
(7 mod 5) * (11 mod 5) * (23 mod 5) = (6 mod 5) = 1
```
## [Fermat Little Test for primality testing:](https://en.wikipedia.org/wiki/Fermat_primality_test)
```bash
R=B^P mod M (B^P very big number)
```
calulation R Quickly (fast) using Divide & Conquer
```c++
long bigmod(long b,long p,long m)
{
  if(p == 0 )
    return 1;
  else if(p % 2 == 0)
    return  (long)sqrt(bigmod(b,p/2,m)) % m; //sqrt(x)= x*x
  else
    return (b % m) * bigmod(b,p-1,m) % m;
}
```
![Alt text](https://github.com/NantipatSoftEn/Art.Of.Programing/blob/master/bigmod1.png)
## Solve UVa
- 343
- 353
- 389
