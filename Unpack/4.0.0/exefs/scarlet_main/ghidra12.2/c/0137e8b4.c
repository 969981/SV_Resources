/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0137e8b4; name: FUN_0137e8b4
 */


void FUN_0137e8b4(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar1 = *(ushort *)(param_1 + 0x70);
  uVar4 = (ulong)uVar1;
  if ((uVar4 != 0xee) && (uVar5 = *(ulong *)(param_1 + 0x10), uVar5 != 0)) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = (int)uVar5 - 1 & uVar4;
    }
    else {
      uVar7 = uVar4;
      if (uVar5 <= uVar4) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar4 / uVar5;
        }
        uVar7 = uVar4 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (*(ushort *)(plVar8 + 2) == uVar1) goto LAB_0137e954;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (*(ushort *)(plVar8 + 2) == uVar1) goto LAB_0137e954;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  goto LAB_0137ea0c;
LAB_0137e9ec:
  FUN_0137c86c(param_1,plVar3);
  uVar1 = *(ushort *)((long)plVar8 + 0x2c);
  plVar3 = plVar8 + 3;
  if (uVar1 == 0xee) goto LAB_0137ea04;
  goto LAB_0137e968;
LAB_0137e954:
  uVar1 = *(ushort *)((long)plVar8 + 0x2c);
  plVar3 = plVar8 + 3;
  if (uVar1 != 0xee) {
LAB_0137e968:
    uVar4 = (ulong)uVar1;
    uVar5 = *(ulong *)(plVar8[4] + 0x10);
    if (uVar5 != 0) {
      uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar7 = (int)uVar5 - 1 & uVar4;
      }
      else {
        uVar7 = uVar4;
        if (uVar5 <= uVar4) {
          uVar7 = 0;
          if (uVar5 != 0) {
            uVar7 = uVar4 / uVar5;
          }
          uVar7 = uVar4 - uVar7 * uVar5;
        }
      }
      plVar8 = *(long **)(*(long *)(plVar8[4] + 8) + uVar7 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        if (uVar6 < 2) {
          do {
            if (plVar8[1] == uVar4) {
              if (*(ushort *)(plVar8 + 2) == uVar1) goto LAB_0137e9ec;
            }
            else if ((plVar8[1] & uVar5 - 1) != uVar7) goto LAB_0137ea04;
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_0137ea04;
          } while( true );
        }
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (*(ushort *)(plVar8 + 2) == uVar1) goto LAB_0137e9ec;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) break;
        } while( true );
      }
    }
  }
LAB_0137ea04:
  FUN_0137c86c(param_1,plVar3);
LAB_0137ea0c:
  *(undefined2 *)(param_1 + 0x70) = 0xee;
  return;
}


