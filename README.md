# Car Rental Booking System

I developed this project to simulate a real-world car reservation process. My main goal was to practice **Nested Structures** and **File Handling** in C.

## How it works
This program allows the user to create a customer record. What makes it special is the data structure:
* **Nested Structs:** I created a `Musteri` (Customer) structure that contains an `Arac` (Vehicle) structure inside it. This keeps the data organized logically.
* **Unions:** For the rental duration, I used a `union`. A rental can be either "Daily" (int) or "Long-term" (date string). Using a union saves memory because we don't need to store both at the same time.
* **Data Persistence:** The program saves every booking to a file named `kiralama_bilgileri.txt`. So, even if you close the console, the data remains saved.

## How to Run
1.  Compile the `main.c` file.
2.  Run the executable.
3.  Enter the Customer Name, ID, and Car Details when prompted.
4.  Choose the rental type (Daily or Long-term).
5.  Check the `kiralama_bilgileri.txt` file in the folder to see the saved record.

## 🛠 Technical Details
* **Language:** C
* **Key Concepts:** Structs, Unions, File I/O (`fopen`, `fprintf`), Pointers.
