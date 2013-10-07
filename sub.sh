#!/bin/bash
fileArray=($(cat out.txt))
IFS=$OLDIFS
tLen=${#fileArray[@]}
for (( i=0; i<2; i++ ));
do
sed "0,/xxx/s/xxx/${fileArray[$i]}/" -i launch.py
done



python launch.py > QPrinter.txt
./a

for (( i=0; i<2; i++ ));
do
sed "s/${fileArray[$i]}/xxx/" -i launch.py
done
