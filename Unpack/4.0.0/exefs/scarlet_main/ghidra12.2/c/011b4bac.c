/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b4bac; name: FUN_011b4bac
 */


undefined8
FUN_011b4bac(long *param_1,char *param_2,long param_3,int param_4,char *param_5,char *param_6)

{
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  
  if ((param_2 == (char *)0x0) || (uVar2 = strlen(param_2), 0x103 < uVar2)) {
    return 0x1f;
  }
  if (param_6 == (char *)0x0) {
    pcVar5 = param_5;
    if (*param_1 == 0) goto LAB_011b4c24;
    param_6 = (char *)(*param_1 + 8);
  }
  sVar3 = strlen(param_6);
  sVar4 = 0x103;
  if (sVar3 + 1 < 0x103) {
    sVar4 = sVar3 + 1;
  }
  strncpy(param_5,param_6,sVar4);
  pcVar5 = param_5 + sVar4;
LAB_011b4c24:
  *pcVar5 = '\0';
  if ((((param_3 != 0) && (param_4 == 0)) && (*(char *)(param_3 + 0x18) != '\0')) &&
     (sVar4 = strlen(&DAT_048af968), sVar4 != 0)) {
    uVar2 = uVar2 + sVar4 + 1;
    if (0x103 < uVar2) {
      return 2;
    }
    sVar3 = strlen(param_5);
    sVar3 = (size_t)(int)(~(uint)sVar3 + 0x104);
    if ((ulong)(long)(int)sVar4 <= sVar3) {
      sVar3 = (long)(int)sVar4;
    }
    pcVar5 = strncat(param_5,&DAT_048af968,sVar3);
    sVar4 = strlen(pcVar5);
    lVar1 = ((ulong)~(uint)sVar4 << 0x20) + 0x10400000000;
    sVar4 = lVar1 >> 0x20;
    if (lVar1 != 0) {
      sVar4 = 1;
    }
    strncat(param_5,"/",sVar4);
  }
  sVar4 = strlen(param_5);
  if (0x103 < sVar4 + uVar2) {
    return 2;
  }
  sVar4 = (size_t)(int)(~(uint)sVar4 + 0x104);
  sVar3 = strlen(param_2);
  if ((ulong)(long)(int)sVar3 <= sVar4) {
    sVar4 = (long)(int)sVar3;
  }
  strncat(param_5,param_2,sVar4);
  return 1;
}


