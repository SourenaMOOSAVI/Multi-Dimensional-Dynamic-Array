# Multi-Dimensional-Dynamic-Array
## Creating multidimensional dynamic arrays using two methods; `std::vector` and pointer.

This repository contains the solution to creating multi dimensional dynamic arrays using `std::vector` and dynamic arrays.
The idea is to define the size of the array at run time and not compile time.
For this the user defines the size of the array at the run time and each element of the array is another array whose size is defined by the user.<br>
Then array is filled with elements entered by the user and at the end the user is able to access the elements of the array by index.
It's interesting to notice that `std::vector` is very convenient for such purpose as opposed to dynamically created arrays using `new` operator since using `std::vector` one doesn't need to care about the memory management and the `std::vector` does it behind the scene.<br>
In this sense one should bear in mind whenever allocating dynamic memory using `new` operator at the end the dynamically allocated memory should be released using `delete` or `delete[]` depending on the situation, otherwise there will be problems such as meomry leak which is very common as a source of error.