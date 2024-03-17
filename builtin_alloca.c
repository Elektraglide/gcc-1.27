
char allocastore[32768];
int allocaindex = 0;

extern char *__builtin_alloca();

char *__builtin_alloca(LEN)
int LEN;
{
	allocaindex += LEN;
	return allocastore + allocaindex - LEN;
}
