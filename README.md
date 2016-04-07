# Linux-Makefile-Xmega
this is a makefile and compiler setup for the atxmega series from atmel
 
# install avrdude
```
sudo apt-get install avrdude
```
# install toolchain
(this is for 64bit)
extract avr8-gnu-toolchain-3.5.1.1671-linux.any.x86_64.tar.gz
or
(this is for 32bit)
avr8-gnu-toolchain-3.5.1.1671-linux.any.x86.tar.gz

add files to PATH
edit /etc/environment
```
sudo nano /etc/environment
```
add to PATH string (between double quotes):
```
:/your/location/avr8-gnu-toolchain-linux_x86_64/bin
```
log out and in again 

# install programming tools

copy avrisp.rules to /dev/udev/rules/
```
cp avrisp.rules /dev/udev/rules/
```
add current username to /etc/group
```
dialout\:x:20:[yourusername]
```
# testing

run in this folder
```
make
```
there after
```
make writeflash
```
for programming your device

