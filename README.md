# cop-cat
My implementation of the cat command in Linux. It's ought to be easy on the eye.

# Build and install
```
$ git clone https://github.com/artahadhahd/cop-cat # Clone the repository
$ cd cop-cat/
$ make && sudo make install # compile
[sudo] password for user:
g++ main.cpp -o cop
mv ./cop /usr/bin
chmod 755 /usr/bin/cop
$ cop -h # You can now check whether it's installed.
Usage: cop <file>
Prints contents of a file
Usage:

  -h: display this help message
```
You can customize the Makefile yourself!

### Thank you for using cop-cat!
