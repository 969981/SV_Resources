/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0120a738; name: FUN_0120a738
 */


void FUN_0120a738(long *param_1,ulong param_2)

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
  ulong uVar10;
  long *plVar11;
  
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
         (uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555),
         uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333),
         1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar10 = std::__next_prime(uVar10);
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar10 <= param_2) {
        uVar10 = param_2;
      }
      if (uVar10 < uVar4) goto LAB_0120a764;
    }
    return;
  }
LAB_0120a764:
  plVar6 = param_1 + 1;
  if (uVar10 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      FUN_0120aabc(plVar6);
    }
    *plVar6 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar10 << 3,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      FUN_0120aabc(plVar6);
    }
    uVar5 = uVar10 - 1;
    uVar4 = uVar10;
    if (uVar10 == 0 || uVar5 == 0) {
      uVar4 = 1;
    }
    param_1[1] = uVar10;
    *(undefined8 *)*param_1 = 0;
    if (((1 < uVar10) && (*(undefined8 *)(*param_1 + 8) = 0, uVar4 != 2)) &&
       (*(undefined8 *)(*param_1 + 0x10) = 0, uVar4 != 3)) {
      uVar7 = 3;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar4 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar7 = plVar6[1];
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar4 < 2) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar10 <= uVar7) {
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar7 / uVar10;
        }
        uVar7 = uVar7 - uVar1 * uVar10;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 6;
      plVar8 = (long *)*plVar6;
      if (plVar8 != (long *)0x0) {
        if (uVar4 < 2) {
          do {
            uVar10 = plVar8[1] & uVar5;
            if (uVar10 == uVar7) {
              uVar10 = uVar7;
            }
            else {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar10 * 8) == 0) {
                *(long **)(*param_1 + uVar10 * 8) = plVar6;
              }
              else {
                do {
                  plVar11 = plVar9;
                  plVar9 = (long *)*plVar11;
                  if (plVar9 == (long *)0x0) break;
                } while ((short)plVar8[2] == (short)plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar11 = **(long **)(*param_1 + uVar10 * 8);
                **(undefined8 **)(*param_1 + uVar10 * 8) = plVar8;
                plVar8 = plVar6;
                uVar10 = uVar7;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar7 = uVar10;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar4 = plVar8[1];
            if (uVar10 <= uVar4) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar4 / uVar10;
              }
              uVar4 = uVar4 - uVar5 * uVar10;
            }
            if (uVar4 == uVar7) {
              uVar4 = uVar7;
            }
            else {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar4 * 8) == 0) {
                *(long **)(*param_1 + uVar4 * 8) = plVar6;
              }
              else {
                do {
                  plVar11 = plVar9;
                  plVar9 = (long *)*plVar11;
                  if (plVar9 == (long *)0x0) break;
                } while ((short)plVar8[2] == (short)plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar11 = **(long **)(*param_1 + uVar4 * 8);
                **(undefined8 **)(*param_1 + uVar4 * 8) = plVar8;
                plVar8 = plVar6;
                uVar4 = uVar7;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar7 = uVar4;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}


