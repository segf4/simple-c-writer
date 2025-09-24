# Simple C Writer

This is a **basic C program** I wrote to demonstrate writing raw bytes (0xFF) to a file.  
It is meant as a simple personal test and learning exercise, **not for production use**.

## What it does

• Creates a file called `filled_ff.bin`
• Writes blocks of 0xFF bytes (all bits set to 1) repeatedly to the file

## How to compile and run

```bash
gcc -o simple_writer simple_writer.c
./simple_writer
```

## Warning

• Be very careful not to overwrite important files or drives!              
• This program is intended for Linux environments only.                
• Use at your own risk.                  
