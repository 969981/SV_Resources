/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349fff0; name: FUN_0349fff0
 */


long FUN_0349fff0(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    if (DAT_048b0118 != 0) {
      lVar4 = DAT_048b0118;
      do {
        if (*(long *)(lVar4 + 0x28) == param_1[1]) {
          return lVar4;
        }
        lVar4 = *(long *)(lVar4 + 0x20);
        lVar5 = DAT_048b0118;
      } while (lVar4 != 0);
      do {
        if (*(char *)(lVar5 + 0x46d) != '\0') {
          return lVar5;
        }
        plVar1 = (long *)(lVar5 + 0x20);
        lVar5 = *plVar1;
      } while (*plVar1 != 0);
    }
    return 0;
  }
  iVar8 = *(int *)(lVar4 + 0x1b8);
  iVar3 = iVar8;
  if (iVar8 == -1) {
    lVar5 = lVar4;
    do {
      lVar5 = *(long *)(lVar5 + 0xa0);
      iVar3 = iVar8;
      if (lVar5 == 0) goto LAB_034a0028;
      iVar3 = *(int *)(lVar5 + 0x1b8);
    } while (iVar3 == -1);
    *(int *)(lVar4 + 0x1b8) = iVar3;
  }
LAB_034a0028:
  if (DAT_048b0118 != 0) {
    lVar5 = param_1[2];
    lVar4 = DAT_048b0118;
    do {
      if (*(int *)(lVar4 + 0x80) == iVar3) {
        if (lVar5 == 0) {
          uVar6 = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(ulong *)(lVar5 + 0x78);
        }
        uVar7 = *(uint *)(lVar4 + 0x58);
        if (uVar7 == 0) {
          if (*(char *)(lVar4 + 0x46e) == '\0') {
            if (lVar5 == 0) {
              uVar6 = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(ulong *)(lVar5 + 0x78);
            }
            if (DAT_048b0138 == 0) {
              return lVar4;
            }
            iVar8 = 0;
            uVar7 = DAT_048b0138;
            while( true ) {
              iVar2 = iVar8 + (uVar7 >> 1);
              uVar9 = *(ulong *)(DAT_048b0130 + (long)iVar2 * 8);
              if (uVar9 == uVar6) break;
              if (uVar9 < uVar6) {
                iVar8 = iVar2 + 1;
              }
              uVar7 = uVar7 - (uVar9 < uVar6) >> 1;
              if (uVar7 == 0) {
                return lVar4;
              }
            }
          }
        }
        else {
          iVar8 = 0;
          do {
            iVar2 = iVar8 + (uVar7 >> 1);
            uVar9 = *(ulong *)(*(long *)(lVar4 + 0x50) + (long)iVar2 * 8);
            if (uVar9 == uVar6) {
              return lVar4;
            }
            if (uVar9 < uVar6) {
              iVar8 = iVar2 + 1;
            }
            uVar7 = uVar7 - (uVar9 < uVar6) >> 1;
          } while (uVar7 != 0);
        }
      }
      lVar4 = *(long *)(lVar4 + 0x20);
    } while (lVar4 != 0);
  }
  return 0;
}


