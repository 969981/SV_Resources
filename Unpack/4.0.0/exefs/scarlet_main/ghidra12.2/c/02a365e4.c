/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a365e4; name: FUN_02a365e4
 */


void FUN_02a365e4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      lVar11 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar2,lVar11 << 3,4);
      }
      else {
        FUN_00c48fe8(plVar6,lVar2,lVar11 << 3,4);
      }
    }
    param_1[1] = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,4);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar11 = *param_1;
    *param_1 = lVar2;
    if (lVar11 != 0) {
      lVar2 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar11,lVar2 << 3,4);
      }
      else {
        FUN_00c48fe8(plVar6,lVar11,lVar2 << 3,4);
      }
    }
    uVar1 = param_2 - 1;
    uVar3 = param_2;
    if (param_2 == 0 || uVar1 == 0) {
      uVar3 = 1;
    }
    uVar5 = uVar3 & 3;
    param_1[1] = param_2;
    if (uVar3 - 1 < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar7 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar7 * 8 + 0x10) = 0;
        lVar2 = uVar7 * 8;
        uVar7 = uVar7 + 4;
        *(undefined8 *)(*param_1 + lVar2 + 0x18) = 0;
      } while ((uVar3 & 0xfffffffffffffffc) != uVar7);
    }
    if (uVar5 != 0) {
      lVar2 = uVar7 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar2) = 0;
        uVar5 = uVar5 - 1;
        lVar2 = lVar2 + 8;
      } while (uVar5 != 0);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar3 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
      uVar5 = plVar6[1];
      uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar3 < 2) {
        uVar5 = uVar5 & uVar1;
      }
      else if (param_2 <= uVar5) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar7 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 6;
      plVar8 = (long *)*plVar6;
      if (plVar8 != (long *)0x0) {
        if (uVar3 < 2) {
          do {
            uVar3 = plVar8[1] & uVar1;
            if (uVar3 == uVar5) {
              uVar3 = uVar5;
            }
            else {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar3 * 8) == 0) {
                *(long **)(*param_1 + uVar3 * 8) = plVar6;
              }
              else {
                do {
                  plVar10 = plVar9;
                  plVar9 = (long *)*plVar10;
                  if (plVar9 == (long *)0x0) break;
                } while ((int)plVar8[2] == (int)plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar10 = **(long **)(*param_1 + uVar3 * 8);
                **(undefined8 **)(*param_1 + uVar3 * 8) = plVar8;
                plVar8 = plVar6;
                uVar3 = uVar5;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar5 = uVar3;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar3 = plVar8[1];
            if (param_2 <= uVar3) {
              uVar1 = 0;
              if (param_2 != 0) {
                uVar1 = uVar3 / param_2;
              }
              uVar3 = uVar3 - uVar1 * param_2;
            }
            if (uVar3 == uVar5) {
              uVar3 = uVar5;
            }
            else {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar3 * 8) == 0) {
                *(long **)(*param_1 + uVar3 * 8) = plVar6;
              }
              else {
                do {
                  plVar10 = plVar9;
                  plVar9 = (long *)*plVar10;
                  if (plVar9 == (long *)0x0) break;
                } while ((int)plVar8[2] == (int)plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar10 = **(long **)(*param_1 + uVar3 * 8);
                **(undefined8 **)(*param_1 + uVar3 * 8) = plVar8;
                plVar8 = plVar6;
                uVar3 = uVar5;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar5 = uVar3;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}


