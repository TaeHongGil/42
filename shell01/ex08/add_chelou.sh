A=$(echo $FT_NBR1|tr "'"'\\"?!' '01234')
B=$(echo $FT_NBR2|tr 'mrdoc' '01234')
C=$(echo $A+$B) 
C=$(echo 'ibase=5;obase=23;'$C|bc)
C=$(echo $C |tr '0123456789ABC' 'gtaio luSnemf')
echo $C
