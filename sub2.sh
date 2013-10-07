#!/bin/bash
fileArray=($(cat out2.txt))
IFS=$OLDIFS
tLen=${#fileArray[@]}
for (( i=0; i<3; i++ ));
do
sed "0,/xxx/s/xxx/${fileArray[$i]}/" -i launch2.py
done



python launch2.py > QPrinter.txt
./a

for (( i=0; i<3; i++ ));
do
sed "s/${fileArray[$i]}/xxx/" -i launch2.py
done
