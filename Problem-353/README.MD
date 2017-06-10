# UVA 353 Pesky Palindromes
เขียนโปรแกรมอ่านลำดับของ String แต่ละตัวจะกำหนด Unique(เอกลักษณ์) ของ   substrings
## Palindrome  
พาลินโดรม (Palindrome) คือ คำในภาษาอังกฤษที่อ่านจากข้างหน้าไปหลังหรือข้างหลังไปหน้าแล้วได้เหมือนกัน ตัวอย่างเช่น mom, madam, abcba "

## Analysis
  การจะรู้ว่าเป็นพาลินโดรม (Palindrome) หรือไม่ เราจะต้องนำคำเดิม มาเรียงจากข้างหลังมาหน้าใหม่และทำการเปรียบเทียบกับคำเดิม ถ้าเท่ากันแสดงว่าเป็น Palindrome แต่ถ้าไม่เท่ากันแสดงว่าไม่ใช้

  ```c++
  if (input == string(input.rbegin(), input.rend())) {
          cout << input << " is a palindrome";
  }
  ```
## Explain Code
```c++
  pal = s.substr(i,len-j);
```
ตัดคำให้ได้เป็นแบบ combinnation เช่นถ้า input string abc จะได้
```bash
abc
abc
ab
a
bc
bc
b
c
c
c
```
การซ้ำกันสามารถจัดการด้วย
```c++
  if(mp[pal] >= 1)
          continue;
  mp[pal]++;
```
ถ้าหาก index เพิ่งถูก assign index ก็จะเพิ่มค่าขึ้น ถ้าค่านั้นถูกใช้อีกครั้งก็ เข้าเงื่อนไข ซึ่งสามารถจัดการตัวซ้ำได้

## Cheak Palindromes
```c++
int pl(string s,int len)
{
        for(int i=0,j=len-1; i < len/2; i++,j--)
        {
                if(s[i] != s[j])
                        return 0;
        }
        return 1;
}
```
ข้อนี้ผมคิดมากไปคิดว่าต้องใช้การ  Combinnation  String แล้วส่งแต่ละตัว Cheak Palindromes
ซึ่งมันสามารถเขียน algorithm ได้ง่ายๆ

## [Palindromes Code](http://scanftree.com/programs/c/write-a-c-program-to-check-given-string-is-palindrome-number-or-not/)
