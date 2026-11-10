/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f5bd0; name: FUN_003f5bd0
 */


long FUN_003f5bd0(char *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t sVar2;
  char *__s;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  
  sVar2 = strlen(param_1);
  __s = (char *)FUN_0045aa40(param_2,param_1);
  if (__s != (char *)0x0) {
    do {
      sVar4 = strlen(__s);
      if (sVar4 < 6) {
        if (sVar4 == 5) goto LAB_003f5cb4;
      }
      else {
        iVar1 = strcasecmp(__s + (sVar4 - 5),".conf");
        if (iVar1 != 0) {
LAB_003f5cb4:
          iVar1 = strcasecmp(__s + (sVar4 - 4),".cnf");
          if (iVar1 != 0) goto LAB_003f5c6c;
        }
        lVar3 = sVar2 + 2 + sVar4;
        pcVar5 = (char *)FUN_00452ce0(lVar3,"external/openssl/crypto/conf/conf_def.c",0x2e2);
        if (pcVar5 == (char *)0x0) {
          FUN_004806c0(0xe,0x6b,0x41,"external/openssl/crypto/conf/conf_def.c",0x2e4);
          break;
        }
        if (*pcVar5 == '\0') {
          FUN_0045ad70(pcVar5,param_1,lVar3);
          FUN_0045ade0(pcVar5,&DAT_03bdfb3b,lVar3);
        }
        FUN_0045ade0(pcVar5,__s,lVar3);
        lVar3 = FUN_003ea4b0(pcVar5,&DAT_03c53cd7);
        FUN_00452f80(pcVar5,"external/openssl/crypto/conf/conf_def.c",0x2fa);
        if (lVar3 != 0) {
          return lVar3;
        }
      }
LAB_003f5c6c:
      __s = (char *)FUN_0045aa40(param_2,param_1);
    } while (__s != (char *)0x0);
  }
  FUN_0045ab50(param_2);
  *param_2 = 0;
  return 0;
}


