# UVA 389 Basically Speaking
แปลงเลขฐาน 2 ขั้น

## Base Number
```
101 base 2 = (1*2^0) + (0*2^1) + (1*2^2)
```
## Exponent
```c++
long long exponent( long long base, long long power)
{
        long long result = 1;
        for ( long long i = 0; i <  power; i++) {
                result*=base;
        }
        return result;
}
```
## Loop
- i = digit Number-1 เพราะ start index at 0
- j = 0  เพราะ sub string จากตัวแรก ไล่จากฐานมากฐานไปน้อย
```
101 base 2 = (1*2^2) + (0*2^1) + (1*2^0)
```

```c++
for ( long long i = n.size()-1,j=0; i >= 0; i--,j++) {
```
## Algorithm

input เลขเป็น String แล้วทำ sub string
```c++
nsub = n.substr(j,1);
```
จากนั้น cheak  ว่าเป็น base 16 หรือไม่
```c++
if(nsub >="A" && nsub <="F")
        nlong = mp[nsub];
else
        nlong = atoi(nsub.c_str());
```
เสร็จแล้วคูณกับเลขที่ยกกำลังแล้ว
```c++
nsum+= nlong*exponent(base,i);
```
## Divide Base Number
อาจจะดูงงๆ ที่ใช้ res+= d[nsum % cv] ไม่ได้เพราะมีผลต่อลำดับเลข  ถ้าไม่เข้าใจลองทำหารสั้นดูญ
```c++
string d = "0123456789ABCDEF";
string res;
while(nsum > 0)
{
        res = d[nsum % cv] + res;
        nsum /= cv;
}
```
