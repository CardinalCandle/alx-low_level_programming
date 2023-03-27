#!/bin/bash
dir="/alx-low_level_programming/0x05-pointers_arrays_strings"
file="commands.txt"
cd $dir
echo $(pwd) > $file
echo "" >> $file

for i in $(ls *.c *.h | sort -h)
do
echo "==========" >> $file
echo $i >> $file
cat $i >> $file
echo "" >> $file
done
cd -
