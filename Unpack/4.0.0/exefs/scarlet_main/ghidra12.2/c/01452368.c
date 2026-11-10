/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01452368; name: FUN_01452368
 */


void FUN_01452368(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar6 = param_1[1];
  uVar13 = param_2;
  if (!(param_2 < uVar6 || param_2 == uVar6)) {
LAB_014523a4:
    if (uVar13 == 0) {
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        lVar15 = param_1[1];
        plVar8 = (long *)param_1[2];
        uVar13 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar13 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar4,lVar15 << 3,8);
        }
        else {
          FUN_00c48fe8(plVar8,lVar4,lVar15 << 3,8);
        }
      }
      param_1[1] = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar13 << 3,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)param_1[2] + 0xe8))();
      }
      lVar15 = *param_1;
      *param_1 = lVar4;
      if (lVar15 != 0) {
        lVar4 = param_1[1];
        plVar8 = (long *)param_1[2];
        uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar15,lVar4 << 3,8);
        }
        else {
          FUN_00c48fe8(plVar8,lVar15,lVar4 << 3,8);
        }
      }
      uVar9 = uVar13 - 1;
      uVar6 = uVar13;
      if (uVar13 == 0 || uVar9 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6 & 3;
      param_1[1] = uVar13;
      if (uVar6 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar10 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar10 * 8 + 0x10) = 0;
          lVar4 = uVar10 * 8;
          uVar10 = uVar10 + 4;
          *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar10);
      }
      if (uVar7 != 0) {
        lVar4 = uVar10 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar4) = 0;
          uVar7 = uVar7 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar7 != 0);
      }
      plVar8 = (long *)param_1[6];
      if (plVar8 != (long *)0x0) {
        uVar6 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
        uVar7 = plVar8[1];
        uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar6 < 2) {
          uVar7 = uVar7 & uVar9;
        }
        else if (uVar13 <= uVar7) {
          uVar10 = 0;
          if (uVar13 != 0) {
            uVar10 = uVar7 / uVar13;
          }
          uVar7 = uVar7 - uVar10 * uVar13;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 6;
        puVar3 = PTR_DAT_047d8b70;
        plVar11 = (long *)*plVar8;
        if (plVar11 != (long *)0x0) {
          if (uVar6 < 2) {
            do {
              uVar13 = plVar11[1] & uVar9;
              if (uVar13 != uVar7) {
                if (*(long *)(*param_1 + uVar13 * 8) == 0) {
                  *(long **)(*param_1 + uVar13 * 8) = plVar8;
                  uVar7 = uVar13;
                }
                else {
                  plVar12 = plVar11;
                  do {
                    plVar14 = plVar12;
                    plVar12 = (long *)*plVar14;
                    if (plVar12 == (long *)0x0) break;
                    plVar1 = (long *)puVar3;
                    if (plVar11[2] != 0) {
                      plVar1 = (long *)(plVar11[2] + 0x30);
                    }
                    plVar2 = (long *)puVar3;
                    if (plVar12[2] != 0) {
                      plVar2 = (long *)(plVar12[2] + 0x30);
                    }
                  } while (*plVar1 == *plVar2);
                  *plVar8 = (long)plVar12;
                  *plVar14 = **(long **)(*param_1 + uVar13 * 8);
                  **(undefined8 **)(*param_1 + uVar13 * 8) = plVar11;
                  plVar11 = plVar8;
                }
              }
              plVar12 = (long *)*plVar11;
              plVar8 = plVar11;
              plVar11 = plVar12;
            } while (plVar12 != (long *)0x0);
          }
          else {
            do {
              uVar6 = plVar11[1];
              if (uVar13 <= uVar6) {
                uVar9 = 0;
                if (uVar13 != 0) {
                  uVar9 = uVar6 / uVar13;
                }
                uVar6 = uVar6 - uVar9 * uVar13;
              }
              if (uVar6 != uVar7) {
                plVar12 = plVar11;
                if (*(long *)(*param_1 + uVar6 * 8) == 0) {
                  *(long **)(*param_1 + uVar6 * 8) = plVar8;
                  uVar7 = uVar6;
                }
                else {
                  do {
                    plVar14 = plVar12;
                    plVar12 = (long *)*plVar14;
                    if (plVar12 == (long *)0x0) break;
                    plVar1 = (long *)puVar3;
                    if (plVar11[2] != 0) {
                      plVar1 = (long *)(plVar11[2] + 0x30);
                    }
                    plVar2 = (long *)puVar3;
                    if (plVar12[2] != 0) {
                      plVar2 = (long *)(plVar12[2] + 0x30);
                    }
                  } while (*plVar1 == *plVar2);
                  *plVar8 = (long)plVar12;
                  *plVar14 = **(long **)(*param_1 + uVar6 * 8);
                  **(undefined8 **)(*param_1 + uVar6 * 8) = plVar11;
                  plVar11 = plVar8;
                }
              }
              plVar12 = (long *)*plVar11;
              plVar8 = plVar11;
              plVar11 = plVar12;
            } while (plVar12 != (long *)0x0);
          }
        }
      }
    }
    return;
  }
  if (param_2 < uVar6) {
    uVar13 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
    if ((uVar6 < 3) ||
       (uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555),
       uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333),
       1 < (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      uVar13 = std::__next_prime(uVar13);
    }
    else if (1 < uVar13) {
      uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
    }
    if (uVar13 <= param_2) {
      uVar13 = param_2;
    }
    if (uVar13 < uVar6) goto LAB_014523a4;
  }
  return;
}


