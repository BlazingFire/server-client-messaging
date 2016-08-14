struct msg_in {
char arg1[100];
};
struct msg_out {
char res1[100];
};
program MSG_PROG {
version MSG_VERS {
msg_out MSGPROC(msg_in) = 1; /* procedure number = 1 */
} = 1; /* version number = 1 */
} = 0x31230000; /* program number = 0x31230000 */
