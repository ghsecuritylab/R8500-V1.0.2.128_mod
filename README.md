===================
 Install toolchain
===================

1. You will need to use the  4.5.3 Linux 2.6.36 ARM Cross Compiler and Tools (arm-uclibc toolchain),
   which have also been posted to your account.

2. To install the toolcain
   (1) The toolchain MUST be installed under /projects/hnd/tools/linux/ directory. After mkdir the dir,
            tar xvfj hndtools-arm-linux-2.6.36-uclibc-4.5.3.tar.bz2
   (2) Add the path
            export PATH=/projects/hnd/tools/linux/hndtools-arm-linux-2.6.36-uclibc-4.5.3/bin:$PATH
            export PATH=/root/R8500-V1.0.2.128_1.0.97_src.tar/R8500-V1.0.2.128_1.0.97_src/tools:$PATH

===================
 Build code
===================

1. Put the file "R8500-V1.0.2.128_1.0.97_src.tar.zip" into a directory of your choice.
   Unzip and untar it with the following command:
        unzip R8500-V1.0.2.128_1.0.97_src.tar.zip
        tar xvf R8500-V1.0.2.128_1.0.97_src.tar

2. Run the following commands to build image
        cd R8500-V1.0.2.128_1.0.97_src/src/router/
        make PROFILE=R7800 FW_TYPE=WW ARCH=arm PLT=arm LINUX_VERSION=2_6_36
        make install PROFILE=R7800 FW_TYPE=WW ARCH=arm PLT=arm LINUX_VERSION=2_6_36
