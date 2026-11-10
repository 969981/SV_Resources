/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014297e8; name: FUN_014297e8
 */


void FUN_014297e8(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar14 = param_1[1];
  if (!(param_2 >= uVar14 && param_2 != uVar14)) {
    if (param_2 < uVar14) {
      uVar4 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar14 < 3) ||
         (uVar7 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar4 = std::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (uVar4 <= param_2) {
        uVar4 = param_2;
      }
      if (uVar4 < uVar14) goto LAB_01429830;
    }
    return;
  }
  uVar4 = param_2;
LAB_01429830:
  if (uVar4 == 0) {
    lVar5 = *param_1;
    *param_1 = 0;
    if (lVar5 != 0) {
      lVar15 = param_1[1];
      plVar9 = (long *)param_1[2];
      uVar14 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar14 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar5,lVar15 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar5,lVar15 << 3,8);
      }
    }
    param_1[1] = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar4 << 3,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar15 = *param_1;
    *param_1 = lVar5;
    if (lVar15 != 0) {
      lVar5 = param_1[1];
      plVar9 = (long *)param_1[2];
      uVar14 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar14 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar15,lVar5 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar15,lVar5 << 3,8);
      }
    }
    uVar7 = uVar4 - 1;
    uVar14 = uVar4;
    if (uVar4 == 0 || uVar7 == 0) {
      uVar14 = 1;
    }
    uVar8 = uVar14 & 3;
    param_1[1] = uVar4;
    if (uVar14 - 1 < 3) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar10 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar10 * 8 + 0x10) = 0;
        lVar5 = uVar10 * 8;
        uVar10 = uVar10 + 4;
        *(undefined8 *)(*param_1 + lVar5 + 0x18) = 0;
      } while ((uVar14 & 0xfffffffffffffffc) != uVar10);
    }
    if (uVar8 != 0) {
      lVar5 = uVar10 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar5) = 0;
        uVar8 = uVar8 - 1;
        lVar5 = lVar5 + 8;
      } while (uVar8 != 0);
    }
    plVar9 = (long *)param_1[6];
    if (plVar9 != (long *)0x0) {
      uVar14 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
      uVar8 = plVar9[1];
      uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar14 < 2) {
        uVar8 = uVar8 & uVar7;
      }
      else if (uVar4 <= uVar8) {
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = uVar8 / uVar4;
        }
        uVar8 = uVar8 - uVar10 * uVar4;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_1 + 6;
      puVar3 = PTR_DAT_047d8b70;
      plVar11 = (long *)*plVar9;
      if (plVar11 != (long *)0x0) {
        if (uVar14 < 2) {
          do {
            uVar14 = plVar11[1] & uVar7;
            if (uVar14 != uVar8) {
              if (*(long *)(*param_1 + uVar14 * 8) == 0) {
                *(long **)(*param_1 + uVar14 * 8) = plVar9;
                uVar8 = uVar14;
              }
              else {
                plVar12 = plVar11;
                do {
                  plVar13 = plVar12;
                  plVar12 = (long *)*plVar13;
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
                *plVar9 = (long)plVar12;
                *plVar13 = **(long **)(*param_1 + uVar14 * 8);
                **(undefined8 **)(*param_1 + uVar14 * 8) = plVar11;
                plVar11 = plVar9;
              }
            }
            plVar12 = (long *)*plVar11;
            plVar9 = plVar11;
            plVar11 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar11[1];
            if (uVar4 <= uVar14) {
              uVar7 = 0;
              if (uVar4 != 0) {
                uVar7 = uVar14 / uVar4;
              }
              uVar14 = uVar14 - uVar7 * uVar4;
            }
            if (uVar14 != uVar8) {
              plVar12 = plVar11;
              if (*(long *)(*param_1 + uVar14 * 8) == 0) {
                *(long **)(*param_1 + uVar14 * 8) = plVar9;
                uVar8 = uVar14;
              }
              else {
                do {
                  plVar13 = plVar12;
                  plVar12 = (long *)*plVar13;
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
                *plVar9 = (long)plVar12;
                *plVar13 = **(long **)(*param_1 + uVar14 * 8);
                **(undefined8 **)(*param_1 + uVar14 * 8) = plVar11;
                plVar11 = plVar9;
              }
            }
            plVar12 = (long *)*plVar11;
            plVar9 = plVar11;
            plVar11 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  return;
}


