/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7a090; name: FUN_00b7a090
 */


void FUN_00b7a090(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x21;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *param_2;
  lVar13 = *param_3;
  iVar1 = (int)param_2[1];
  uVar2 = *(undefined4 *)((long)param_2 + 0xc);
  uVar11 = param_1[1];
  uVar8 = lVar12 * 0xffff + (long)iVar1;
  if (uVar11 != 0) {
    uVar5 = uVar11 - 1;
    if ((uVar11 & uVar5) == 0) {
      unaff_x21 = uVar5 & uVar8;
      plVar9 = *(long **)(*param_1 + unaff_x21 * 8);
      if (plVar9 != (long *)0x0) {
        while ((plVar9 = (long *)*plVar9, plVar9 != (long *)0x0 &&
               (plVar9[1] == uVar8 || (plVar9[1] & uVar5) == unaff_x21))) {
          if (plVar9[2] == lVar12 && *(int *)(plVar9 + 3) == iVar1) {
            return;
          }
        }
      }
    }
    else {
      unaff_x21 = uVar8;
      if (uVar11 <= uVar8) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar8 / uVar11;
        }
        unaff_x21 = uVar8 - uVar5 * uVar11;
      }
      plVar9 = *(long **)(*param_1 + unaff_x21 * 8);
      if (plVar9 != (long *)0x0) {
        while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
          uVar5 = plVar9[1];
          if (uVar5 != uVar8) {
            if (uVar11 <= uVar5) {
              uVar10 = 0;
              if (uVar11 != 0) {
                uVar10 = uVar5 / uVar11;
              }
              uVar5 = uVar5 - uVar10 * uVar11;
            }
            if (uVar5 != unaff_x21) break;
          }
          if (plVar9[2] == lVar12 && *(int *)(plVar9 + 3) == iVar1) {
            return;
          }
        }
      }
    }
  }
  lVar3 = tpidr_el0;
  plVar9 = *(long **)(lVar3 + 0x30);
  if (plVar9 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar9 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x28,8);
  plVar9[1] = uVar8;
  plVar9[2] = lVar12;
  *(int *)(plVar9 + 3) = iVar1;
  *(undefined4 *)((long)plVar9 + 0x1c) = uVar2;
  plVar9[4] = lVar13;
  *plVar9 = 0;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar5 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
      uVar10 = std::__next_prime(uVar10);
      uVar11 = param_1[1];
    }
    if (uVar11 < uVar10) {
      uVar5 = uVar10;
LAB_00b7a25c:
      FUN_00bacc70(param_1,uVar5);
    }
    else if (uVar10 < uVar11) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar11 < 3) ||
         (uVar6 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
         1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar10) {
        uVar5 = uVar10;
      }
      if (uVar5 < uVar11) goto LAB_00b7a25c;
    }
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x21 = uVar11 - 1 & uVar8;
    }
    else if (uVar8 < uVar11) {
      unaff_x21 = uVar8;
    }
    else {
      uVar5 = 0;
      if (uVar11 != 0) {
        uVar5 = uVar8 / uVar11;
      }
      unaff_x21 = uVar8 - uVar5 * uVar11;
    }
  }
  lVar12 = *param_1;
  plVar7 = *(long **)(lVar12 + unaff_x21 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
    *(long **)(lVar12 + unaff_x21 * 8) = plVar7;
    if (*plVar9 == 0) goto LAB_00b7a390;
    uVar8 = *(ulong *)(*plVar9 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar8 = uVar8 & uVar11 - 1;
    }
    else if (uVar11 <= uVar8) {
      uVar5 = 0;
      if (uVar11 != 0) {
        uVar5 = uVar8 / uVar11;
      }
      uVar8 = uVar8 - uVar5 * uVar11;
    }
    plVar7 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar9 = *plVar7;
  }
  *plVar7 = (long)plVar9;
LAB_00b7a390:
  param_1[3] = param_1[3] + 1;
  return;
}


