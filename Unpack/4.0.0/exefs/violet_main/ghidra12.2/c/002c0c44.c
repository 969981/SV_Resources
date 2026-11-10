/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c0c44; name: FUN_002c0c44
 */


bool FUN_002c0c44(byte *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *__s2;
  long lVar9;
  long lVar10;
  
  bVar3 = *param_1;
  uVar7 = (ulong)(bVar3 >> 1);
  __n = uVar7;
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  bVar4 = *param_2;
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pbVar8 = param_1;
        do {
          pbVar8 = pbVar8 + 1;
          if (*pbVar8 != *__s2) {
            return false;
          }
          uVar7 = uVar7 - 1;
          __s2 = __s2 + 1;
        } while (uVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(pbVar8,__s2,__n), iVar6 != 0)) {
      return false;
    }
    bVar5 = (param_1[0x18] != 0) == (param_2[0x18] != 0);
    if ((bVar5) && (param_1[0x18] != 0)) {
      lVar10 = *(long *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      lVar9 = *(long *)(param_2 + 0x20);
      if (lVar2 - lVar10 != *(long *)(param_2 + 0x28) - lVar9) {
        return false;
      }
      if (lVar10 == lVar2) {
        return true;
      }
      do {
        uVar7 = FUN_002c0ea4(lVar10,lVar9);
        if ((uVar7 & 1) == 0) {
          return false;
        }
        lVar10 = lVar10 + 0x78;
        lVar9 = lVar9 + 0x78;
        bVar5 = true;
      } while (lVar2 != lVar10);
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


