/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045d4a0; name: FUN_0045d4a0
 */


undefined8
FUN_0045d4a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *__s1;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined1 auStack_78 [24];
  
  __s1 = (char *)0x0;
  local_88 = 0;
  local_80 = (char *)0x0;
  local_98 = 0;
  local_90 = 0;
  do {
    while( true ) {
      while( true ) {
        if ((param_8 & 1) == 0) {
          FUN_00452f80(__s1,"external/openssl/crypto/pem/pem_lib.c",0xdf);
          FUN_00452f80(local_88,"external/openssl/crypto/pem/pem_lib.c",0xdf);
          FUN_00452f80(local_90,"external/openssl/crypto/pem/pem_lib.c",0xdf);
        }
        else {
          FUN_00453360(__s1,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
          FUN_00453360(local_88,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
          FUN_00453360(local_90,local_98,"external/openssl/crypto/pem/pem_lib.c",0xdd);
        }
        iVar3 = FUN_0045e630(param_5,&local_80,&local_88,&local_90,&local_98,param_8);
        __s1 = local_80;
        if (iVar3 == 0) {
          uVar8 = FUN_00480c60();
          if ((uVar8 & 0xfff) == 0x6c) {
            FUN_00481380(2,"Expecting: ",param_4);
            return 0;
          }
          return 0;
        }
        iVar3 = strcmp(local_80,param_4);
        if (iVar3 == 0) goto LAB_0045d800;
        iVar3 = strcmp(param_4,"ANY PRIVATE KEY");
        if (iVar3 != 0) break;
        iVar3 = strcmp(__s1,"ENCRYPTED PRIVATE KEY");
        if ((iVar3 == 0) || (iVar3 = strcmp(__s1,"PRIVATE KEY"), iVar3 == 0)) goto LAB_0045d800;
        sVar6 = strlen(__s1);
        iVar3 = (int)sVar6;
        if (((0xc < iVar3) &&
            (((iVar4 = strcmp(__s1 + (long)iVar3 + -0xb,"PRIVATE KEY"), iVar4 == 0 &&
              (__s1[(long)iVar3 + -0xc] == ' ')) &&
             (0 < (int)(__s1 + (long)iVar3 + -0xc) - (int)__s1)))) &&
           ((lVar7 = FUN_003dea70(0,__s1), lVar7 != 0 && (*(long *)(lVar7 + 0xb8) != 0))))
        goto LAB_0045d800;
      }
      iVar3 = strcmp(param_4,"PARAMETERS");
      if (iVar3 == 0) break;
      iVar3 = strcmp(__s1,"X9.42 DH PARAMETERS");
      if (((((((iVar3 == 0) && (iVar3 = strcmp(param_4,"DH PARAMETERS"), iVar3 == 0)) ||
             ((iVar3 = strcmp(__s1,"X509 CERTIFICATE"), iVar3 == 0 &&
              (iVar4 = strcmp(param_4,"CERTIFICATE"), iVar4 == 0)))) ||
            (((iVar4 = strcmp(__s1,"NEW CERTIFICATE REQUEST"), iVar4 == 0 &&
              (iVar4 = strcmp(param_4,"CERTIFICATE REQUEST"), iVar4 == 0)) ||
             ((iVar4 = strcmp(__s1,"CERTIFICATE"), iVar4 == 0 &&
              (iVar5 = strcmp(param_4,"TRUSTED CERTIFICATE"), iVar5 == 0)))))) ||
           ((((iVar3 == 0 && (iVar3 = strcmp(param_4,"TRUSTED CERTIFICATE"), iVar3 == 0)) ||
             ((iVar4 == 0 && (iVar3 = strcmp(param_4,"PKCS7"), iVar3 == 0)))) ||
            ((iVar3 = strcmp(__s1,"PKCS #7 SIGNED DATA"), iVar3 == 0 &&
             (iVar3 = strcmp(param_4,"PKCS7"), iVar3 == 0)))))) ||
          ((iVar4 == 0 && (iVar3 = strcmp(param_4,"CMS"), iVar3 == 0)))) ||
         ((iVar3 = strcmp(__s1,"PKCS7"), iVar3 == 0 && (iVar3 = strcmp(param_4,"CMS"), iVar3 == 0)))
         ) goto LAB_0045d800;
    }
    sVar6 = strlen(__s1);
    iVar3 = (int)sVar6;
  } while ((iVar3 < 0xc) ||
          ((((iVar4 = strcmp(__s1 + (long)iVar3 + -10,"PARAMETERS"), iVar4 != 0 ||
             (__s1[(long)iVar3 + -0xb] != ' ')) ||
            ((int)(__s1 + (long)iVar3 + -0xb) - (int)__s1 < 1)) ||
           ((lVar7 = FUN_003dea70(auStack_78,__s1), lVar7 == 0 || (*(long *)(lVar7 + 0x70) == 0)))))
          );
LAB_0045d800:
  uVar2 = local_88;
  iVar3 = FUN_0045e310(local_88,auStack_78);
  uVar9 = local_90;
  if ((iVar3 == 0) ||
     (iVar3 = FUN_0045e0c0(auStack_78,local_90,&local_98,param_6,param_7), iVar3 == 0)) {
    uVar9 = 0;
    bVar1 = true;
  }
  else {
    *param_1 = uVar9;
    *param_2 = local_98;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = __s1;
      if ((param_8 & 1) == 0) {
        FUN_00452f80(uVar2,"external/openssl/crypto/pem/pem_lib.c",0xdf);
      }
      else {
        FUN_00453360(uVar2,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
      }
      return 1;
    }
    bVar1 = false;
    uVar9 = 1;
  }
  if ((param_8 & 1) == 0) {
    FUN_00452f80(__s1,"external/openssl/crypto/pem/pem_lib.c",0xdf);
    FUN_00452f80(uVar2,"external/openssl/crypto/pem/pem_lib.c",0xdf);
    if (bVar1) {
      FUN_00452f80(local_90,"external/openssl/crypto/pem/pem_lib.c",0xdf);
    }
  }
  else {
    FUN_00453360(__s1,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
    FUN_00453360(uVar2,0,"external/openssl/crypto/pem/pem_lib.c",0xdd);
    if (bVar1) {
      FUN_00453360(local_90,local_98,"external/openssl/crypto/pem/pem_lib.c",0xdd);
    }
  }
  return uVar9;
}


