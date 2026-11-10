/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003aef20; name: FUN_003aef20
 */


undefined8 FUN_003aef20(undefined8 param_1,char *param_2)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  size_t sVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_440 [1024];
  long local_38;
  
  local_38 = 0;
  __s = (char *)FUN_0045aa40(&local_38);
  if (__s != (char *)0x0) {
    do {
      sVar2 = strlen(param_2);
      sVar3 = strlen(__s);
      if (0x400 < sVar2 + sVar3 + 2) {
        uVar5 = 0x10e;
        uVar6 = 0x2d6;
        goto LAB_003af050;
      }
      iVar1 = FUN_003e7390(auStack_440,0x400,"%s/%s",param_2,__s);
      if ((0x3fe < iVar1 - 1U) || (iVar1 = FUN_003aedf0(param_1,auStack_440), iVar1 == 0))
      goto LAB_003af054;
      __s = (char *)FUN_0045aa40(&local_38,param_2);
    } while (__s != (char *)0x0);
  }
  piVar4 = __errno_location();
  if (*piVar4 == 0) {
    uVar5 = 1;
  }
  else {
    piVar4 = __errno_location();
    FUN_004806c0(2,10,*piVar4,"external/openssl/ssl/ssl_cert.c",0x2e5);
    FUN_00481380(3,"OPENSSL_DIR_read(&ctx, \'",param_2,&DAT_03bfafc6);
    uVar6 = 0x2e7;
    uVar5 = 2;
LAB_003af050:
    FUN_004806c0(0x14,0xd7,uVar5,"external/openssl/ssl/ssl_cert.c",uVar6);
LAB_003af054:
    uVar5 = 0;
  }
  if (local_38 != 0) {
    FUN_0045ab50(&local_38);
  }
  return uVar5;
}


