/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b3c20; name: FUN_033b3c20
 */


undefined8 FUN_033b3c20(long param_1)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *__s1;
  long lVar8;
  
  pbVar6 = *(byte **)(param_1 + 0x38);
  lVar8 = *(long *)(param_1 + 0x40);
  lVar5 = (long)*(int *)(param_1 + 0x48);
  lVar1 = param_1 + 0x18;
  if ((byte *)(lVar8 + lVar5) <= pbVar6) {
    FUN_033b40b8(lVar1,0x100);
    pbVar6 = *(byte **)(param_1 + 0x38);
    lVar8 = *(long *)(param_1 + 0x40);
    lVar5 = (long)*(int *)(param_1 + 0x48);
    if ((byte *)(lVar8 + lVar5) <= pbVar6) {
      return 5;
    }
  }
  __s1 = pbVar6 + 1;
  *(byte **)(param_1 + 0x38) = __s1;
  uVar7 = (ulong)*pbVar6;
  if (0x3c < *pbVar6) {
LAB_033b3da4:
    if ((byte *)(lVar8 + *(int *)(param_1 + 0x34)) < __s1) {
      *(byte **)(param_1 + 0x38) = pbVar6;
      __s1 = pbVar6;
    }
    do {
      do {
        pbVar6 = __s1;
        if ((byte *)(lVar8 + (int)lVar5) <= pbVar6) {
          FUN_033b40b8(lVar1,0x100);
          pbVar6 = *(byte **)(param_1 + 0x38);
          lVar8 = *(long *)(param_1 + 0x40);
          lVar5 = (long)*(int *)(param_1 + 0x48);
          if ((byte *)(lVar8 + lVar5) <= pbVar6) {
            return 2;
          }
        }
        __s1 = pbVar6 + 1;
        *(byte **)(param_1 + 0x38) = __s1;
        uVar7 = (ulong)*pbVar6;
      } while (0x3c < *pbVar6);
      if ((1L << (uVar7 & 0x3f) & 0x100002600U) != 0) break;
      if (uVar7 == 0) {
        return 2;
      }
    } while (uVar7 != 0x3c);
    if ((byte *)(lVar8 + *(int *)(param_1 + 0x34)) < __s1) {
      *(byte **)(param_1 + 0x38) = pbVar6;
    }
    return 2;
  }
  if ((1L << (uVar7 & 0x3f) & 0x100002600U) != 0) {
LAB_033b3ca4:
    bVar3 = *__s1;
    if (bVar3 == 0) {
      FUN_033b40b8(lVar1,0x100);
      __s1 = *(byte **)(param_1 + 0x38);
      bVar3 = *__s1;
    }
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
      return 3;
    }
    if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= __s1)
    goto code_r0x033b3ce8;
    goto LAB_033b3d08;
  }
  if (uVar7 == 0) {
    return 5;
  }
  if (uVar7 != 0x3c) goto LAB_033b3da4;
  bVar3 = *__s1;
  if (bVar3 == 0) {
    FUN_033b40b8(lVar1,0x100);
    __s1 = *(byte **)(param_1 + 0x38);
    bVar3 = *__s1;
  }
  lVar8 = *(long *)(param_1 + 0x40);
  uVar7 = (ulong)*(int *)(param_1 + 0x48);
  if (bVar3 != 0x3f) {
    iVar2 = (int)(byte *)(lVar8 + uVar7) - (int)__s1;
    if (iVar2 < 3) {
      FUN_033b40b8(lVar1,3 - iVar2);
      uVar7 = (ulong)*(uint *)(param_1 + 0x48);
      __s1 = *(byte **)(param_1 + 0x38);
      lVar8 = *(long *)(param_1 + 0x40);
      if ((int)(((int)lVar8 + *(uint *)(param_1 + 0x48)) - (int)__s1) < 3) goto LAB_033b3e8c;
    }
    iVar2 = strncmp((char *)__s1,"!--",3);
    if (iVar2 == 0) {
      if (2 < ((int)lVar8 + (int)uVar7) - (int)__s1) {
        __s1 = __s1 + 3;
        *(byte **)(param_1 + 0x38) = __s1;
      }
      iVar2 = 0;
      while( true ) {
        iVar4 = iVar2;
        pbVar6 = __s1;
        if ((byte *)(lVar8 + (int)uVar7) <= __s1) {
          FUN_033b40b8(lVar1,0x100);
          pbVar6 = *(byte **)(param_1 + 0x38);
          lVar8 = *(long *)(param_1 + 0x40);
          uVar7 = (ulong)*(int *)(param_1 + 0x48);
          if ((byte *)(lVar8 + uVar7) <= pbVar6) {
            return 0xc;
          }
        }
        __s1 = pbVar6 + 1;
        *(byte **)(param_1 + 0x38) = __s1;
        if (*pbVar6 == 0) break;
        iVar2 = 0;
        if (((&DAT_03c00a58)[iVar4] == *pbVar6) && (iVar2 = iVar4 + 1, iVar2 == 3)) {
          return 4;
        }
      }
      return 0xc;
    }
LAB_033b3e8c:
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
    return 0;
  }
  if ((byte *)(lVar8 + uVar7) <= __s1) {
    FUN_033b40b8(lVar1,0x100);
    __s1 = *(byte **)(param_1 + 0x38);
    if ((byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48)) <= __s1)
    goto LAB_033b3d88;
  }
  *(byte **)(param_1 + 0x38) = __s1 + 1;
LAB_033b3d88:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 3;
  return 1;
code_r0x033b3ce8:
  FUN_033b40b8(lVar1,0x100);
  __s1 = *(byte **)(param_1 + 0x38);
  if (__s1 < (byte *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x48))) {
LAB_033b3d08:
    __s1 = __s1 + 1;
    *(byte **)(param_1 + 0x38) = __s1;
  }
  goto LAB_033b3ca4;
}


