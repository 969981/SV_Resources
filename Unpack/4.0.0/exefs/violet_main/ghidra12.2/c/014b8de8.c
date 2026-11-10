/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014b8de8; name: FUN_014b8de8
 */


void FUN_014b8de8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      lVar11 = param_1[1];
      plVar5 = (long *)param_1[2];
      uVar9 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar9 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar2,lVar11 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar2,lVar11 << 3,8);
      }
    }
    param_1[1] = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar11 = *param_1;
    *param_1 = lVar2;
    if (lVar11 != 0) {
      lVar2 = param_1[1];
      plVar5 = (long *)param_1[2];
      uVar9 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar9 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar11,lVar2 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar11,lVar2 << 3,8);
      }
    }
    uVar1 = param_2 - 1;
    uVar9 = param_2;
    if (param_2 == 0 || uVar1 == 0) {
      uVar9 = 1;
    }
    uVar4 = uVar9 & 3;
    param_1[1] = param_2;
    if (uVar9 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar6 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar6 * 8 + 0x10) = 0;
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 + 4;
        *(undefined8 *)(*param_1 + lVar2 + 0x18) = 0;
      } while ((uVar9 & 0xfffffffffffffffc) != uVar6);
    }
    if (uVar4 != 0) {
      lVar2 = uVar6 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar2) = 0;
        uVar4 = uVar4 - 1;
        lVar2 = lVar2 + 8;
      } while (uVar4 != 0);
    }
    plVar5 = (long *)param_1[6];
    if (plVar5 != (long *)0x0) {
      uVar9 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar4 = plVar5[1];
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar4 = uVar4 & uVar1;
      }
      else if (param_2 <= uVar4) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar6 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 6;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        if (uVar9 < 2) {
          do {
            uVar9 = plVar7[1] & uVar1;
            if (uVar9 != uVar4) {
              if (*(long *)(*param_1 + uVar9 * 8) == 0) {
                *(long **)(*param_1 + uVar9 * 8) = plVar5;
                uVar4 = uVar9;
              }
              else {
                plVar8 = plVar7;
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
            if (uVar9 != uVar4) {
              plVar8 = plVar7;
              if (*(long *)(*param_1 + uVar9 * 8) == 0) {
                *(long **)(*param_1 + uVar9 * 8) = plVar5;
                uVar4 = uVar9;
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


