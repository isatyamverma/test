
obj-m := test.o
all:
	make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- -C /home/admin1/raspberrypi/linux M=$(PWD) modules
clean:
	make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- -C /home/admin1/raspberrypi/linux M=$(PWD) clean

