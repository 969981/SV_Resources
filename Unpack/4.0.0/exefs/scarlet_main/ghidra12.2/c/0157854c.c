/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157854c; name: FUN_0157854c
 */


int FUN_0157854c(int *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t __n;
  char *__dest;
  int iVar4;
  int iVar5;
  char acStack_c0 [128];
  
  __n = strlen(param_2);
  __dest = acStack_c0 + (0x80 - (__n + 0x10 & 0xfffffffffffffff0));
  if (__n + 1 <= __n) {
    __n = __n + 1;
  }
  strncpy(__dest,param_2,__n);
  __dest[__n] = '\0';
  FUN_01578628(__dest);
  iVar4 = 0;
  iVar5 = *param_1 + -1;
  do {
    iVar3 = iVar5 - iVar4;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    uVar1 = iVar4 + (iVar3 >> 1);
    iVar3 = strcmp((char *)((long)param_1 +
                           (ulong)*(uint *)((long)param_1 +
                                           (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                           (ulong)uVar1 << 3) + 4)),__dest);
    if (iVar3 == 0) {
      return param_1[(long)(int)uVar1 * 2 + 2];
    }
    iVar2 = uVar1 - 1;
    if (iVar3 < 1) {
      iVar4 = uVar1 + 1;
      iVar2 = iVar5;
    }
    iVar5 = iVar2;
  } while (iVar4 <= iVar5);
  return 0;
}


