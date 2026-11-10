/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b7cb3c; name: FUN_00b7cb3c
 */


undefined1  [16] FUN_00b7cb3c(long *param_1,long param_2,byte *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  byte *__s2;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  __s2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __s2 = param_3 + 1;
  }
  bVar6 = *__s2;
  if (bVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    pbVar9 = __s2;
    do {
      pbVar9 = pbVar9 + 1;
      lVar4 = lVar4 * 5 + (ulong)bVar6;
      bVar6 = *pbVar9;
    } while (bVar6 != 0);
  }
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar1 = lVar4 + param_2 * 0xffff;
    uVar5 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar10 = uVar11 - 1 & uVar1;
    }
    else {
      uVar10 = uVar1;
      if (uVar11 <= uVar1) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar1 / uVar11;
        }
        uVar10 = uVar1 - uVar10 * uVar11;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar7 == (long *)0x0) {
      lVar4 = 0;
      lVar8 = 0;
      goto LAB_00b7ccc0;
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) {
      if (uVar5 < 2) {
        do {
          if (uVar1 == plVar7[1]) {
            if ((plVar7[2] == param_2) &&
               (iVar3 = strcmp((char *)plVar7[3],(char *)__s2), iVar3 == 0)) goto LAB_00b7cce4;
          }
          else if ((plVar7[1] & uVar11 - 1) != uVar10) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar1 == uVar5) {
            if ((plVar7[2] == param_2) &&
               (iVar3 = strcmp((char *)plVar7[3],(char *)__s2), iVar3 == 0)) goto LAB_00b7cce4;
          }
          else {
            if (uVar11 <= uVar5) {
              uVar2 = 0;
              if (uVar11 != 0) {
                uVar2 = uVar5 / uVar11;
              }
              uVar5 = uVar5 - uVar2 * uVar11;
            }
            if (uVar5 != uVar10) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  lVar4 = 0;
  lVar8 = 0;
LAB_00b7ccc0:
  if ((int)lVar4 != param_4) {
    lVar4 = 0;
    lVar8 = 0;
  }
  auVar12._8_8_ = lVar8;
  auVar12._0_8_ = lVar4;
  return auVar12;
LAB_00b7cce4:
  lVar4 = plVar7[4];
  lVar8 = plVar7[5];
  goto LAB_00b7ccc0;
}


