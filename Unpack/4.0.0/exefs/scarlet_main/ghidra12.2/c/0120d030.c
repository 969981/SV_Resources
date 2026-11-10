/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0120d030; name: FUN_0120d030
 */


void FUN_0120d030(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar5 = param_1[1];
  if (!(param_2 >= uVar5 && param_2 != uVar5)) {
    if (param_2 < uVar5) {
      uVar2 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar5 < 3) ||
         (uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar2 = std::__next_prime(uVar2);
      }
      else if (1 < uVar2) {
        uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      }
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
      if (uVar2 < uVar5) goto LAB_0120d064;
    }
    return;
  }
  uVar2 = param_2;
LAB_0120d064:
  if (uVar2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      lVar12 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar12 << 3,0x10);
      }
      else {
        FUN_00c48fe8(plVar6,lVar3,lVar12 << 3,0x10);
      }
    }
    param_1[1] = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar2 << 3,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar12 = *param_1;
    *param_1 = lVar3;
    if (lVar12 != 0) {
      lVar3 = param_1[1];
      plVar6 = (long *)param_1[2];
      uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar12,lVar3 << 3,0x10);
      }
      else {
        FUN_00c48fe8(plVar6,lVar12,lVar3 << 3,0x10);
      }
    }
    uVar7 = uVar2 - 1;
    uVar5 = uVar2;
    if (uVar2 == 0 || uVar7 == 0) {
      uVar5 = 1;
    }
    param_1[1] = uVar2;
    *(undefined8 *)*param_1 = 0;
    if (((1 < uVar2) && (*(undefined8 *)(*param_1 + 8) = 0, uVar5 != 2)) &&
       (*(undefined8 *)(*param_1 + 0x10) = 0, uVar5 != 3)) {
      uVar8 = 3;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar5 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar8 = plVar6[1];
      uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar5 < 2) {
        uVar8 = uVar8 & uVar7;
      }
      else if (uVar2 <= uVar8) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = uVar8 / uVar2;
        }
        uVar8 = uVar8 - uVar1 * uVar2;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_1 + 6;
      plVar9 = (long *)*plVar6;
      if (plVar9 != (long *)0x0) {
        if (uVar5 < 2) {
          do {
            uVar5 = plVar9[1] & uVar7;
            if (uVar5 != uVar8) {
              if (*(long *)(*param_1 + uVar5 * 8) == 0) {
                *(long **)(*param_1 + uVar5 * 8) = plVar6;
                uVar8 = uVar5;
              }
              else {
                plVar10 = plVar9;
                do {
                  plVar11 = plVar10;
                  plVar10 = (long *)*plVar11;
                  if (plVar10 == (long *)0x0) break;
                } while (plVar9[2] == plVar10[2]);
                *plVar6 = (long)plVar10;
                *plVar11 = **(long **)(*param_1 + uVar5 * 8);
                **(undefined8 **)(*param_1 + uVar5 * 8) = plVar9;
                plVar9 = plVar6;
              }
            }
            plVar10 = (long *)*plVar9;
            plVar6 = plVar9;
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar5 = plVar9[1];
            if (uVar2 <= uVar5) {
              uVar7 = 0;
              if (uVar2 != 0) {
                uVar7 = uVar5 / uVar2;
              }
              uVar5 = uVar5 - uVar7 * uVar2;
            }
            if (uVar5 != uVar8) {
              plVar10 = plVar9;
              if (*(long *)(*param_1 + uVar5 * 8) == 0) {
                *(long **)(*param_1 + uVar5 * 8) = plVar6;
                uVar8 = uVar5;
              }
              else {
                do {
                  plVar11 = plVar10;
                  plVar10 = (long *)*plVar11;
                  if (plVar10 == (long *)0x0) break;
                } while (plVar9[2] == plVar10[2]);
                *plVar6 = (long)plVar10;
                *plVar11 = **(long **)(*param_1 + uVar5 * 8);
                **(undefined8 **)(*param_1 + uVar5 * 8) = plVar9;
                plVar9 = plVar6;
              }
            }
            plVar10 = (long *)*plVar9;
            plVar6 = plVar9;
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
  return;
}


