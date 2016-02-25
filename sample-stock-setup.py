from distutils.core import setup, Extension
setup(name="stock", version="1.0",
      ext_modules=[Extension("stock", ["Sample_Stock.cpp", "Sample_Stock_Py.cpp"])])
