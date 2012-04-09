a=1
while ((a <= 3000000)); do
   echo $RANDOM >> test.db
   ((a++))
done
exit 0
