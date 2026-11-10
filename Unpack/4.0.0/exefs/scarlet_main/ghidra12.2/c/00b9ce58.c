/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b9ce58; name: FUN_00b9ce58
 */


undefined4 FUN_00b9ce58(long *param_1,long param_2,byte *param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  byte bVar7;
  byte *__s2;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong unaff_x27;
  
  __s2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __s2 = param_3 + 1;
  }
  bVar7 = *__s2;
  if (bVar7 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    pbVar10 = __s2;
    do {
      pbVar10 = pbVar10 + 1;
      lVar2 = lVar2 * 5 + (ulong)bVar7;
      bVar7 = *pbVar10;
    } while (bVar7 != 0);
  }
  uVar11 = param_1[1];
  uVar6 = lVar2 + param_2 * 0xffff;
  if (uVar11 != 0) {
    uVar3 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      unaff_x27 = uVar11 - 1 & uVar6;
    }
    else {
      unaff_x27 = uVar6;
      if (uVar11 <= uVar6) {
        uVar9 = 0;
        if (uVar11 != 0) {
          uVar9 = uVar6 / uVar11;
        }
        unaff_x27 = uVar6 - uVar9 * uVar11;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x27 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar8[1] != uVar6 && (plVar8[1] & uVar11 - 1) != unaff_x27) break;
          if ((plVar8[2] == param_2) && (iVar1 = strcmp((char *)plVar8[3],(char *)__s2), iVar1 == 0)
             ) {
            return 0;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar8[1];
          if (uVar3 != uVar6) {
            if (uVar11 <= uVar3) {
              uVar9 = 0;
              if (uVar11 != 0) {
                uVar9 = uVar3 / uVar11;
              }
              uVar3 = uVar3 - uVar9 * uVar11;
            }
            if (uVar3 != unaff_x27) break;
          }
          if ((plVar8[2] == param_2) && (iVar1 = strcmp((char *)plVar8[3],(char *)__s2), iVar1 == 0)
             ) {
            return 0;
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
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x30,8);
  plVar8[2] = param_2;
  plVar8[3] = (long)__s2;
  plVar8[4] = param_4;
  plVar8[5] = param_5;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar3 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar3) {
      uVar9 = uVar3;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__next_prime(uVar9);
      uVar11 = param_1[1];
    }
    if (uVar11 < uVar9) {
      uVar3 = uVar9;
LAB_00b9d09c:
      FUN_00baa9d0(param_1,uVar3);
    }
    else if (uVar9 < uVar11) {
      uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar11 < 3) ||
         (uVar4 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
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
      if (uVar3 < uVar11) goto LAB_00b9d09c;
    }
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x27 = uVar11 - 1 & uVar6;
    }
    else if (uVar6 < uVar11) {
      unaff_x27 = uVar6;
    }
    else {
      uVar3 = 0;
      if (uVar11 != 0) {
        uVar3 = uVar6 / uVar11;
      }
      unaff_x27 = uVar6 - uVar3 * uVar11;
    }
  }
  lVar2 = *param_1;
  plVar5 = *(long **)(lVar2 + unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar2 + unaff_x27 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_00b9d1d0;
    uVar6 = *(ulong *)(*plVar8 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar6 = uVar6 & uVar11 - 1;
    }
    else if (uVar11 <= uVar6) {
      uVar3 = 0;
      if (uVar11 != 0) {
        uVar3 = uVar6 / uVar11;
      }
      uVar6 = uVar6 - uVar3 * uVar11;
    }
    plVar5 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_00b9d1d0:
  param_1[3] = param_1[3] + 1;
  return 1;
}


