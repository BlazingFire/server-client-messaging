#include <rpc/rpc.h>
#include "msg.h"
int main(int argc, char **argv)
{
CLIENT *cl;
msg_in in;
msg_out *outp;
if (argc != 2){
	printf("usage: client <hostname> <integer-value>");
	exit(0);
}

cl = clnt_create(argv[1], MSG_PROG, MSG_VERS, "tcp");
//in.arg1 = atol(argv[2]);
do{
if ( (outp = msgproc_1(&in, cl)) == NULL){
	printf("%s", clnt_sperror(cl, argv[1]));
	exit(0);
}
printf("text: %s\n", outp->res1);
}while(strcmp(outp->res1,"exit") != 0);

exit(0);
}
