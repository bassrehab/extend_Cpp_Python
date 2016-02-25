# Entending C++ Code to Python

Sample Stock Class in C++ that is extended to Python using the Python Extension API.


### Running the Code

From the command line..

```sh
$ python sample-stock-setup.py build_ext -i running build_ext building 'stock' extension cc -fno-strict-aliasing -fno-common -dynamic -arch x86_64 -arch i386 -g -Os -pipe -fno-common -fno-strict-aliasing -fwrapv -DENABLE_DTRACE -DMACOSX -DNDEBUG -Wall -Wstrict-prototypes -Wshorten-64-to-32 -DNDEBUG -g -fwrapv -Os -Wall -Wstrict-prototypes -DENABLE_DTRACE -arch x86_64 -arch i386 -pipe -I/System/Library/Frameworks/Python.framework/ Versions/2.7/include/python2.7 -c Sample_Stock.cpp -o build/temp.macosx-10.9-intel-2.7/Sample_Stock.o cc -fno-strict-aliasing -fno-common -dynamic -arch x86_64 -arch i386 -g -Os -pipe -fno-common -fno-strict-aliasing -fwrapv -DENABLE_DTRACE -DMACOSX -DNDEBUG -Wall -Wstrict-prototypes -Wshorten-64-to-32 -DNDEBUG -g -fwrapv -Os -Wall -Wstrict-prototypes -DENABLE_DTRACE -arch x86_64 -arch i386 -pipe -I/System/Library/Frameworks/Python.framework/ Versions/2.7/include/python2.7 -c Sample_Stock_Py.cpp -o build/temp.macosx-10.9-intel-2.7/Sample_Stock_Py.o c++ -bundle -undefined dynamic_lookup -arch x86_64 -arch i386 -Wl,-F. build/temp.macosx- 10.9-intel-2.7/Stock.o build/temp.macosx-10.9-intel-2.7/Sample_Stock_Py.o -o /Users/subhadipmitra/code/stock.so
```

After Compiling module,

```sh
$ python
Python 2.7.5 (default, Mar 9 2014, 22:15:05)
[GCC 4.2.1 Compatible Apple LLVM 5.0 (clang-500.0.68)] on darwin
Type "help", "copyright", "credits" or "license" for more information.
>>> import stock
>>> a = stock.new('IBM',1,1)
ticker: IBM, price: 1.000000, dividend: 1.000000
>>> stock.setPrice(a, 105)
>>> stock.price(a)
105.0
>>> stock.setDividend(a, 2.2)
>>> stock.dividend(a)
2.2
>>> stock.dividendYield(a)
0.020952380952380955
```

