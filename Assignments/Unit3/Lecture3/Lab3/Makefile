#BY:Eng.Muhammad Mustafa
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -mthumb -gdwarf-2
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
Project_name=learn_in_depth_cortex_m3

all: $(Project_name).bin


%.o: %.c
	$(CC)gcc.exe -c -g $(INCS) $(CFLAGS) $< -o $@
	

$(Project_name).elf: $(OBJ) 
	$(CC)ld -T LinkerScript.ld -Map=output.map $(LIBS) $< -o $@


$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@
	
	
clean_all:
	rm *.o *.elf *.bin
	
	
clean:
	rm *.elf *.bin



