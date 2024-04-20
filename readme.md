# Header Files and Compiling Multiple Sources

I have multiple cpp files linked by the header files. This repository demonstrates how to compile multiple C++ files into one executable.

use the ```-I``` flag to include the header files. The header files are to be imported in the ```main.cpp``` file. The header files contain all the forward-declarated functions for the ```main()``` function to use. It's just the declaration, what about the function definitions? It's inside the ```src/*.cpp``` files!

Run the following command to compile.

```g++ -o main -Iinclude main.cpp src/add.cpp src/equivalentstring.cpp```

run the executable:

```./main```

it expected 2 int numbers from the input. The programme adds them, and prints the addition result. As the addition is an int, this is equal to a ```char```. The programme then prints the equivalent character.