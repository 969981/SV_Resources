/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01571500; name: FUN_01571500
 */


long * FUN_01571500(long *param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x23;
  
  uVar9 = *param_2;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar9;
      plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) || (plVar7[1] != uVar9 && (plVar7[1] & uVar3) != unaff_x23))
          goto LAB_015715cc;
        } while (plVar7[2] != uVar9);
        goto LAB_01571694;
      }
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar3 * uVar8;
      }
      plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
      if (plVar7 != (long *)0x0) {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_015715cc;
          uVar3 = plVar7[1];
          if (uVar3 != uVar9) {
            if (uVar8 <= uVar3) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar3 / uVar8;
              }
              uVar3 = uVar3 - uVar2 * uVar8;
            }
            if (uVar3 != unaff_x23) goto LAB_015715cc;
          }
        } while (plVar7[2] != uVar9);
        goto LAB_01571694;
      }
    }
  }
LAB_015715cc:
  lVar6 = tpidr_el0;
  plVar7 = *(long **)(lVar6 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar6 + 0x30) = DAT_04859430;
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x20,8);
  plVar7[1] = uVar9;
  plVar7[2] = uVar9;
  *(undefined4 *)(plVar7 + 3) = 0;
  *plVar7 = 0;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar3 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
      uVar3 = std::__next_prime(uVar3);
    }
    uVar8 = param_1[1];
    if (uVar8 < uVar3) {
      uVar2 = uVar3;
LAB_01571708:
      FUN_015720e4(param_1,uVar2);
    }
    else if (uVar3 < uVar8) {
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) ||
         (uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555),
         uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333),
         1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar2 = std::__next_prime(uVar2);
      }
      else if (1 < uVar2) {
        uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
      }
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      if (uVar2 < uVar8) goto LAB_01571708;
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar9;
    }
    else if (uVar9 < uVar8) {
      unaff_x23 = uVar9;
    }
    else {
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = uVar9 / uVar8;
      }
      unaff_x23 = uVar9 - uVar3 * uVar8;
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(lVar6 + unaff_x23 * 8) = plVar4;
    if (*plVar7 != 0) {
      uVar9 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar3 * uVar8;
      }
      plVar4 = (long *)(*param_1 + uVar9 * 8);
      goto LAB_01571684;
    }
  }
  else {
    *plVar7 = *plVar4;
LAB_01571684:
    *plVar4 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
LAB_01571694:
  return plVar7 + 3;
}


