# C
## PREPROCESSOR

### Learning Objectives
  * What are macros and how to use them
  * What are the most common predefined macros
  * How to include guard your header files

### Tasks
0. __0-object_like_macro.h:__ Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

1. __1-pi.h:__ Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

2. __2-main.c:__ Write a program that prints the name of the file it was compiled from, followed by a new line.
* You are allowed to use the standard library

   
3. __3-function_like_macro.h:__ Write a function-like macro ABS(x) that computes the absolute value of a number x.

4. __4-sum.h:__ Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

5. Compile this program, written by Jim Hague (UK), and feed ascii text into standard input.
  * Write a blog post to explain what this program does, how it works, and “de-obfuscate” it step by step for the reader
  * You blog post should have at least one picture, at the top of the blog post
  * Publish your blog post on Medium or LinkedIn
  * Share your blog post at least on LinkedIn
  * Once done, please add all urls below (blog post, LinkedIn post, etc.)
  * Please, remember that these blogs must be written in English to further your technical ability in a variety of settings.
    * It is your responsibility to request a review for your blog from a peer before the project’s deadline. 
    * If no peers have been reviewed, you should request a review from a TA or staff member.
  >   `
  >   \julien@ubuntu:~/c/ioccc$ cat hague.c 
  >   \#define DIT (
  >   \#define DAH )
  >   \#define __DAH   ++
  >   \#define DITDAH  *
  >   \#define DAHDIT  for
  >   \#define DIT_DAH malloc
  >   \#define DAH_DIT gets
  >   \#define _DAHDIT char
  >   _DAHDIT _DAH_[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:"
  >   ;main           DIT         DAH{_DAHDIT
  >   DITDAH          _DIT,DITDAH     DAH_,DITDAH DIT_,
  >   DITDAH          _DIT_,DITDAH        DIT_DAH DIT
  >   DAH,DITDAH      DAH_DIT DIT     DAH;DAHDIT
  >   DIT _DIT=DIT_DAH    DIT 81          DAH,DIT_=_DIT
  >   __DAH;_DIT==DAH_DIT DIT _DIT        DAH;__DIT
  >   DIT'\n'DAH DAH      DAHDIT DIT      DAH_=_DIT;DITDAH
  >   DAH_;__DIT      DIT         DITDAH
  >   _DIT_?_DAH DIT      DITDAH          DIT_ DAH:'?'DAH,__DIT
  >   DIT' 'DAH,DAH_ __DAH    DAH DAHDIT      DIT
  >   DITDAH          DIT_=2,_DIT_=_DAH_; DITDAH _DIT_&&DIT
  >   DITDAH _DIT_!=DIT   DITDAH DAH_>='a'?   DITDAH
  >   DAH_&223:DITDAH     DAH_ DAH DAH;       DIT
  >   DITDAH          DIT_ DAH __DAH,_DIT_    __DAH DAH
  >   DITDAH DIT_+=       DIT DITDAH _DIT_>='a'?  DITDAH _DIT_-'a':0
  >   DAH;}_DAH DIT DIT_  DAH{            __DIT DIT
  >   DIT_>3?_DAH     DIT          DIT_>>1 DAH:'\0'DAH;return
  >   DIT_&1?'-':'.';}__DIT DIT           DIT_ DAH _DAHDIT
  >   DIT_;{DIT void DAH write DIT            1,&DIT_,1 DAH;}
  >   julien@ubuntu:~/c/ioccc$ gcc -std=gnu89 hague.c -o h
  >   hague.c:10:2: warning: return type defaults to ‘int’ [-Wimplicit-int]
  >   ;main   DIT   DAH{_DAHDIT
  >    ^
  >   hague.c: In function ‘main’:
  >   hague.c:6:17: warning: conflicting types for built-in function ‘malloc’
  >   #define DIT_DAH malloc
  >                   ^
  >   hague.c:12:24: note: in expansion of macro ‘DIT_DAH’
  >   DITDAH   _DIT_,DITDAH  DIT_DAH DIT
  >                          ^
  >   hague.c:15:35: warning: implicit declaration of function ‘__DIT’ [-Wimplicit-function-declaration]
  >   __DAH;_DIT==DAH_DIT DIT _DIT  DAH;__DIT
  >                                       ^
  >   hague.c:18:7: warning: implicit declaration of function ‘_DAH’ [-Wimplicit-function-declaration]
  >   _DIT_?_DAH DIT  DITDAH   DIT_ DAH:'?'DAH,__DIT
  >          ^
  >   hague.c: At top level:
  >   hague.c:25:6: warning: return type defaults to ‘int’ [-Wimplicit-int]
  >   DAH;}_DAH DIT DIT_ DAH{   __DIT DIT
  >         ^
  >   hague.c: In function ‘_DAH’:
  >   hague.c:25:6: warning: type of ‘DIT_’ defaults to ‘int’ [-Wimplicit-int]
  >   hague.c: At top level:
  >   hague.c:27:17: warning: return type defaults to ‘int’ [-Wimplicit-int]
  >   DIT_&1?'-':'.';}__DIT DIT   DIT_ DAH _DAHDIT
  >                    ^
  >   hague.c: In function ‘__DIT’:
  >   hague.c:28:20: warning: implicit declaration of function ‘write’ [-Wimplicit-function-declaration]
  >   DIT_;{DIT void DAH write DIT   1,&DIT_,1 DAH;}
  >                      ^
  >   /tmp/ccG1Yh1A.o: In function `main':
  >   hague.c:(.text+0x14a): warning: the `gets' function is dangerous and should not be used.
  >   julien@ubuntu:~/c/ioccc$ ./h 
  >   Hello, Holberton
  >   .... . .-.. .-.. --- --..-- ? .... --- .-.. -... . .-. - --- -. 
  >   julien@ubuntu:~/c/ioccc$ 
  >   `

__________ END __________

