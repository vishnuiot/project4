
# gcc -o test 01a.createthread.c
# gcc -o test 01b.createthread_error_copy.c
# gcc -o test 02a.threads_vsprocessess.c
# gcc -o test 02b.threads_processess.c
# gcc -o test 02c.incrementvalue_thread.c
# gcc -o test 02d.incrementvalue_process.c
# gcc -o test 03.threads_race_conditions.c
# gcc -o test 04a.threads_mutex.c
gcc -o test 04b.threads_mutex_multiplethreads.c
# gcc -o test 100.practice.c

./test
cd ..
./gitupload.sh
cd -

