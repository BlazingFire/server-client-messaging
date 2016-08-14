#include "rpc/rpc.h"
#include "msg.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"

msg_out *msgproc_1_svc(msg_in *inp, struct svc_req *rqstp)
{
static msg_out out;
//printf("reply: %s\n", inp->arg1 );
//out.res1 = "as";
//strcpy(out.res1, "as");
scanf("%s",out.res1); // scanf waits for input and that is why do while works without printing infinite messages coz the (outp = msgproc_1(&in, cl)) == NULL) part does not return a value unless scanf works for the next iteration 
//out.res1 = inp->arg1 * inp->arg1;
return(&out);
}
