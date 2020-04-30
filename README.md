Easiest possible matrix multiplication algorithm langauge benchmark
===

# Java

Java version:
```sh
pampas% java -version
java version "14.0.1" 2020-04-14
Java(TM) SE Runtime Environment (build 14.0.1+7)
Java HotSpot(TM) 64-Bit Server VM (build 14.0.1+7, mixed mode, sharing)
```

```sh
java java/MatrixMul.java > /dev/null
time: 1514.032521924 (seconds)
```

---

# C

GCC version:
```sh
gcc-10 (Ubuntu 10-20200416-0ubuntu1~18.04) 10.0.1 20200416 (experimental) [master revision 3c3f12e2a76:dcee354ce56:44b326839d864fc10c459916abcc97f35a9ac3de]
Copyright (C) 2020 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

```sh
gcc-10 -std=c99 -pedantic -O3 -ffast-math -mavx -mfma -mtune=native -march=native -o matrix c/matrix.c
./matrix > /dev/null
time: 60.000076294 (seconds)
```

---

# CPU info:

```sh
pampas% cat /proc/cpuinfo
processor	: 0
vendor_id	: GenuineIntel
cpu family	: 6
model		: 42
model name	: Intel(R) Core(TM) i3-2120 CPU @ 3.30GHz
stepping	: 7
microcode	: 0x23
cpu MHz		: 1596.339
cache size	: 3072 KB
physical id	: 0
siblings	: 4
core id		: 0
cpu cores	: 2
apicid		: 0
initial apicid	: 0
fpu		: yes
fpu_exception	: yes
cpuid level	: 13
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush dts acpi mmx fxsr sse sse2 ss ht tm pbe syscall nx rdtscp lm constant_tsc arch_perfmon pebs bts rep_good nopl xtopology nonstop_tsc cpuid aperfmperf pni pclmulqdq dtes64 monitor ds_cpl vmx est tm2 ssse3 cx16 xtpr pdcm pcid sse4_1 sse4_2 popcnt tsc_deadline_timer xsave avx lahf_lm epb pti tpr_shadow vnmi flexpriority ept vpid xsaveopt dtherm arat pln pts
bugs		: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass l1tf mds
bogomips	: 6584.87
clflush size	: 64
cache_alignment	: 64
address sizes	: 36 bits physical, 48 bits virtual
power management:
```

