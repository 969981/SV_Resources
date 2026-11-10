/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01814670; name: FUN_01814670
 */


void FUN_01814670(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar5 = param_1 + 1;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      FUN_0181491c(plVar5);
    }
    *plVar5 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      FUN_0181491c(plVar5);
    }
    uVar1 = param_2 - 1;
    uVar9 = param_2;
    if (param_2 == 0 || uVar1 == 0) {
      uVar9 = 1;
    }
    param_1[1] = param_2;
    *(undefined8 *)*param_1 = 0;
    if ((((1 < param_2) && (*(undefined8 *)(*param_1 + 8) = 0, uVar9 != 2)) &&
        (*(undefined8 *)(*param_1 + 0x10) = 0, uVar9 != 3)) &&
       (((*(undefined8 *)(*param_1 + 0x18) = 0, uVar9 != 4 &&
         (*(undefined8 *)(*param_1 + 0x20) = 0, uVar9 != 5)) &&
        ((*(undefined8 *)(*param_1 + 0x28) = 0, uVar9 != 6 &&
         (*(undefined8 *)(*param_1 + 0x30) = 0, uVar9 != 7)))))) {
      uVar6 = 7;
      do {
        *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar9 != uVar6);
    }
    plVar5 = (long *)param_1[6];
    if (plVar5 != (long *)0x0) {
      uVar9 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar6 = plVar5[1];
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar6 = uVar6 & uVar1;
      }
      else if (param_2 <= uVar6) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar2 * param_2;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 6;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        if (uVar9 < 2) {
          do {
            uVar9 = plVar7[1] & uVar1;
            if (uVar9 != uVar6) {
              plVar8 = plVar7;
              if (*(long *)(*param_1 + uVar9 * 8) == 0) {
                *(long **)(*param_1 + uVar9 * 8) = plVar5;
                uVar6 = uVar9;
              }
              else {
                do {
                  plVar10 = plVar8;
                  plVar8 = (long *)*plVar10;
                  if (plVar8 == (long *)0x0) break;
                } while (plVar7[2] == plVar8[2]);
                *plVar5 = (long)plVar8;
                *plVar10 = **(long **)(*param_1 + uVar9 * 8);
                **(undefined8 **)(*param_1 + uVar9 * 8) = plVar7;
                plVar7 = plVar5;
              }
            }
            plVar8 = (long *)*plVar7;
            plVar5 = plVar7;
            plVar7 = plVar8;
          } while (plVar8 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar7[1];
            if (param_2 <= uVar9) {
              uVar1 = 0;
              if (param_2 != 0) {
                uVar1 = uVar9 / param_2;
              }
              uVar9 = uVar9 - uVar1 * param_2;
            }
            if (uVar9 != uVar6) {
              plVar8 = plVar7;
              if (*(long *)(*param_1 + uVar9 * 8) == 0) {
                *(long **)(*param_1 + uVar9 * 8) = plVar5;
                uVar6 = uVar9;
              }
              else {
                do {
                  plVar10 = plVar8;
                  plVar8 = (long *)*plVar10;
                  if (plVar8 == (long *)0x0) break;
                } while (plVar7[2] == plVar8[2]);
                *plVar5 = (long)plVar8;
                *plVar10 = **(long **)(*param_1 + uVar9 * 8);
                **(undefined8 **)(*param_1 + uVar9 * 8) = plVar7;
                plVar7 = plVar5;
              }
            }
            plVar8 = (long *)*plVar7;
            plVar5 = plVar7;
            plVar7 = plVar8;
          } while (plVar8 != (long *)0x0);
        }
      }
    }
  }
  return;
}


