# UEFI SSE
Proof of concept to use SSE instruction (XMM/YMM registers) in UEFI environmnet.

## Building
At first, clone this repo and submodules of it:
```bash
git clone --recurse-submodules  https://github.com/HirbodBehnam/UEFI-SSE.git
```
Now, simply navigate to `UEFI-SSE` folder and use `make` to build the project.

### Intel Syntax Error

You might run into a problem which roots in me writing and assembling in Intel syntax because fuck AT&T. If you run into this problem, remove the `-masm=intel`, compile the project (this will compile the `posix-uefi` library) and then add it again and make the project again. From now on, you can just leave the `-masm=intel` there.

## Running
To run this project, I used qemu, ovmf and uefi-run. After installing all of them, you can run the application with this command:
```bash
uefi-run -b /usr/share/qemu/OVMF.fd sse-enable.efi
```


