/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e8d558; name: FUN_00e8d558
 */


void FUN_00e8d558(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  
  plVar8 = param_1 + 1;
  if (param_2 == 0) {
    lVar6 = *param_1;
    *param_1 = 0;
    if (lVar6 != 0) {
      FUN_00e8f784(plVar8);
    }
    *plVar8 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar7 = *param_1;
    *param_1 = lVar6;
    if (lVar7 != 0) {
      FUN_00e8f784(plVar8);
    }
    uVar3 = param_2 - 1;
    uVar12 = param_2;
    if (param_2 == 0 || uVar3 == 0) {
      uVar12 = 1;
    }
    param_1[1] = param_2;
    *(undefined8 *)*param_1 = 0;
    if (((1 < param_2) && (*(undefined8 *)(*param_1 + 8) = 0, uVar12 != 2)) &&
       (*(undefined8 *)(*param_1 + 0x10) = 0, uVar12 != 3)) {
      uVar9 = 3;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
    }
    plVar8 = (long *)param_1[6];
    if (plVar8 != (long *)0x0) {
      uVar12 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar9 = plVar8[1];
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar9 = uVar9 & uVar3;
      }
      else if (param_2 <= uVar9) {
        uVar4 = 0;
        if (param_2 != 0) {
          uVar4 = uVar9 / param_2;
        }
        uVar9 = uVar9 - uVar4 * param_2;
      }
      *(long **)(*param_1 + uVar9 * 8) = param_1 + 6;
      puVar5 = PTR_DAT_047d8b70;
      plVar10 = (long *)*plVar8;
      if (plVar10 != (long *)0x0) {
        if (uVar12 < 2) {
          do {
            uVar12 = plVar10[1] & uVar3;
            if (uVar12 == uVar9) {
              uVar12 = uVar9;
            }
            else {
              plVar11 = plVar10;
              if (*(long *)(*param_1 + uVar12 * 8) == 0) {
                *(long **)(*param_1 + uVar12 * 8) = plVar8;
              }
              else {
                do {
                  plVar13 = plVar11;
                  plVar11 = (long *)*plVar13;
                  if (plVar11 == (long *)0x0) break;
                  plVar1 = (long *)puVar5;
                  if (plVar10[2] != 0) {
                    plVar1 = (long *)(plVar10[2] + 0x30);
                  }
                  plVar2 = (long *)puVar5;
                  if (plVar11[2] != 0) {
                    plVar2 = (long *)(plVar11[2] + 0x30);
                  }
                } while (*plVar1 == *plVar2);
                *plVar8 = (long)plVar11;
                *plVar13 = **(long **)(*param_1 + uVar12 * 8);
                **(undefined8 **)(*param_1 + uVar12 * 8) = plVar10;
                plVar10 = plVar8;
                uVar12 = uVar9;
              }
            }
            plVar11 = (long *)*plVar10;
            plVar8 = plVar10;
            uVar9 = uVar12;
            plVar10 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar10[1];
            if (param_2 <= uVar12) {
              uVar3 = 0;
              if (param_2 != 0) {
                uVar3 = uVar12 / param_2;
              }
              uVar12 = uVar12 - uVar3 * param_2;
            }
            if (uVar12 == uVar9) {
              uVar12 = uVar9;
            }
            else {
              plVar11 = plVar10;
              if (*(long *)(*param_1 + uVar12 * 8) == 0) {
                *(long **)(*param_1 + uVar12 * 8) = plVar8;
              }
              else {
                do {
                  plVar13 = plVar11;
                  plVar11 = (long *)*plVar13;
                  if (plVar11 == (long *)0x0) break;
                  plVar1 = (long *)puVar5;
                  if (plVar10[2] != 0) {
                    plVar1 = (long *)(plVar10[2] + 0x30);
                  }
                  plVar2 = (long *)puVar5;
                  if (plVar11[2] != 0) {
                    plVar2 = (long *)(plVar11[2] + 0x30);
                  }
                } while (*plVar1 == *plVar2);
                *plVar8 = (long)plVar11;
                *plVar13 = **(long **)(*param_1 + uVar12 * 8);
                **(undefined8 **)(*param_1 + uVar12 * 8) = plVar10;
                plVar10 = plVar8;
                uVar12 = uVar9;
              }
            }
            plVar11 = (long *)*plVar10;
            plVar8 = plVar10;
            uVar9 = uVar12;
            plVar10 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
  }
  return;
}


