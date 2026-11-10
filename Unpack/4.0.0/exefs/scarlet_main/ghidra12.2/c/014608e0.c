/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014608e0; name: FUN_014608e0
 */


void FUN_014608e0(long param_1,long *param_2)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  uVar1 = *(ushort *)(param_1 + 0x70);
  uVar3 = (ulong)uVar1;
  if ((uVar3 != 0xee) && (uVar5 = *(ulong *)(param_1 + 0x10), uVar5 != 0)) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar8 = (int)uVar5 - 1 & uVar3;
    }
    else {
      uVar8 = uVar3;
      if (uVar5 <= uVar3) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar3 / uVar5;
        }
        uVar8 = uVar3 - uVar8 * uVar5;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 8) + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (*(ushort *)(plVar7 + 2) == uVar1) goto LAB_0146096c;
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar8) goto LAB_01460b04;
          plVar7 = (long *)*plVar7;
          plVar9 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar7[1];
          if (uVar6 == uVar3) {
            if (*(ushort *)(plVar7 + 2) == uVar1) goto LAB_0146096c;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar8) goto LAB_01460b04;
          }
          plVar7 = (long *)*plVar7;
          plVar9 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
      }
      goto LAB_01460970;
    }
  }
LAB_01460b04:
  plVar9 = (long *)0x0;
LAB_01460970:
  if (plVar9 != param_2) goto LAB_01460a14;
  uVar1 = *(ushort *)((long)param_2 + 0x14);
  uVar3 = (ulong)uVar1;
  if (uVar3 == 0xee) {
LAB_01460a18:
    uVar4 = 0xee;
  }
  else {
    uVar5 = *(ulong *)(param_2[1] + 0x10);
    if (uVar5 == 0) goto LAB_01460a18;
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar8 = (int)uVar5 - 1 & uVar3;
    }
    else {
      uVar8 = uVar3;
      if (uVar5 <= uVar3) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar3 / uVar5;
        }
        uVar8 = uVar3 - uVar8 * uVar5;
      }
    }
    plVar7 = *(long **)(*(long *)(param_2[1] + 8) + uVar8 * 8);
    if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
    goto LAB_01460a18;
    if (uVar6 < 2) {
      uVar4 = 0xee;
      do {
        if (plVar7[1] == uVar3) {
          if (*(ushort *)(plVar7 + 2) == uVar1) goto LAB_01460a0c;
        }
        else if ((plVar7[1] & uVar5 - 1) != uVar8) break;
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
    else {
      uVar4 = 0xee;
      do {
        uVar6 = plVar7[1];
        if (uVar6 == uVar3) {
          if (*(ushort *)(plVar7 + 2) == uVar1) goto LAB_01460a0c;
        }
        else {
          if (uVar5 <= uVar6) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar6 / uVar5;
            }
            uVar6 = uVar6 - uVar2 * uVar5;
          }
          if (uVar6 != uVar8) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_01460a10:
  *(undefined2 *)(param_1 + 0x70) = uVar4;
LAB_01460a14:
  FUN_0137c86c();
  return;
LAB_0146096c:
  plVar9 = plVar7 + 3;
  goto LAB_01460970;
LAB_01460a0c:
  uVar4 = (undefined2)plVar7[5];
  goto LAB_01460a10;
}


