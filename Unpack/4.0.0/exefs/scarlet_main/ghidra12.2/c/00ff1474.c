/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff1474; name: FUN_00ff1474
 */


void FUN_00ff1474(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      lVar5 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar10 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar10 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar5 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar3,lVar5 << 3,8);
      }
    }
    param_1[1] = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar5 = *param_1;
    *param_1 = lVar3;
    if (lVar5 != 0) {
      lVar3 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar10 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar10 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar3 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar5,lVar3 << 3,8);
      }
    }
    uVar1 = param_2 - 1;
    uVar10 = param_2;
    if (param_2 == 0 || uVar1 == 0) {
      uVar10 = 1;
    }
    param_1[1] = param_2;
    *(undefined8 *)*param_1 = 0;
    if (((1 < param_2) && (*(undefined8 *)(*param_1 + 8) = 0, uVar10 != 2)) &&
       (*(undefined8 *)(*param_1 + 0x10) = 0, uVar10 != 3)) {
      uVar7 = 3;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar10 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar7 = plVar6[1];
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar7 = uVar7 & uVar1;
      }
      else if (param_2 <= uVar7) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar2 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 6;
      plVar8 = (long *)*plVar6;
      if (plVar8 != (long *)0x0) {
        if (uVar10 < 2) {
          do {
            uVar10 = plVar8[1] & uVar1;
            if (uVar10 == uVar7) {
              uVar10 = uVar7;
            }
            else {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar10 * 8) == 0) {
                *(long **)(*param_1 + uVar10 * 8) = plVar6;
              }
              else {
                do {
                  plVar11 = plVar9;
                  plVar9 = (long *)*plVar11;
                  if (plVar9 == (long *)0x0) break;
                } while ((int)plVar8[2] == (int)plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar11 = **(long **)(*param_1 + uVar10 * 8);
                **(undefined8 **)(*param_1 + uVar10 * 8) = plVar8;
                plVar8 = plVar6;
                uVar10 = uVar7;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar7 = uVar10;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar8[1];
            if (param_2 <= uVar10) {
              uVar1 = 0;
              if (param_2 != 0) {
                uVar1 = uVar10 / param_2;
              }
              uVar10 = uVar10 - uVar1 * param_2;
            }
            if (uVar10 == uVar7) {
              uVar10 = uVar7;
            }
            else {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar10 * 8) == 0) {
                *(long **)(*param_1 + uVar10 * 8) = plVar6;
              }
              else {
                do {
                  plVar11 = plVar9;
                  plVar9 = (long *)*plVar11;
                  if (plVar9 == (long *)0x0) break;
                } while ((int)plVar8[2] == (int)plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar11 = **(long **)(*param_1 + uVar10 * 8);
                **(undefined8 **)(*param_1 + uVar10 * 8) = plVar8;
                plVar8 = plVar6;
                uVar10 = uVar7;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar7 = uVar10;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}


