/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c0ea4; name: FUN_002c0ea4
 */


undefined8 FUN_002c0ea4(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  byte *__s1;
  byte *__s2;
  void *__s1_00;
  char *__s2_00;
  byte *pbVar9;
  byte *pbVar10;
  
  uVar7 = FUN_002c1044();
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  bVar4 = *(byte *)(param_1 + 0x48);
  bVar5 = *(byte *)(param_2 + 0x48);
  uVar7 = (ulong)(bVar4 >> 1);
  sVar1 = uVar7;
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x50);
  }
  sVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x50);
  }
  if (sVar1 == sVar2) {
    __s1_00 = *(void **)(param_1 + 0x58);
    if ((bVar4 & 1) == 0) {
      __s1_00 = (void *)(param_1 + 0x49);
    }
    __s2_00 = *(char **)(param_2 + 0x58);
    if ((bVar5 & 1) == 0) {
      __s2_00 = (char *)(param_2 + 0x49);
    }
    if ((bVar4 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar8 = (char *)(param_1 + 0x49);
        do {
          if (*pcVar8 != *__s2_00) {
            return 0;
          }
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
          __s2_00 = __s2_00 + 1;
        } while (uVar7 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar6 = memcmp(__s1_00,__s2_00,sVar1), iVar6 != 0)) {
      return 0;
    }
    pbVar10 = *(byte **)(param_1 + 0x60);
    pbVar3 = *(byte **)(param_1 + 0x68);
    pbVar9 = *(byte **)(param_2 + 0x60);
    if ((long)pbVar3 - (long)pbVar10 == *(long *)(param_2 + 0x68) - (long)pbVar9) {
      if (pbVar10 == pbVar3) {
        return 1;
      }
      do {
        bVar4 = *pbVar10;
        sVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar10 + 8);
        }
        bVar5 = *pbVar9;
        sVar2 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar9 + 8);
        }
        if (sVar1 != sVar2) {
          return 0;
        }
        __s1 = *(byte **)(pbVar10 + 0x10);
        if ((bVar4 & 1) == 0) {
          __s1 = pbVar10 + 1;
        }
        __s2 = *(byte **)(pbVar9 + 0x10);
        if ((bVar5 & 1) == 0) {
          __s2 = pbVar9 + 1;
        }
        if ((bVar4 & 1) == 0) {
          if (sVar1 != 0) {
            uVar7 = 0;
            do {
              if (pbVar10[uVar7 + 1] != __s2[uVar7]) {
                return 0;
              }
              uVar7 = uVar7 + 1;
            } while (bVar4 >> 1 != uVar7);
          }
        }
        else if ((sVar1 != 0) && (iVar6 = memcmp(__s1,__s2,sVar1), iVar6 != 0)) {
          return 0;
        }
        if (*(int *)(pbVar10 + 0x18) != *(int *)(pbVar9 + 0x18)) {
          return 0;
        }
        pbVar10 = pbVar10 + 0x20;
        pbVar9 = pbVar9 + 0x20;
      } while (pbVar10 != pbVar3);
      return 1;
    }
  }
  return 0;
}


