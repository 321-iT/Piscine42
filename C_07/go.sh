echo "Norminette: \n\n" && norminette -RCheckForbiddenSourceHeader ex*/* && echo '\nExecution :\n' && gcc -Wall -Wextra -Werror -o a.out main.c ex*/* && ./a.out $1
