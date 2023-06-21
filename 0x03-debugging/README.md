# 0x03. C - Debugging

<p align="center">
  <img src="https://i.postimg.cc/NFQbkDfM/image.png"
</p>

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                      | Prototype                                                   |
| ------------------------- | ----------------------------------------------------------- |
| `0-main.c`                | `void positive_or_negative(int i);`                         |
| `2-largest_number.c`      | `int largest_number(int a, int b, int c);`                  |
| `3-print_remaining_days.c`| `int convert_day(int month, int day);`                      |
| `3-print_remaining_days.c`| `void print_remaining_days(int month, int day, int year);`  |

## Notes :bulb:
What I learned from this project:

* What is debugging
* What are some methods of debugging manually
* How to read the error messages

---

- **[0. Multiple mains](./0-main.c)**
	* This program test that the function positive_or_negative() gives the correct output when given a case of 0.


- **[1. Like, comment, subscribe](./1-main.c)**
	* This program have comment out the part of the code that is causing the output to go into an infinite loop.


- **[2. 0 > 972?](./2-largest_number.c)**
	* This program prints the largest of three integers.


- **[3. Leap year](./3-print_remaining_days.c)**
	* This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
