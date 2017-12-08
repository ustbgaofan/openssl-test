# openssl-test
openssl学习过程代码

openssl版本:OpenSSL 1.1.1-dev  xx XXX xxxx

	stack.c 堆栈结构测试学习
	lhash.c	哈希结构测试学习
	mem_alloc.c  openssl内存分配函数测试
	dso.c	测试openssl的动态库加载功能，DSO,测试用例有问题
	membio.c openssl的抽象IO测试，内存IO。
	fileBio.c openssl file BIO
	sock_bio_ser.c	socket BIO server
	sock_bio_cli.c	socket BIO client
	mdbio.c	 md、NULL BIO 测试学习
	cipher_bio.c 加/解密 BIO
	ssl_bio.c  ssl BIO
	fileBio2.c 文件BIO
	conf1.c	 openssl配置文件加载测试
	conf_test.txt 配置文件，测试文件
	conf_session.c  给定配置段信息，从堆栈获取所有值
	rand.c 	随机数,额...
	txtdb.c  文本数据库
	bn文件夹   openssl的大数
	base64_encode.c  base64编解码
	base64_encode2.c base64编解码
	err.c   错误处理
	digest.c 摘要接口测试学习
	hmac.c	 HMAC
	comp.c   解压缩算法，待测
	gen_key.c 密钥生成
	encrypt_dencrypt.c
	rsa.key
	sign_verify.c   rsa签名
	dsaGenKey.c	DSA密钥生成
	dsa_sign_verify.c  DSA签名验签
	a2d_asn1_object.c  计算DER编码
	a2i_asn1_integer.c ASN1_INTEGER
	a2i_asn1_string.c  将ascii转换为ASN1_STRING
	openssl_asc2uni.c  ASCII 2 UNICODE
