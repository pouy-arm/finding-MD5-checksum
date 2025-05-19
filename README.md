### Finding the MD5 Checksum of a File

This code has been written in **c++** for finding the MD5 checksum of an existing file using the **OpenSSL** library.

This code reads a file in binary and calculates its MD5 using the OpenSSL library. Our result is returned in a 32-character hexadecimal string. This is used mostly to verify the integrity.

---

# Installation Requirements

Before running the code, you need to make sure that OpenSSL is installed on your operating system.
- I am using **linux Manjaro**, so I use the command `sudo pacman -S openssl` for installing and `openssl version` for verifying the installation of OpenSSL in Linux Manjaro.
- Alternatively, if you are using **Ubuntu Linux**, you can use `sudo apt install openssl` and `openssl version` for installing and then checking the installation respectively.

---

# Run the code

To run the code, first you need to create a folder named `build`. Then, you need to get into the folder and run the `cmake ..` command for creating build files. Afterwards, you should run the `make` command to make your code executable. And eventually, for running the code, you need to use the command of `./MD5-checksum`.

---

In the code, in its main class, you can write the path of your desired file in the `filepath` string that has been declared. Then, the md5 function will calculate the 32-bit number of it and then prints it for you.
As an example, you can see the `/home/pouyan/code/c++/chess/CMakeLists.txt` which is my file path and when I run the code with this file path, i will get `b60bb92326ea464b239f9f42036b4145` as the MD5 checksum of my file.