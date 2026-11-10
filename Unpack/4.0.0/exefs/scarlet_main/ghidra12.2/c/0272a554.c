/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0272a554; name: FUN_0272a554
 */


void FUN_0272a554(long param_1,ulong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = (long *)(*(long **)(param_1 + 0x58))[1];
  uVar4 = plVar7[1];
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & uVar3;
    }
    else if (uVar3 < uVar4) {
      uVar6 = uVar3;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar3 / uVar4;
      }
      uVar6 = uVar3 - uVar6 * uVar4;
    }
    plVar7 = *(long **)(*plVar7 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (plVar7[2] == uVar3) goto LAB_0272a664;
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) {
            return;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar3) {
            if (plVar7[2] == uVar3) {
LAB_0272a664:
              lVar8 = **(long **)(param_1 + 0x58);
              FUN_00c41540(lVar8);
              lVar8 = lVar8 + (ulong)*(uint *)(plVar7 + 3) * 0x10;
              uVar1 = *param_3;
              *(undefined8 *)(lVar8 + 0x84) = param_3[1];
              *(undefined8 *)(lVar8 + 0x7c) = uVar1;
              return;
            }
          }
          else {
            if (uVar4 <= uVar5) {
              uVar2 = 0;
              if (uVar4 != 0) {
                uVar2 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar2 * uVar4;
            }
            if (uVar5 != uVar6) {
              return;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


