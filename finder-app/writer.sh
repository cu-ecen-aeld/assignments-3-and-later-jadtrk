#!/bin/sh

writefile=$1
writestr=$2

if [ $# -ne 2 ]
then
   echo "Invalid number of arguments!"
   exit 1
fi

install -D /dev/null $writefile

if [ ! -f $writefile ]
then
   echo "Failed to create $writefile file"
   exit 1
fi

echo $writestr > $writefile
