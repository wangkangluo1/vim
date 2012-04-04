a=1
while ((a <= 5000000)); do
   echo $RANDOM >> test.db
   ((a++))
done
exit 0
