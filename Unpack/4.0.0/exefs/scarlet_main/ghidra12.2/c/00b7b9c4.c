/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b7b9c4; name: FUN_00b7b9c4
 */


undefined1  [16] FUN_00b7b9c4(long param_1,byte *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  byte *__s2;
  byte *pbVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  __s2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  bVar5 = *__s2;
  if (bVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    pbVar7 = __s2;
    do {
      pbVar7 = pbVar7 + 1;
      uVar9 = uVar9 * 5 + (ulong)bVar5;
      bVar5 = *pbVar7;
    } while (bVar5 != 0);
  }
  uVar11 = *(ulong *)(param_1 + 0xf8);
  if (uVar11 != 0) {
    uVar6 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar10 = uVar11 - 1 & uVar9;
    }
    else {
      uVar10 = uVar9;
      if (uVar11 <= uVar9) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar9 / uVar11;
        }
        uVar10 = uVar9 - uVar10 * uVar11;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0xf0) + uVar10 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (uVar9 == plVar8[1]) {
            iVar2 = strcmp((char *)plVar8[2],(char *)__s2);
            if (iVar2 == 0) goto LAB_00b7bb24;
          }
          else if ((plVar8[1] & uVar11 - 1) != uVar10) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar9 == uVar6) {
            iVar2 = strcmp((char *)plVar8[2],(char *)__s2);
            if (iVar2 == 0) goto LAB_00b7bb24;
          }
          else {
            if (uVar11 <= uVar6) {
              uVar1 = 0;
              if (uVar11 != 0) {
                uVar1 = uVar6 / uVar11;
              }
              uVar6 = uVar6 - uVar1 * uVar11;
            }
            if (uVar6 != uVar10) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  lVar3 = 0;
  lVar4 = 0;
LAB_00b7bb10:
  auVar12._8_8_ = lVar4;
  auVar12._0_8_ = lVar3;
  return auVar12;
LAB_00b7bb24:
  lVar3 = plVar8[3];
  lVar4 = plVar8[4];
  goto LAB_00b7bb10;
}


