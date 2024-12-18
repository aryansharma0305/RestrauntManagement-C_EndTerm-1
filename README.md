Restaurant Table Reservation & Order Management System
======================================================

**\~ By Team _C-Section_**

The Team
--------

|          Name                 | Roll Number |       Role       |
|-------------------------------|-------------|------------------|
| Anish Teja Bramhajosyula      | IMT2024029  | Linked List & UI |
| Aryan Sharma                  | BT2024212   | UI & Linked List |
| Ryan Sajan Varughese          | IMT2024036  | Customer         |
| Gourav Nayak                  | BT2024213   | Admin            |
| Thrissha Arcot                | BT2024024   | File Handler     |
| Polareddy Harshavardhan Reddy | BT20240264  | Data Handler     |

Directions for use
------------------
1. Linux (Debian-based)
   * Install **`gcc`** by typing `sudo apt install build-essential` in terminal.
   * Install **`make`** by typing `sudo apt install make` in terminal.
   * Install **`libqrencode`** by typing `sudo apt install libqrencode-dev` in terminal.
   * Using the `makefile` given in the **zip**, type `make` into the terminal.
  
2. Windows
    * Download **MinGW** from the internet.
    * Add **bin** to path by editing the system environment variables.
    * Unzip the project folder, and open **PowerShell** or **Command Prompt** in the correct directory.
    * Run `gcc -c mainForWindows.c ui.c file_handler.c data_handler.c customer.c admin.c linked_list.c` to generate the object files.
    * Run `gcc -o app mainForWindows.o ui.o file_handler.o data_handler.o customer.o admin.o linked_list.o` to generate the executable.
    * To clean up the object files, run `Remove-Item *.o` in **PowerShell**, or `del *.o` in **Command Prompt**.
    * Run `./app.exe` to run the project.

GitHub Repository
-----------------

To access the GitHub Repository for this project, click [here](https://www.tinyurl.com/cendsem)
