/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a7c40; name: FUN_028a7c40
 */


bool FUN_028a7c40(byte *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  byte *__s1;
  byte *__s2;
  
  bVar2 = *param_1;
  uVar6 = (ulong)(bVar2 >> 1);
  __n = uVar6;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  bVar3 = *param_2;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = param_1 + 1;
    }
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar3 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        do {
          param_1 = param_1 + 1;
          if (*param_1 != *__s2) goto LAB_028a7cc4;
          uVar6 = uVar6 - 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if (__n != 0) {
      iVar5 = memcmp(__s1,__s2,__n);
      return iVar5 == 0;
    }
    bVar4 = true;
  }
  else {
LAB_028a7cc4:
    bVar4 = false;
  }
  return bVar4;
}


