/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010cbe08; name: FUN_010cbe08
 */


void FUN_010cbe08(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar4 = param_1[1];
  uVar10 = param_2;
  if (param_2 <= uVar4) {
    if (param_2 < uVar4) {
      uVar10 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar4 < 3) ||
         (uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555),
         uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
         1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar10 = std::__next_prime(uVar10);
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar10 <= param_2) {
        uVar10 = param_2;
      }
      if (uVar10 < uVar4) goto LAB_010cbe34;
    }
    return;
  }
LAB_010cbe34:
  if (uVar10 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      lVar12 = param_1[1];
      plVar5 = (long *)param_1[2];
      uVar10 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar10 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar2,lVar12 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar2,lVar12 << 3,8);
      }
    }
    param_1[1] = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar10 << 3,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar12 = *param_1;
    *param_1 = lVar2;
    if (lVar12 != 0) {
      lVar2 = param_1[1];
      plVar5 = (long *)param_1[2];
      uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar2 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar12,lVar2 << 3,8);
      }
    }
    uVar6 = uVar10 - 1;
    uVar4 = uVar10;
    if (uVar10 == 0 || uVar6 == 0) {
      uVar4 = 1;
    }
    param_1[1] = uVar10;
    *(undefined8 *)*param_1 = 0;
    if ((((1 < uVar10) && (*(undefined8 *)(*param_1 + 8) = 0, uVar4 != 2)) &&
        (*(undefined8 *)(*param_1 + 0x10) = 0, uVar4 != 3)) &&
       (((*(undefined8 *)(*param_1 + 0x18) = 0, uVar4 != 4 &&
         (*(undefined8 *)(*param_1 + 0x20) = 0, uVar4 != 5)) &&
        (*(undefined8 *)(*param_1 + 0x28) = 0, uVar4 != 6)))) {
      uVar7 = 6;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
    }
    plVar5 = (long *)param_1[6];
    if (plVar5 != (long *)0x0) {
      uVar4 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar7 = plVar5[1];
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar4 < 2) {
        uVar7 = uVar7 & uVar6;
      }
      else if (uVar10 <= uVar7) {
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar7 / uVar10;
        }
        uVar7 = uVar7 - uVar1 * uVar10;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 6;
      plVar8 = (long *)*plVar5;
      if (plVar8 != (long *)0x0) {
        if (uVar4 < 2) {
          do {
            uVar10 = plVar8[1] & uVar6;
            if (uVar10 != uVar7) {
              if (*(long *)(*param_1 + uVar10 * 8) == 0) {
                *(long **)(*param_1 + uVar10 * 8) = plVar5;
                uVar7 = uVar10;
              }
              else {
                plVar9 = plVar8;
                do {
                  plVar11 = plVar9;
                  plVar9 = (long *)*plVar11;
                  if (plVar9 == (long *)0x0) break;
                } while (plVar8[2] == plVar9[2]);
                *plVar5 = (long)plVar9;
                *plVar11 = **(long **)(*param_1 + uVar10 * 8);
                **(undefined8 **)(*param_1 + uVar10 * 8) = plVar8;
                plVar8 = plVar5;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar5 = plVar8;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar4 = plVar8[1];
            if (uVar10 <= uVar4) {
              uVar6 = 0;
              if (uVar10 != 0) {
                uVar6 = uVar4 / uVar10;
              }
              uVar4 = uVar4 - uVar6 * uVar10;
            }
            if (uVar4 != uVar7) {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar4 * 8) == 0) {
                *(long **)(*param_1 + uVar4 * 8) = plVar5;
                uVar7 = uVar4;
              }
              else {
                do {
                  plVar11 = plVar9;
                  plVar9 = (long *)*plVar11;
                  if (plVar9 == (long *)0x0) break;
                } while (plVar8[2] == plVar9[2]);
                *plVar5 = (long)plVar9;
                *plVar11 = **(long **)(*param_1 + uVar4 * 8);
                **(undefined8 **)(*param_1 + uVar4 * 8) = plVar8;
                plVar8 = plVar5;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar5 = plVar8;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}


