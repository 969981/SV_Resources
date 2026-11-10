/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0029cf90; name: FUN_0029cf90
 */


bool FUN_0029cf90(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  void *pvVar8;
  char *pcVar9;
  
  bVar3 = *(byte *)(param_1 + 0x10);
  bVar4 = *(byte *)(param_2 + 0x10);
  uVar6 = (ulong)(bVar3 >> 1);
  sVar1 = uVar6;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x18);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x18);
  }
  if (sVar1 != sVar2) {
    return false;
  }
  pvVar8 = *(void **)(param_1 + 0x20);
  if ((bVar3 & 1) == 0) {
    pvVar8 = (void *)(param_1 + 0x11);
  }
  pcVar9 = *(char **)(param_2 + 0x20);
  if ((bVar4 & 1) == 0) {
    pcVar9 = (char *)(param_2 + 0x11);
  }
  if ((bVar3 & 1) == 0) {
    if (sVar1 != 0) {
      pcVar7 = (char *)(param_1 + 0x11);
      do {
        if (*pcVar7 != *pcVar9) {
          return false;
        }
        uVar6 = uVar6 - 1;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      } while (uVar6 != 0);
    }
  }
  else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar8,pcVar9,sVar1), iVar5 != 0)) {
    return false;
  }
  bVar3 = *(byte *)(param_1 + 0x28);
  bVar4 = *(byte *)(param_2 + 0x28);
  uVar6 = (ulong)(bVar3 >> 1);
  sVar1 = uVar6;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x30);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x30);
  }
  if (sVar1 == sVar2) {
    pvVar8 = *(void **)(param_1 + 0x38);
    if ((bVar3 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x29);
    }
    pcVar9 = *(char **)(param_2 + 0x38);
    if ((bVar4 & 1) == 0) {
      pcVar9 = (char *)(param_2 + 0x29);
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar7 = (char *)(param_1 + 0x29);
        do {
          if (*pcVar7 != *pcVar9) {
            return false;
          }
          uVar6 = uVar6 - 1;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar6 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar8,pcVar9,sVar1), iVar5 != 0)) {
      return false;
    }
    bVar3 = *(byte *)(param_1 + 0x40);
    bVar4 = *(byte *)(param_2 + 0x40);
    uVar6 = (ulong)(bVar3 >> 1);
    sVar1 = uVar6;
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x48);
    }
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_2 + 0x48);
    }
    if (sVar1 == sVar2) {
      pvVar8 = *(void **)(param_1 + 0x50);
      if ((bVar3 & 1) == 0) {
        pvVar8 = (void *)(param_1 + 0x41);
      }
      pcVar9 = *(char **)(param_2 + 0x50);
      if ((bVar4 & 1) == 0) {
        pcVar9 = (char *)(param_2 + 0x41);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar7 = (char *)(param_1 + 0x41);
          do {
            if (*pcVar7 != *pcVar9) {
              return false;
            }
            uVar6 = uVar6 - 1;
            pcVar7 = pcVar7 + 1;
            pcVar9 = pcVar9 + 1;
          } while (uVar6 != 0);
          return true;
        }
      }
      else if (sVar1 != 0) {
        iVar5 = memcmp(pvVar8,pcVar9,sVar1);
        return iVar5 == 0;
      }
      return true;
    }
  }
  return false;
}


