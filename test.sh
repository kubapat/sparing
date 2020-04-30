for i in {1..100000}
do
	echo test$i
	./gen >myin
	./wzo <myin > A
	./brut <myin > B
	diff -b A B || break
	echo ok
done
