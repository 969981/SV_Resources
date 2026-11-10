/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01755490; name: FUN_01755490
 */


void FUN_01755490(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar11 = param_1[1];
  if (param_2 <= uVar11) {
    if (param_2 < uVar11) {
      uVar2 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar11 < 3) ||
         (uVar5 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333),
         1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar2 = std::__next_prime(uVar2);
      }
      else if (1 < uVar2) {
        uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      }
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
      if (uVar2 < uVar11) goto LAB_017554c4;
    }
    return;
  }
  uVar2 = param_2;
LAB_017554c4:
  plVar6 = param_1 + 1;
  if (uVar2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      FUN_0175581c(plVar6);
    }
    *plVar6 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar2 << 3,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      FUN_0175581c(plVar6);
    }
    uVar5 = uVar2 - 1;
    uVar11 = uVar2;
    if (uVar2 == 0 || uVar5 == 0) {
      uVar11 = 1;
    }
    param_1[1] = uVar2;
    *(undefined8 *)*param_1 = 0;
    if ((((1 < uVar2) && (*(undefined8 *)(*param_1 + 8) = 0, uVar11 != 2)) &&
        (*(undefined8 *)(*param_1 + 0x10) = 0, uVar11 != 3)) &&
       (*(undefined8 *)(*param_1 + 0x18) = 0, uVar11 != 4)) {
      uVar7 = 4;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar11 != uVar7);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar11 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar7 = plVar6[1];
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar2 <= uVar7) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = uVar7 / uVar2;
        }
        uVar7 = uVar7 - uVar1 * uVar2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 6;
      plVar8 = (long *)*plVar6;
      if (plVar8 != (long *)0x0) {
        if (uVar11 < 2) {
          do {
            uVar11 = plVar8[1] & uVar5;
            if (uVar11 != uVar7) {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar11 * 8) == 0) {
                *(long **)(*param_1 + uVar11 * 8) = plVar6;
                uVar7 = uVar11;
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
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar8[1];
            if (uVar2 <= uVar11) {
              uVar5 = 0;
              if (uVar2 != 0) {
                uVar5 = uVar11 / uVar2;
              }
              uVar11 = uVar11 - uVar5 * uVar2;
            }
            if (uVar11 != uVar7) {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar11 * 8) == 0) {
                *(long **)(*param_1 + uVar11 * 8) = plVar6;
                uVar7 = uVar11;
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


