/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01025e58; name: FUN_01025e58
 */


undefined1  [16] FUN_01025e58(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar10;
  undefined1 auVar9 [16];
  
  uVar1 = FUN_00dc4b38();
  if ((uVar1 & 0xff) == 0) {
    uVar1 = FUN_00dc50dc(param_1);
  }
  if ((uVar1 & 0xff) == 0) {
    uVar1 = *(ulong *)(param_1 + 0xec8);
    lVar8 = 0;
    lVar10 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
      uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
      uVar4 = *param_2;
      uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar3 < 2) {
        uVar2 = uVar1 - 1 & uVar4;
      }
      else {
        uVar2 = uVar4;
        if (uVar1 <= uVar4) {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = uVar4 / uVar1;
          }
          uVar2 = uVar4 - uVar2 * uVar1;
        }
      }
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0xec0) + uVar2 * 8);
      if ((puVar7 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar7, plVar6 != (long *)0x0)) {
        if (uVar3 < 2) {
          do {
            if (plVar6[1] == uVar4) {
              if (plVar6[2] == uVar4) goto LAB_01026080;
            }
            else if ((plVar6[1] & uVar1 - 1) != uVar2) break;
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        else {
          do {
            uVar3 = plVar6[1];
            if (uVar3 == uVar4) {
              if (plVar6[2] == uVar4) goto LAB_01026080;
            }
            else {
              if (uVar1 <= uVar3) {
                uVar5 = 0;
                if (uVar1 != 0) {
                  uVar5 = uVar3 / uVar1;
                }
                uVar3 = uVar3 - uVar5 * uVar1;
              }
              if (uVar3 != uVar2) break;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + (uVar1 >> 0x20) * 0x78 + 0x40);
    lVar8 = 0;
    lVar10 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar2 = *param_2;
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar4 < 2) {
        uVar5 = uVar3 - 1 & uVar2;
      }
      else {
        uVar5 = uVar2;
        if (uVar3 <= uVar2) {
          uVar5 = 0;
          if (uVar3 != 0) {
            uVar5 = uVar2 / uVar3;
          }
          uVar5 = uVar2 - uVar5 * uVar3;
        }
      }
      plVar6 = *(long **)(*(long *)(param_1 + (uVar1 >> 0x20) * 0x78 + 0x38) + uVar5 * 8);
      if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
        if (uVar4 < 2) {
          do {
            if (plVar6[1] == uVar2) {
              if (plVar6[2] == uVar2) goto LAB_01026080;
            }
            else if ((plVar6[1] & uVar3 - 1) != uVar5) break;
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        else {
          do {
            uVar1 = plVar6[1];
            if (uVar1 == uVar2) {
              if (plVar6[2] == uVar2) goto LAB_01026080;
            }
            else {
              if (uVar3 <= uVar1) {
                uVar4 = 0;
                if (uVar3 != 0) {
                  uVar4 = uVar1 / uVar3;
                }
                uVar1 = uVar1 - uVar4 * uVar3;
              }
              if (uVar1 != uVar5) break;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
    }
  }
LAB_01026084:
  auVar9._8_8_ = lVar10;
  auVar9._0_8_ = lVar8;
  return auVar9;
LAB_01026080:
  lVar10 = plVar6[5];
  lVar8 = plVar6[4];
  goto LAB_01026084;
}


