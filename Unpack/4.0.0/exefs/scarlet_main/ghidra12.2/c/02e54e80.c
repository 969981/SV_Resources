/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e54e80; name: FUN_02e54e80
 */


void FUN_02e54e80(long param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  short sVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
  plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x38);
  if (plVar4 == plVar1) {
LAB_02e54fa0:
    sVar3 = -1;
LAB_02e54fa4:
    *(short *)(param_1 + 0x70) = sVar3;
    return;
  }
  uVar5 = *param_2;
LAB_02e54e98:
  uVar6 = *(ulong *)(*plVar4 + 0x40);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar5;
    }
    else {
      uVar8 = uVar5;
      if (uVar6 <= uVar5) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar5 / uVar6;
        }
        uVar8 = uVar5 - uVar8 * uVar6;
      }
    }
    plVar9 = *(long **)(*(long *)(*plVar4 + 0x38) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_02e54f8c;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_02e54f8c;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar2 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  goto LAB_02e54f94;
LAB_02e54f8c:
  if (-1 < (short)plVar9[6]) {
    sVar3 = *(short *)((long)plVar4 + 10) + (short)plVar9[6];
    goto LAB_02e54fa4;
  }
LAB_02e54f94:
  plVar4 = plVar4 + 2;
  if (plVar4 == plVar1) goto LAB_02e54fa0;
  goto LAB_02e54e98;
}


