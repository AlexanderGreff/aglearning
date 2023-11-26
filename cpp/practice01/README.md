
agreff@rhel8x64:~/devel/agreff/aglearning/cpp/practice01/build 
 !98 : nm -C myprint | fgrep foo

 agreff@rhel8x64:~/devel/agreff/aglearning/cpp/practice01/build 
 !92 : ldd myprint 
        linux-vdso.so.1 (0x00007fff299e3000)
        libstdc++.so.6 => /lib64/libstdc++.so.6 (0x00007f954a35d000)
        libm.so.6 => /lib64/libm.so.6 (0x00007f9549fdb000)
        libgcc_s.so.1 => /lib64/libgcc_s.so.1 (0x00007f9549dc3000)
        libc.so.6 => /lib64/libc.so.6 (0x00007f95499fd000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f954a6f2000)
0 agreff@rhel8x64:~/devel/agreff/aglearning/cpp/practice01/build 
 !93 : nm /lib64/libc.so.6 | more
 