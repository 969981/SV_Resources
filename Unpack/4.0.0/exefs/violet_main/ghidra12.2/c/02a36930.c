/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a36930; name: FUN_02a36930
 */


void FUN_02a36930(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar11 = param_1[1];
  if (!(param_2 >= uVar11 && param_2 != uVar11)) {
    if (param_2 < uVar11) {
      uVar1 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar11 < 3) ||
         (uVar4 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333),
         1 < (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar1 = std::__next_prime(uVar1);
      }
      else if (1 < uVar1) {
        uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
      }
      if (uVar1 <= param_2) {
        uVar1 = param_2;
      }
      if (uVar1 < uVar11) goto LAB_02a36a14;
    }
    return;
  }
  uVar1 = param_2;
LAB_02a36a14:
  if (uVar1 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      lVar12 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar11 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar11 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar2,lVar12 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar2,lVar12 << 3,8);
      }
    }
    param_1[1] = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar1 << 3,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar12 = *param_1;
    *param_1 = lVar2;
    if (lVar12 != 0) {
      lVar2 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar11 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar11 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar12,lVar2 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar12,lVar2 << 3,8);
      }
    }
    uVar4 = uVar1 - 1;
    uVar11 = uVar1;
    if (uVar1 == 0 || uVar4 == 0) {
      uVar11 = 1;
    }
    uVar5 = uVar11 & 3;
    param_1[1] = uVar1;
    if (uVar11 - 1 < 3) {
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
      } while ((uVar11 & 0xfffffffffffffffc) != uVar7);
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
      uVar11 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar5 = plVar6[1];
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar5 = uVar5 & uVar4;
      }
      else if (uVar1 <= uVar5) {
        uVar7 = 0;
        if (uVar1 != 0) {
          uVar7 = uVar5 / uVar1;
        }
        uVar5 = uVar5 - uVar7 * uVar1;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 6;
      plVar8 = (long *)*plVar6;
      if (plVar8 != (long *)0x0) {
        if (uVar11 < 2) {
          do {
            uVar11 = plVar8[1] & uVar4;
            if (uVar11 == uVar5) {
              uVar11 = uVar5;
            }
            else {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar11 * 8) == 0) {
                *(long **)(*param_1 + uVar11 * 8) = plVar6;
              }
              else {
                do {
                  plVar10 = plVar9;
                  plVar9 = (long *)*plVar10;
                  if (plVar9 == (long *)0x0) break;
                } while ((int)plVar8[2] == (int)plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar10 = **(long **)(*param_1 + uVar11 * 8);
                **(undefined8 **)(*param_1 + uVar11 * 8) = plVar8;
                plVar8 = plVar6;
                uVar11 = uVar5;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar5 = uVar11;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar8[1];
            if (uVar1 <= uVar11) {
              uVar4 = 0;
              if (uVar1 != 0) {
                uVar4 = uVar11 / uVar1;
              }
              uVar11 = uVar11 - uVar4 * uVar1;
            }
            if (uVar11 == uVar5) {
              uVar11 = uVar5;
            }
            else {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar11 * 8) == 0) {
                *(long **)(*param_1 + uVar11 * 8) = plVar6;
              }
              else {
                do {
                  plVar10 = plVar9;
                  plVar9 = (long *)*plVar10;
                  if (plVar9 == (long *)0x0) break;
                } while ((int)plVar8[2] == (int)plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar10 = **(long **)(*param_1 + uVar11 * 8);
                **(undefined8 **)(*param_1 + uVar11 * 8) = plVar8;
                plVar8 = plVar6;
                uVar11 = uVar5;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar5 = uVar11;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}


