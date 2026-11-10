/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c124c; name: FUN_002c124c
 */


bool FUN_002c124c(int *param_1,int *param_2)

{
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  size_t __n;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *__s2;
  
  if (*param_1 != *param_2) {
    return false;
  }
  if (*param_1 == 2) {
    pbVar6 = *(byte **)(param_1 + 8);
    if ((pbVar6 == (byte *)0x0) || (pbVar7 = *(byte **)(param_2 + 8), pbVar7 == (byte *)0x0)) {
      return false;
    }
    bVar2 = *pbVar6;
    uVar5 = (ulong)(bVar2 >> 1);
    __n = uVar5;
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(pbVar6 + 8);
    }
    bVar3 = *pbVar7;
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar7 + 8);
    }
    if (__n != sVar1) {
      return false;
    }
    pbVar8 = *(byte **)(pbVar6 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar8 = pbVar6 + 1;
    }
    __s2 = *(byte **)(pbVar7 + 0x10);
    if ((bVar3 & 1) == 0) {
      __s2 = pbVar7 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return true;
      }
      do {
        pbVar6 = pbVar6 + 1;
        if (*pbVar6 != *__s2) {
          return false;
        }
        uVar5 = uVar5 - 1;
        __s2 = __s2 + 1;
      } while (uVar5 != 0);
      return true;
    }
  }
  else {
    bVar2 = *(byte *)(param_1 + 2);
    bVar3 = *(byte *)(param_2 + 2);
    uVar5 = (ulong)(bVar2 >> 1);
    __n = uVar5;
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 4);
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 4);
    }
    if (__n != sVar1) {
      return false;
    }
    pbVar8 = *(byte **)(param_1 + 6);
    if ((bVar2 & 1) == 0) {
      pbVar8 = (byte *)((long)param_1 + 9);
    }
    __s2 = *(byte **)(param_2 + 6);
    if ((bVar3 & 1) == 0) {
      __s2 = (byte *)((long)param_2 + 9);
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return true;
      }
      pbVar8 = (byte *)((long)param_1 + 9);
      do {
        if (*pbVar8 != *__s2) {
          return false;
        }
        uVar5 = uVar5 - 1;
        pbVar8 = pbVar8 + 1;
        __s2 = __s2 + 1;
      } while (uVar5 != 0);
      return true;
    }
  }
  if (__n == 0) {
    return true;
  }
  iVar4 = memcmp(pbVar8,__s2,__n);
  return iVar4 == 0;
}


