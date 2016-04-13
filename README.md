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
(for 64bit)
```
:/your/location/avr8-gnu-toolchain-linux_x86_64/bin
```
(for 32bit)
```
:/your/location/avr8-gnu-toolchain-linux_x86/bin
``` 

# install programming tools

copy avrisp.rules to /dev/udev/rules/
```
sudo cp avrisp.rules /etc/udev/rules.d
```
add current username to /etc/group
(optional, for serial debugging )
```
sudo nano /etc/group
dialout:x:20:yourusername
```

#log out and in again
Or Reboot

# testing

run in this folder
```
make
```
there after
```
make writeflash
```
for programming your device (should not give usb errors, if programmer is plugged in)

