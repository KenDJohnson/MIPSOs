AS=mipsel-unknown-elf-as -mips32
CC=mipsel-unknown-elf-gcc
LD=mipsel-unknown-elf-ld
OBJCOPY=mipsel-unknown-elf-objcopy
CFLAGS=-Os

STAGE1_OBJS=start.o

bootloader.bin: bootloader.elf

bootloader.elf: $(STAGE1_OBJS)
	$(LD) -T bootloader.lds -o $@ $+

%.bin: %.elf
	$(OBJCOPY) -O binary $< $@

%.o: %.[Sc]
	$(CC) $(CFLAGS) -c -o $@ $<

clean: 
	rm -f *.o *.elf *.bin
