#!/usr/bin/env bash


#====== UPF0 Steps ======
#By: Ashley Barb Caldelas
#CSCS 1739
#02-27-2022

# Too obvious or repeated commands will not have descriptive comments.

mkdir upf0
# Made upf0 directory.
mv numbers.tgz upf0/
# Assuming numbers.tgz is accessible, moving numbers.tgz to upf0 directory.
cd upf0/
mkdir ogs
# Making ogs directory to store backup files.
cp numbers.tgz ogs/
# Creating a backup for numbers.tgz.
gunzip numbers.tgz
# Decompressing file, obtained numbers.tar.
tar -xf numbers.tar
# Extracting file, obtained numbers directory.
mv numbers.tar ogs/
# Storing backup.
cd numbers
	make
	# Compiling all numbers .c files.
	make install
	# Moving to local bin directory.
	export UPF0_MODE=true
	# Setting mode to stdin only.
	echo -e "\nTesting... ";one;two;three;echo -e "\n";
cd ..
wget https://lab46.g7n.org/~wedge/projects/pipemath/LATEST
# Downloading LATEST text file.
ppmath=$( cat LATEST )
# Storing latest pipemath build to variable ppmath.
wget https://lab46.g7n.org/~wedge/projects/pipemath/$ppmath
# Downloading latest pipemath build.
mv LATEST ogs/
# Storing LATEST file.
cp $ppmath ogs/
# Storing pipemath backup.
gunzip $ppmath
# Decompresing gz file.
mathtar=$( echo $ppmath | cut -c 1-24 )
# Reducing the value stored in ppmath variable to match .tar file name.
tar -xf $mathtar
# Extracting pipemath.tar.
mv $mathtar ogs/
# Storing .gz file.
cd pipemath
	# Pipemath suite programs need fixing before compiling.
	sed -i 's+input!\\n+&"+' src/abs.c
	# Inserting a missing ".
	sed -i '62s+.\{31\}+&;+' src/divideby.c
	# Inserting a missing ;.
	sed -i '23s+.\{0\}+&#+' src/negate.c
	# Inserting a missing #.
	sed -i '58s+{+}+' src/negify.c
	# Replacing { with }.
	sed -i '61s+argument!\\n+&"+' src/plus.c
	# Inserting a missing ".
	sed -i '67s+argument!\\n")+&;+' src/plus.c
	# Inserting a missing ;.
	sed -i '42s+fprint+&f+' src/sqrt.c
	# Inserting a missing f.
	make
	# All .c files are fixed and should compile without errors.
	make install
	# Moving to local bin.
	echo -e "\nTesting... ";echo "one | plus `two` | plus `three`"
	one | plus `two` | plus `three`
	echo -e "\n"
cd ..
# Creating task$n.cli files according to TASK requirements.
n=0
echo "nine | plus `five` | minus `seven`" > task$n.cli
echo "nine | minus `three` | minus `three`" > task$((++n)).cli
echo "two | multby `two` | multby `five` | minus `three`" > task$((++n)).cli
echo "five | multby `five` | minus `two` | minus `one`" > task$((++n)).cli
echo "eight | plus `one` | multby `eight` | divideby `four` | divideby `three`" > task$((++n)).cli
echo "eight | minus `three` | multby `nine` | plus `four` | sqrt" > task$((++n)).cli
echo "zero | minus `three` | multby `seven` | plus `nine` | minus `six` | divideby `nine`" > task$((++n)).cli
echo "seven | multby `nine` | plus `eight` | plus `nine` | divideby `eight` | modulus `nine` | negate" > task$((++n)).cli
mkdir tasks
# Making tasks directory to store all task$n.cli files
mv task*.cli tasks/
cd tasks
c=0
# Changing permission and executing all task$c.cli files.
while [ "${c}" -le "${n}" ]; do
	chmod 711 task$c.cli;
	echo -n "Task $c result is: ";
	./task$((c++)).cli;
done

echo -e "\nend of line...\n"

exit 0
