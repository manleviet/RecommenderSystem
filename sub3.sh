#!/bin/bash
fileArray=($(cat out3.txt))
IFS=$OLDIFS
tLen=${#fileArray[@]}
for (( i=0; i<2; i++ ));
do
sed "0,/xxx/s/xxx/${fileArray[$i]}/" -i launch3.py
done



python launch3.py > QPrinter.txt
./a

for (( i=0; i<2; i++ ));
do
sed "s/${fileArray[$i]}/xxx/" -i launch3.py
done

