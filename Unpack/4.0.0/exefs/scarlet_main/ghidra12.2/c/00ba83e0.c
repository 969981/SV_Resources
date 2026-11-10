/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ba83e0; name: FUN_00ba83e0
 */


long FUN_00ba83e0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  byte *__s2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  long *plVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar2 = *param_2;
  __s2 = (byte *)param_2[1];
  bVar7 = *__s2;
  if (bVar7 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    pbVar9 = __s2;
    do {
      pbVar9 = pbVar9 + 1;
      lVar5 = lVar5 * 5 + (ulong)bVar7;
      bVar7 = *pbVar9;
    } while (bVar7 != 0);
  }
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar1 = lVar5 + lVar2 * 0xffff;
    uVar6 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
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
    plVar8 = *(long **)(*param_1 + uVar10 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (uVar1 == plVar8[1]) {
            if ((plVar8[2] == lVar2) && (iVar4 = strcmp((char *)plVar8[3],(char *)__s2), iVar4 == 0)
               ) {
LAB_00ba8554:
              return plVar8[4];
            }
          }
          else if ((plVar8[1] & uVar11 - 1) != uVar10) {
            return 0;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar1 == uVar6) {
            if ((plVar8[2] == lVar2) && (iVar4 = strcmp((char *)plVar8[3],(char *)__s2), iVar4 == 0)
               ) goto LAB_00ba8554;
          }
          else {
            if (uVar11 <= uVar6) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar6 / uVar11;
              }
              uVar6 = uVar6 - uVar3 * uVar11;
            }
            if (uVar6 != uVar10) {
              return 0;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return 0;
}


