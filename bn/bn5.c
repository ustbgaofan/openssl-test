#include <openssl/bn.h>
#include <openssl/crypto.h>
int main()
{
	BIGNUM *ret1=NULL;
	char	*p=NULL;
	int	len=0;
	
	ret1=BN_bin2bn("242424ab",8, NULL);
	p=BN_bn2hex(ret1);
	printf("%s\n",p); //323432346162

	BN_free(ret1);
	OPENSSL_free(p);
	getchar();
	return 0;
}
