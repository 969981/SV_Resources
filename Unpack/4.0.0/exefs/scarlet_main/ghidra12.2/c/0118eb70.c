/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0118eb70; name: FUN_0118eb70
 */


void FUN_0118eb70(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      lVar11 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar11 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar3,lVar11 << 3,8);
      }
    }
    param_1[1] = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar11 = *param_1;
    *param_1 = lVar3;
    if (lVar11 != 0) {
      lVar3 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar11,lVar3 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar11,lVar3 << 3,8);
      }
    }
    uVar1 = param_2 - 1;
    uVar4 = param_2;
    if (param_2 == 0 || uVar1 == 0) {
      uVar4 = 1;
    }
    param_1[1] = param_2;
    *(undefined8 *)*param_1 = 0;
    if ((((1 < param_2) && (*(undefined8 *)(*param_1 + 8) = 0, uVar4 != 2)) &&
        (*(undefined8 *)(*param_1 + 0x10) = 0, uVar4 != 3)) &&
       (((*(undefined8 *)(*param_1 + 0x18) = 0, uVar4 != 4 &&
         (*(undefined8 *)(*param_1 + 0x20) = 0, uVar4 != 5)) &&
        ((*(undefined8 *)(*param_1 + 0x28) = 0, uVar4 != 6 &&
         (*(undefined8 *)(*param_1 + 0x30) = 0, uVar4 != 7)))))) {
      uVar7 = 7;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar4 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar7 = plVar6[1];
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar4 < 2) {
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
        if (uVar4 < 2) {
          do {
            uVar4 = plVar8[1] & uVar1;
            if (uVar4 != uVar7) {
              if (*(long *)(*param_1 + uVar4 * 8) == 0) {
                *(long **)(*param_1 + uVar4 * 8) = plVar6;
                uVar7 = uVar4;
              }
              else {
                plVar9 = plVar8;
                do {
                  plVar10 = plVar9;
                  plVar9 = (long *)*plVar10;
                  if (plVar9 == (long *)0x0) break;
                } while (plVar8[2] == plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar10 = **(long **)(*param_1 + uVar4 * 8);
                **(undefined8 **)(*param_1 + uVar4 * 8) = plVar8;
                plVar8 = plVar6;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar4 = plVar8[1];
            if (param_2 <= uVar4) {
              uVar1 = 0;
              if (param_2 != 0) {
                uVar1 = uVar4 / param_2;
              }
              uVar4 = uVar4 - uVar1 * param_2;
            }
            if (uVar4 != uVar7) {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar4 * 8) == 0) {
                *(long **)(*param_1 + uVar4 * 8) = plVar6;
                uVar7 = uVar4;
              }
              else {
                do {
                  plVar10 = plVar9;
                  plVar9 = (long *)*plVar10;
                  if (plVar9 == (long *)0x0) break;
                } while (plVar8[2] == plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar10 = **(long **)(*param_1 + uVar4 * 8);
                **(undefined8 **)(*param_1 + uVar4 * 8) = plVar8;
                plVar8 = plVar6;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}


