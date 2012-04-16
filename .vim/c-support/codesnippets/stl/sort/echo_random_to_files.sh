a=1
while ((a <= 1000000)); do
   echo $RANDOM >> test.db
   ((a++))
done
exit 0
