/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01617a40; name: FUN_01617a40
 */


void FUN_01617a40(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar12 = param_1[1];
  if (param_2 <= uVar12) {
    if (param_2 < uVar12) {
      uVar2 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar12 < 3) ||
         (uVar5 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
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
      if (uVar2 < uVar12) goto LAB_01617a7c;
    }
    return;
  }
  uVar2 = param_2;
LAB_01617a7c:
  puVar1 = (ulong *)(param_1 + 1);
  if (uVar2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      FUN_01617de8(puVar1);
    }
    *puVar1 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar2 << 3,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      FUN_01617de8(puVar1);
    }
    uVar5 = uVar2 - 1;
    uVar12 = uVar2;
    if (uVar2 == 0 || uVar5 == 0) {
      uVar12 = 1;
    }
    uVar6 = uVar12 & 3;
    *puVar1 = uVar2;
    if (uVar12 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar8 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar8 * 8 + 0x10) = 0;
        lVar3 = uVar8 * 8;
        uVar8 = uVar8 + 4;
        *(undefined8 *)(*param_1 + lVar3 + 0x18) = 0;
      } while ((uVar12 & 0xfffffffffffffffc) != uVar8);
    }
    if (uVar6 != 0) {
      lVar3 = uVar8 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar3) = 0;
        uVar6 = uVar6 - 1;
        lVar3 = lVar3 + 8;
      } while (uVar6 != 0);
    }
    plVar7 = (long *)param_1[6];
    if (plVar7 != (long *)0x0) {
      uVar12 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar6 = plVar7[1];
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar6 = uVar6 & uVar5;
      }
      else if (uVar2 <= uVar6) {
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar8 = uVar6 / uVar2;
        }
        uVar6 = uVar6 - uVar8 * uVar2;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 6;
      plVar9 = (long *)*plVar7;
      if (plVar9 != (long *)0x0) {
        if (uVar12 < 2) {
          do {
            uVar12 = plVar9[1] & uVar5;
            if (uVar12 == uVar6) {
              plVar7 = plVar9;
            }
            else {
              plVar11 = plVar9;
              if (*(long *)(*param_1 + uVar12 * 8) == 0) {
                *(long **)(*param_1 + uVar12 * 8) = plVar7;
                plVar7 = plVar9;
                uVar6 = uVar12;
              }
              else {
                do {
                  plVar10 = plVar11;
                  plVar11 = (long *)*plVar10;
                  if (plVar11 == (long *)0x0) break;
                } while (plVar9[2] == plVar11[2]);
                *plVar7 = (long)plVar11;
                *plVar10 = **(long **)(*param_1 + uVar12 * 8);
                **(undefined8 **)(*param_1 + uVar12 * 8) = plVar9;
              }
            }
            plVar9 = (long *)*plVar7;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar9[1];
            if (uVar2 <= uVar12) {
              uVar5 = 0;
              if (uVar2 != 0) {
                uVar5 = uVar12 / uVar2;
              }
              uVar12 = uVar12 - uVar5 * uVar2;
            }
            if (uVar12 == uVar6) {
              plVar7 = plVar9;
            }
            else {
              plVar11 = plVar9;
              if (*(long *)(*param_1 + uVar12 * 8) == 0) {
                *(long **)(*param_1 + uVar12 * 8) = plVar7;
                plVar7 = plVar9;
                uVar6 = uVar12;
              }
              else {
                do {
                  plVar10 = plVar11;
                  plVar11 = (long *)*plVar10;
                  if (plVar11 == (long *)0x0) break;
                } while (plVar9[2] == plVar11[2]);
                *plVar7 = (long)plVar11;
                *plVar10 = **(long **)(*param_1 + uVar12 * 8);
                **(undefined8 **)(*param_1 + uVar12 * 8) = plVar9;
              }
            }
            plVar9 = (long *)*plVar7;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}


