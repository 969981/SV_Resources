/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01297c44; name: FUN_01297c44
 */


long * FUN_01297c44(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  long lVar12;
  
  uVar1 = *param_2;
  uVar10 = (ulong)uVar1;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar11 - 1U & uVar1);
      plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          plVar9 = (long *)*plVar9;
          if ((plVar9 == (long *)0x0) ||
             (plVar9[1] != uVar10 && (plVar9[1] & uVar11 - 1) != unaff_x25)) goto LAB_01297cd8;
        } while (*(uint *)(plVar9 + 2) != uVar1);
        goto LAB_01297f30;
      }
    }
    else {
      unaff_x25 = uVar10;
      if (uVar11 <= uVar10) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar10 / uVar11;
        }
        unaff_x25 = uVar10 - uVar6 * uVar11;
      }
      plVar9 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_01297cd8;
          uVar6 = plVar9[1];
          if (uVar6 != uVar10) {
            if (uVar11 <= uVar6) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar6 / uVar11;
              }
              uVar6 = uVar6 - uVar5 * uVar11;
            }
            if (uVar6 != unaff_x25) goto LAB_01297cd8;
          }
        } while (*(uint *)(plVar9 + 2) != uVar1);
        goto LAB_01297f30;
      }
    }
  }
LAB_01297cd8:
  plVar9 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x50,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 0xe8))();
  }
  lVar12 = param_1[7];
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    uVar2 = *param_2;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[5] = 0;
    *(uint *)(plVar9 + 2) = uVar2;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    FUN_020ee0a4();
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar2 = *param_2;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[5] = 0;
    *(uint *)(plVar9 + 2) = uVar2;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    FUN_020ee0a4();
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *plVar9 = 0;
  plVar9[1] = uVar10;
  if ((uVar11 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar11 < (float)(param_1[0xb] + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar6 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar6 <= uVar11) {
      uVar6 = uVar11;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      uVar6 = std::__next_prime(uVar6);
    }
    uVar11 = param_1[1];
    if (uVar11 < uVar6) {
      uVar5 = uVar6;
LAB_01297e04:
      FUN_02af2f98(param_1,uVar5);
    }
    else if (uVar6 < uVar11) {
      uVar5 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar11 < 3) ||
         (uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar11) goto LAB_01297e04;
    }
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar11 - 1U & uVar1);
    }
    else if (uVar10 < uVar11) {
      unaff_x25 = uVar10;
    }
    else {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar10 / uVar11;
      }
      unaff_x25 = uVar10 - uVar6 * uVar11;
    }
  }
  plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 6;
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
    *(long **)(*param_1 + unaff_x25 * 8) = plVar8;
    if (*plVar9 != 0) {
      uVar10 = *(ulong *)(*plVar9 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar10 = uVar10 & uVar11 - 1;
      }
      else if (uVar11 <= uVar10) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar10 / uVar11;
        }
        uVar10 = uVar10 - uVar6 * uVar11;
      }
      plVar8 = (long *)(*param_1 + uVar10 * 8);
      goto LAB_01297f20;
    }
  }
  else {
    *plVar9 = *plVar8;
LAB_01297f20:
    *plVar8 = (long)plVar9;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_01297f30:
  return plVar9 + 3;
}


