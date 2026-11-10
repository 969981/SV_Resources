/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01013e50; name: FUN_01013e50
 */


undefined1  [16] FUN_01013e50(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  uVar2 = (ulong)*(uint *)(param_2 + 0x28);
  uVar4 = *(ulong *)(param_1 + uVar2 * 0xd8 + 0x10);
  if (uVar4 != 0) {
    uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar3 = *(ulong *)(param_2 + 8);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & uVar3;
    }
    else if (uVar3 < uVar4) {
      uVar7 = uVar3;
    }
    else {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar3 / uVar4;
      }
      uVar7 = uVar3 - uVar7 * uVar4;
    }
    plVar8 = *(long **)(*(long *)(param_1 + uVar2 * 0xd8 + 8) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar3) {
            if (plVar8[2] == uVar3) goto LAB_01013f70;
          }
          else if ((plVar8[1] & uVar4 - 1) != uVar7) goto LAB_01013f14;
          plVar8 = (long *)*plVar8;
          uVar5 = 0;
          uVar1 = 0;
          uVar6 = 0;
        } while (plVar8 != (long *)0x0);
        goto LAB_01013f84;
      }
      do {
        uVar6 = plVar8[1];
        if (uVar6 == uVar3) {
          if (plVar8[2] == uVar3) goto LAB_01013f70;
        }
        else {
          if (uVar4 <= uVar6) {
            uVar5 = 0;
            if (uVar4 != 0) {
              uVar5 = uVar6 / uVar4;
            }
            uVar6 = uVar6 - uVar5 * uVar4;
          }
          if (uVar6 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
LAB_01013f14:
  uVar5 = 0;
  uVar1 = 0;
  uVar6 = 0;
  goto LAB_01013f84;
LAB_01013f70:
  uVar6 = uVar2 & 0xffffff00 | (ulong)*(uint *)(plVar8 + 3) << 0x20;
  uVar5 = uVar2 & 0xff;
  uVar1 = 1;
LAB_01013f84:
  auVar9._0_8_ = uVar6 | uVar5;
  auVar9._8_8_ = uVar1;
  return auVar9;
}


