/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b79ca0; name: FUN_00b79ca0
 */


void FUN_00b79ca0(long *param_1,long *param_2,long *param_3)

{
  byte *__s2;
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  byte bVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  ulong unaff_x26;
  
  lVar10 = *param_2;
  __s2 = (byte *)param_2[1];
  lVar13 = *param_3;
  bVar7 = *__s2;
  if (bVar7 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    pbVar11 = __s2;
    do {
      pbVar11 = pbVar11 + 1;
      lVar2 = lVar2 * 5 + (ulong)bVar7;
      bVar7 = *pbVar11;
    } while (bVar7 != 0);
  }
  uVar12 = param_1[1];
  uVar6 = lVar2 + lVar10 * 0xffff;
  if (uVar12 != 0) {
    uVar3 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x26 = uVar12 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar12 <= uVar6) {
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar9 = uVar6 / uVar12;
        }
        unaff_x26 = uVar6 - uVar9 * uVar12;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar8[1] != uVar6 && (plVar8[1] & uVar12 - 1) != unaff_x26) break;
          if ((plVar8[2] == lVar10) && (iVar1 = strcmp((char *)plVar8[3],(char *)__s2), iVar1 == 0))
          {
            return;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar8[1];
          if (uVar3 != uVar6) {
            if (uVar12 <= uVar3) {
              uVar9 = 0;
              if (uVar12 != 0) {
                uVar9 = uVar3 / uVar12;
              }
              uVar3 = uVar3 - uVar9 * uVar12;
            }
            if (uVar3 != unaff_x26) break;
          }
          if ((plVar8[2] == lVar10) && (iVar1 = strcmp((char *)plVar8[3],(char *)__s2), iVar1 == 0))
          {
            return;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  lVar2 = tpidr_el0;
  plVar8 = *(long **)(lVar2 + 0x30);
  if (plVar8 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar8 = DAT_04859430;
    *(long **)(lVar2 + 0x30) = DAT_04859430;
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x28,8);
  plVar8[2] = lVar10;
  plVar8[3] = (long)__s2;
  plVar8[4] = lVar13;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  if ((uVar12 == 0) || (*(float *)(param_1 + 4) * (float)uVar12 < (float)(param_1[3] + 1))) {
    uVar3 = (ulong)(uVar12 < 3 || (uVar12 & uVar12 - 1) != 0) | uVar12 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar3) {
      uVar9 = uVar3;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__next_prime(uVar9);
      uVar12 = param_1[1];
    }
    if (uVar12 < uVar9) {
      uVar3 = uVar9;
LAB_00b79ed0:
      FUN_00bac300(param_1,uVar3);
    }
    else if (uVar9 < uVar12) {
      uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar12 < 3) ||
         (uVar4 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
         uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333),
         1 < (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar3 = std::__next_prime(uVar3);
      }
      else if (1 < uVar3) {
        uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
      }
      if (uVar3 <= uVar9) {
        uVar3 = uVar9;
      }
      if (uVar3 < uVar12) goto LAB_00b79ed0;
    }
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = uVar12 - 1 & uVar6;
    }
    else if (uVar6 < uVar12) {
      unaff_x26 = uVar6;
    }
    else {
      uVar3 = 0;
      if (uVar12 != 0) {
        uVar3 = uVar6 / uVar12;
      }
      unaff_x26 = uVar6 - uVar3 * uVar12;
    }
  }
  lVar10 = *param_1;
  plVar5 = *(long **)(lVar10 + unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar10 + unaff_x26 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_00b7a004;
    uVar6 = *(ulong *)(*plVar8 + 8);
    if ((uVar12 & uVar12 - 1) == 0) {
      uVar6 = uVar6 & uVar12 - 1;
    }
    else if (uVar12 <= uVar6) {
      uVar3 = 0;
      if (uVar12 != 0) {
        uVar3 = uVar6 / uVar12;
      }
      uVar6 = uVar6 - uVar3 * uVar12;
    }
    plVar5 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_00b7a004:
  param_1[3] = param_1[3] + 1;
  return;
}


