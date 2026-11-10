/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01025774; name: FUN_01025774
 */


void FUN_01025774(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar4 = param_1[1];
  uVar11 = param_2;
  if (!(param_2 < uVar4 || param_2 == uVar4)) {
LAB_01025798:
    if (uVar11 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        lVar6 = param_1[1];
        plVar7 = (long *)param_1[2];
        uVar11 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar11 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar2,lVar6 << 3,8);
        }
        else {
          FUN_00c48fe8(plVar7,lVar2,lVar6 << 3,8);
        }
      }
      param_1[1] = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar11 << 3,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)param_1[2] + 0xe8))();
      }
      lVar6 = *param_1;
      *param_1 = lVar2;
      if (lVar6 != 0) {
        lVar2 = param_1[1];
        plVar7 = (long *)param_1[2];
        uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar2 << 3,8);
        }
        else {
          FUN_00c48fe8(plVar7,lVar6,lVar2 << 3,8);
        }
      }
      uVar5 = uVar11 - 1;
      uVar4 = uVar11;
      if (uVar11 == 0 || uVar5 == 0) {
        uVar4 = 1;
      }
      param_1[1] = uVar11;
      *(undefined8 *)*param_1 = 0;
      if (((1 < uVar11) && (*(undefined8 *)(*param_1 + 8) = 0, uVar4 != 2)) &&
         (*(undefined8 *)(*param_1 + 0x10) = 0, uVar4 != 3)) {
        uVar8 = 3;
        do {
          *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
          uVar8 = uVar8 + 1;
        } while (uVar4 != uVar8);
      }
      plVar7 = (long *)param_1[6];
      if (plVar7 != (long *)0x0) {
        uVar4 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
        uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
        uVar8 = plVar7[1];
        uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar4 < 2) {
          uVar8 = uVar8 & uVar5;
        }
        else if (uVar11 <= uVar8) {
          uVar1 = 0;
          if (uVar11 != 0) {
            uVar1 = uVar8 / uVar11;
          }
          uVar8 = uVar8 - uVar1 * uVar11;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 6;
        plVar9 = (long *)*plVar7;
        if (plVar9 != (long *)0x0) {
          if (uVar4 < 2) {
            do {
              uVar11 = plVar9[1] & uVar5;
              if (uVar11 == uVar8) {
                uVar11 = uVar8;
              }
              else {
                plVar10 = plVar9;
                if (*(long *)(*param_1 + uVar11 * 8) == 0) {
                  *(long **)(*param_1 + uVar11 * 8) = plVar7;
                }
                else {
                  do {
                    plVar12 = plVar10;
                    plVar10 = (long *)*plVar12;
                    if (plVar10 == (long *)0x0) break;
                  } while ((short)plVar9[2] == (short)plVar10[2]);
                  *plVar7 = (long)plVar10;
                  *plVar12 = **(long **)(*param_1 + uVar11 * 8);
                  **(undefined8 **)(*param_1 + uVar11 * 8) = plVar9;
                  plVar9 = plVar7;
                  uVar11 = uVar8;
                }
              }
              plVar10 = (long *)*plVar9;
              plVar7 = plVar9;
              uVar8 = uVar11;
              plVar9 = plVar10;
            } while (plVar10 != (long *)0x0);
          }
          else {
            do {
              uVar4 = plVar9[1];
              if (uVar11 <= uVar4) {
                uVar5 = 0;
                if (uVar11 != 0) {
                  uVar5 = uVar4 / uVar11;
                }
                uVar4 = uVar4 - uVar5 * uVar11;
              }
              if (uVar4 == uVar8) {
                uVar4 = uVar8;
              }
              else {
                plVar10 = plVar9;
                if (*(long *)(*param_1 + uVar4 * 8) == 0) {
                  *(long **)(*param_1 + uVar4 * 8) = plVar7;
                }
                else {
                  do {
                    plVar12 = plVar10;
                    plVar10 = (long *)*plVar12;
                    if (plVar10 == (long *)0x0) break;
                  } while ((short)plVar9[2] == (short)plVar10[2]);
                  *plVar7 = (long)plVar10;
                  *plVar12 = **(long **)(*param_1 + uVar4 * 8);
                  **(undefined8 **)(*param_1 + uVar4 * 8) = plVar9;
                  plVar9 = plVar7;
                  uVar4 = uVar8;
                }
              }
              plVar10 = (long *)*plVar9;
              plVar7 = plVar9;
              uVar8 = uVar4;
              plVar9 = plVar10;
            } while (plVar10 != (long *)0x0);
          }
        }
      }
    }
    return;
  }
  if (param_2 < uVar4) {
    uVar11 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
    if ((uVar4 < 3) ||
       (uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555),
       uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333),
       1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar11 = std::__next_prime(uVar11);
    }
    else if (1 < uVar11) {
      uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
    }
    if (uVar11 <= param_2) {
      uVar11 = param_2;
    }
    if (uVar11 < uVar4) goto LAB_01025798;
  }
  return;
}


