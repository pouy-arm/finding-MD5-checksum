### Finding the MD5 Checksum of a File

This code has been written in **c++** for finding the MD5 checksum of an existing file using the **OpenSSL** library.

This code reads a file in binary and calculates its MD5 using the OpenSSL library. Our result is returned in a 32-character hexadecimal string. This is used mostly to verify the integrity.

---

# Installation Requirements

Before running the code, you need to make sure that OpenSSL is installed on your operating system.
- I am using **linux Manjaro**, so I use the command `sudo pacman -S openssl` for installing and `openssl version` for verifying the installation of OpenSSL in Linux Manjaro.
- Alternatively, if you are using **Ubuntu Linux**, you can use `sudo apt install openssl` and `openssl version` for installing and then checking the installation respectively.