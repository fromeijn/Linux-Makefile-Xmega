# Linux-Makefile-Xmega
this is a makefile and compiler setup for the atxmega series from atmel
 
# install avrdude
```
sudo apt-get install avrdude
```
# install toolchain

extract avr8-gnu-toolchain-3.5.0.1662-linux.any.x86_64.tar.gz

add following to ~/.profile
export PATH=$PATH:/path/to/avr8-gnu-toolchain-linux_x86_64/bin
```
echo "export PATH=$PATH:/path/to/avr8-gnu-toolchain-linux_x86_64/bin" >> ~/.profile
```
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

