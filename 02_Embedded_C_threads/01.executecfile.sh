
# gcc -o test 01a.createthread.c
gcc -o test 01b.createthread_error_copy.c
# gcc -o test 02a.threads_vsprocessess.c
# gcc -o test 02b.threads_processess.c
# gcc -o test 03.threads_race_conditions.c
# gcc -o test 100.practice.c

./test
cd ..
./gitupload.sh
cd -

