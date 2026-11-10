/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f4680; name: FUN_003f4680
 */


long FUN_003f4680(void)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = FUN_00444ed0("OPENSSL_CONF");
  if (lVar1 != 0) {
    lVar1 = FUN_0045abd0(lVar1,"external/openssl/crypto/conf/conf_mod.c",0x1e7);
    return lVar1;
  }
  __s = (char *)thunk_FUN_0049d910();
  sVar2 = strlen(__s);
  lVar4 = (long)((int)sVar2 + 0xd);
  lVar1 = FUN_00452c30(lVar4,"external/openssl/crypto/conf/conf_mod.c",0x1f0);
  if (lVar1 != 0) {
    uVar3 = thunk_FUN_0049d910();
    FUN_003e7390(lVar1,lVar4,"%s%s%s",uVar3,&DAT_03bdfb3b,"openssl.cnf");
  }
  return lVar1;
}


