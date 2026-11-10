/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f7728; name: FUN_014f7728
 */


void FUN_014f7728(undefined4 *param_1,undefined4 *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  uVar5 = *(ulong *)(param_2 + 0x26);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar3 = *param_4;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar9 = uVar5 - 1 & uVar3;
    }
    else if (uVar3 < uVar5) {
      uVar9 = uVar3;
    }
    else {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar3 / uVar5;
      }
      uVar9 = uVar3 - uVar9 * uVar5;
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x24) + uVar9 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (plVar7[2] == uVar3) goto LAB_014f77d4;
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar9) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar7[1];
          if (uVar6 == uVar3) {
            if (plVar7[2] == uVar3) goto LAB_014f77d4;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar9) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  uVar5 = *(ulong *)(param_2 + 0xc);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar3 = *param_3;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar9 = uVar5 - 1 & uVar3;
    }
    else if (uVar3 < uVar5) {
      uVar9 = uVar3;
    }
    else {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar3 / uVar5;
      }
      uVar9 = uVar3 - uVar9 * uVar5;
    }
    puVar8 = *(undefined8 **)(*(long *)(param_2 + 10) + uVar9 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar7 = (long *)*puVar8, plVar7 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (plVar7[2] == uVar3) goto LAB_014f77d4;
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar9) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar7[1];
          if (uVar6 == uVar3) {
            if (plVar7[2] == uVar3) goto LAB_014f77d4;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar9) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  uVar2 = param_2[7];
  uVar4 = *(undefined4 *)((long)param_2 + 0x1f);
LAB_014f7984:
  *(undefined4 *)((long)param_1 + 0x1f) = uVar4;
  param_1[7] = uVar2;
  return;
LAB_014f77d4:
  *param_1 = (int)plVar7[3];
  param_1[1] = *(undefined4 *)((long)plVar7 + 0x1c);
  param_1[2] = (int)plVar7[4];
  param_1[3] = *(undefined4 *)((long)plVar7 + 0x24);
  param_1[4] = (int)plVar7[5];
  param_1[5] = *(undefined4 *)((long)plVar7 + 0x2c);
  param_1[6] = (int)plVar7[6];
  uVar2 = *(undefined4 *)((long)plVar7 + 0x34);
  uVar4 = *(undefined4 *)((long)plVar7 + 0x37);
  goto LAB_014f7984;
}


