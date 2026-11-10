/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045f4e0; name: FUN_0045f4e0
 */


long FUN_0045f4e0(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4)

{
  char *__s1;
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_450 [1024];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  
  local_38 = (char *)0x0;
  local_40 = 0;
  local_48 = 0;
  iVar1 = FUN_0045d990(&local_48,&local_50,&local_38,"ANY PRIVATE KEY",param_1,param_3,param_4);
  __s1 = local_38;
  if (iVar1 == 0) {
    return 0;
  }
  local_40 = local_48;
  iVar1 = strcmp(local_38,"PRIVATE KEY");
  if (iVar1 == 0) {
    lVar4 = FUN_003e04d0(0,&local_40,local_50);
    if (lVar4 != 0) {
LAB_0045f640:
      lVar3 = FUN_0043be00(lVar4);
      if (param_2 != (long *)0x0) {
        FUN_0043e1f0(*param_2);
        *param_2 = lVar3;
      }
      FUN_003e04e0(lVar4);
joined_r0x0045f5b0:
      if (lVar3 != 0) goto LAB_0045f694;
    }
LAB_0045f674:
    FUN_004806c0(9,0x7b,0xd,"external/openssl/crypto/pem/pem_pkey.c",0x58);
  }
  else {
    iVar1 = strcmp(__s1,"ENCRYPTED PRIVATE KEY");
    if (iVar1 != 0) {
      iVar1 = FUN_0045ef10(__s1,"PRIVATE KEY");
      if (((0 < iVar1) &&
          (puVar2 = (undefined4 *)FUN_003dea70(0,local_38,iVar1), puVar2 != (undefined4 *)0x0)) &&
         (*(long *)(puVar2 + 0x2e) != 0)) {
        lVar3 = FUN_003e0220(*puVar2,param_2,&local_40,local_50);
        goto joined_r0x0045f5b0;
      }
      goto LAB_0045f674;
    }
    lVar3 = FUN_0045f800(0,&local_40,local_50);
    if (lVar3 == 0) goto LAB_0045f674;
    if (param_3 == (code *)0x0) {
      iVar1 = FUN_0045d3c0(auStack_450,0x400,0,param_4);
    }
    else {
      iVar1 = (*param_3)();
    }
    if (-1 < iVar1) {
      lVar4 = FUN_004600b0(lVar3,auStack_450,iVar1);
      FUN_0045f820(lVar3);
      FUN_00453300(auStack_450,iVar1);
      if (lVar4 != 0) goto LAB_0045f640;
      goto LAB_0045f674;
    }
    FUN_004806c0(9,0x7b,0x68,"external/openssl/crypto/pem/pem_pkey.c",0x40);
    FUN_0045f820(lVar3);
  }
  lVar3 = 0;
LAB_0045f694:
  FUN_00453350(local_38,"external/openssl/crypto/pem/pem_pkey.c",0x5a);
  FUN_00453360(local_48,local_50,"external/openssl/crypto/pem/pem_pkey.c",0x5b);
  return lVar3;
}


