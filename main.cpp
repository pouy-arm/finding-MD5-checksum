#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <openssl/md5.h>
#include <vector>

using namespace std;

string md5(string & path) {
  ifstream file(path , ios::binary);
  if (!file) {
    cerr << "File not found" << endl;
  }

  MD5_CTX MD5context;
  MD5_Init(&MD5context);


  vector<char> buffer(8192);
  while (file) {
    file.read(buffer.data(), buffer.size());
    streamsize bytesRead = file.gcount();
    if (bytesRead > 0) {
      MD5_Update(&MD5context, buffer.data(), bytesRead);
    }
  }

  unsigned char digest[MD5_DIGEST_LENGTH];

  MD5_Final(digest, &MD5context);

  stringstream ss;

  for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
    ss << hex << std::setw(2) << std::setfill('0') << (int)digest[i];
  }

  return ss.str();
}

int main() {
  string filePath = "/home/pouyan/code/c++/chess/CMakeLists.txt";
  string md5Checksum = md5(filePath);
  cout << "MD5 Checksum: " << md5Checksum << endl;
  return 0;
}
