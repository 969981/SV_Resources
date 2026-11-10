/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d4bd8; name: FUN_001d4bd8
 */


undefined8 FUN_001d4bd8(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *__s;
  ulong uVar6;
  
  sVar3 = strlen(param_2);
  uVar4 = FUN_001e0a34(param_1,param_2,sVar3);
  if ((int)uVar4 != 0) {
    __s = (char *)(param_1 + sVar3);
    cVar1 = *__s;
    while ((cVar1 != '\0' && (iVar2 = FUN_001cb268(cVar1), iVar2 != 0))) {
      __s = __s + 1;
      cVar1 = *__s;
    }
    pcVar5 = strchr(__s,0xd);
    if ((pcVar5 == (char *)0x0) && (pcVar5 = strchr(__s,10), pcVar5 == (char *)0x0)) {
      sVar3 = strlen(__s);
      pcVar5 = __s + sVar3;
    }
    sVar3 = strlen(param_3);
    for (uVar6 = (long)pcVar5 - (long)__s; sVar3 <= uVar6; uVar6 = uVar6 - 1) {
      iVar2 = FUN_001e0a34(__s,param_3,sVar3);
      if (iVar2 != 0) {
        return 1;
      }
      __s = __s + 1;
    }
    uVar4 = 0;
  }
  return uVar4;
}


