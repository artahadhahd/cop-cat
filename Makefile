all:
  g++ main.cpp -o cop
  
install:
  cp ./cop /usr/bin
  chmod 755 /usr/bin/cop
