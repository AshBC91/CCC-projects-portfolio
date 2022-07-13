
 #====== PBX2 Steps ======
 #By: Ashley Barb Caldelas
 #CSCS 1739
 #02-11-2022

 # Most commands were are executed directly @lab46, unless otherwise specified.
 # Too obvious or repeated commands will not have descriptive comments.

 # 00. Creating ogs directory, to store backup of original files.
 mkdir ogs
 # 01. unzip README, mushroom
 unzip -Pnull -n pbx2.is.best.pbx
 # 02. Store password to variable pass.
 pass=$( grep '^PASSWORD:' README | cut -c 10-)
 # 03. Using $pass to extract files.
 unzip -P$pass -n pbx2.is.best.pbx
 # 04. Mushroom extract 0o0 to mushroom.out.
 bunzip2 mushroom
 # 05. Compiling convert.c.
 gcc -Wall --std=gnu99 convert.c -o hextochar.$(uname -m)
 # 06. Converting badger.
 cat badger | ./hextochar.x86_64 > badger.out
 # 07. Moving badger to ogs directory.
 mv badger ogs
 # 08. Decoding encoded code with uudecode.
 uudecode enigmatic.file
 # 09.
 mv enigmatic.file ogs
 # 10. changing permissions to stage2.
 chmod 744 stage2
 # 11. Converting stage2.
 cat stage2 | ./hextochar.x86_64 > README2
 # 12. Storing password to variable pass2.
 pass2=$( grep 'PASSWORD:' README2 | cut -c 10-)
 # 13. Extracting last files with pass2.
 unzip -P$pass2 -n pbx2.is.best.pbx
 # 14.
 mv {mushroom,pbx2.is.best.pbx} ogs
 # 15. Renaming snake.
 mv snake snake.xz
 # 16. Extracting snake.xz.
 unxz snake.xz
 # 17. Decoding snake.
 uudecode -o snake.decoded snake
 # 18.
 mv snake ogs
 # 19. Renaming itsa.
 mv itsa itsa.gz
 # 20. Extracting itsa.gz.
 gunzip itsa.gz
 # 21. Reversing snake.
 rev snake.decoded > snake.out
 # 22. 
 mv snake.decoded ogs
 # 23. Decoding itsa.
 base64 -d itsa > itsa.decoded
 # 24. Reversing itsa.decoded.
 rev itsa.decoded > itsa.out
 # 25. 
 mv {itsa,itsa.decoded} ogs
 # 26. Replacing control characters.
 cat snake.out | tr  " " | tr  "\n" > shoes.out
 # 27. 
 mv snake.out ogs
 # 28. 
 cat badger.out | tr  " " > head.out
 # 29.
 mv badger.out ogs
 # 30.
 cat mushroom.out | tr  "\n" > middle.out
 # 31.
 mv {mushroom.out,*.c,RE*} ogs
 # 32. Assembling puzzle.
 cat *.out > pbx2.results
 echo "end of line..."
 
 # hash match
 # c95b6cdb45b70380818ce75c84e9ac754a798074f295a124e99871ec3db830ea99561b014440a889d2503ce9e709d3ec
