# gcc -o test 01.fork_example.c
# gcc -o test 02.fork_generate3processess.c
# gcc -o test 03.several_fork.c
# gcc -o test 04.fork_wait.c
# gcc -o test 05.fork_visualization.c
# gcc -o test 06a.process_id.c
gcc -o test 06b.process_id_parent_child.c
# gcc -o test 07.multiple_forks.c
# gcc -o test 08a.comms_pipe.c
# gcc -o test 08b.comms_pipe_errors.c
# gcc -o test 100.practice_programs.c

./test
cd ..
./gitupload.sh
cd -
