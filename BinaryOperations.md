In the name of God

-  What is a base?

   -  We can build 0..3 using 1,2.
   -  Add 4. We now can build 4..7, so 0..7.
   -  Add the next number, 8. Now 0..15
   -  ...
   -  The representation is unique.
   -  We show it like $(11010)_2$.
   -  $123 = 1*100 + 2*10 + 3*1$
   -  $(xyz)_b = x*b^2 + y*b^1 + z*b^0$

-  Operations in a base

   -  $+ - * /$
   -  Do it just like in elementary school.

-  Binary operations

   -  & | ^ ~ >> <<
   -  3 & 9 => ?
   -  7 ^ 3 => ?
   -  ...

-  The mask behaviors (in between problems)

   -  & will filter out non-1's.

   -  | will put 1's.

   -  ^ will alter 1's.

      ​

   -  The identities.

      -  a X a
      -  a X 0
      -  a X ~0
      -  a X ~a

-  Problems

   -  Find the first bit of n.
      -  n << (M - 1) >> (M - 1)
      -  n & 1
   -  Find the fifth bit of n.
      -  n << (M - 5) >> (M - 1)
      -  (n >> (4)) & 1
   -  Find the k-th bit of n.
      -  n << (M - k) >> (M - 1)
      -  (n >> (k - 1)) & 1
   -  Find $2^k$.
      -  1 << k
   -  Change the k-th bit of n to 1.
      -  (1 << (k - 1)) | n
   -  Change the k-th bit of n to 0.
      -  ~(1 << (k - 1)) & n
   -  Alter the k-th bit of n.
      -  (1 << (k - 1)) ^ n
   -  Change the k-th bit of n to i.
      -  ~(1 << (k - 1)) & n | (i << (k - 1))
      -  (1 << (k - 1)) | n & (i << (k - 1))
   -  Change the first 1 of n to 0.
      -  n & (n - 1)