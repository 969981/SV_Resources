/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a753c; name: FUN_012a753c
 */


void FUN_012a753c(long param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined8 uVar14;
  float fVar15;
  
  uVar12 = *param_2;
  uVar13 = *(ulong *)(param_1 + 0x50);
  if (uVar13 != 0) {
    uVar3 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar5 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar3 = 0;
    if (uVar13 != 0) {
      uVar3 = uVar12 / uVar13;
    }
    if (uVar5 < 2) {
      uVar9 = uVar13 - 1 & uVar12;
    }
    else {
      uVar9 = uVar12;
      if (uVar13 <= uVar12) {
        uVar9 = uVar12 - uVar3 * uVar13;
      }
    }
    lVar6 = *(long *)(param_1 + 0x48);
    plVar10 = *(long **)(lVar6 + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar10[1] == uVar12) {
            if (plVar10[2] == uVar12) {
              return;
            }
          }
          else if ((plVar10[1] & uVar13 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar10[1];
          if (uVar11 == uVar12) {
            if (plVar10[2] == uVar12) {
              return;
            }
          }
          else {
            if (uVar13 <= uVar11) {
              uVar1 = 0;
              if (uVar13 != 0) {
                uVar1 = uVar11 / uVar13;
              }
              uVar11 = uVar11 - uVar1 * uVar13;
            }
            if (uVar11 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    if (uVar5 < 2) {
      unaff_x26 = uVar13 - 1 & uVar12;
      plVar10 = *(long **)(lVar6 + unaff_x26 * 8);
      if (plVar10 != (long *)0x0) {
        while ((plVar10 = (long *)*plVar10, plVar10 != (long *)0x0 &&
               (plVar10[1] == uVar12 || (plVar10[1] & uVar13 - 1) == unaff_x26))) {
          if (plVar10[2] == uVar12) {
            return;
          }
        }
      }
    }
    else {
      unaff_x26 = uVar12;
      if (uVar13 <= uVar12) {
        unaff_x26 = uVar12 - uVar3 * uVar13;
      }
      plVar10 = *(long **)(lVar6 + unaff_x26 * 8);
      if (plVar10 != (long *)0x0) {
        while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
          uVar3 = plVar10[1];
          if (uVar3 != uVar12) {
            if (uVar13 <= uVar3) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar3 / uVar13;
              }
              uVar3 = uVar3 - uVar5 * uVar13;
            }
            if (uVar3 != unaff_x26) break;
          }
          if (plVar10[2] == uVar12) {
            return;
          }
        }
      }
    }
  }
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x80) + 0x10))
                              (*(long **)(param_1 + 0x80),0x30,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0xe8))();
  }
  uVar14 = *(undefined8 *)(param_1 + 0x80);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    plVar10[2] = *param_2;
    lVar8 = param_3[2];
    lVar6 = param_3[1];
    plVar10[3] = *param_3;
    plVar10[4] = lVar6;
    plVar10[5] = lVar8;
  }
  else {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar10[2] = *param_2;
    lVar8 = *param_3;
    lVar7 = param_3[2];
    plVar10[4] = param_3[1];
    plVar10[5] = lVar7;
    plVar10[3] = lVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *plVar10 = 0;
  plVar10[1] = uVar12;
  fVar15 = (float)(*(long *)(param_1 + 0xa0) + 1);
  if ((uVar13 == 0) || (*(float *)(param_1 + 0xa8) * (float)uVar13 < fVar15)) {
    uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar3 = (ulong)(fVar15 / *(float *)(param_1 + 0xa8));
    if (uVar3 <= uVar13) {
      uVar3 = uVar13;
    }
    if (uVar3 - 1 == 0) {
      uVar3 = 2;
    }
    else if ((uVar3 & uVar3 - 1) != 0) {
      uVar3 = std::__next_prime(uVar3);
    }
    uVar13 = *(ulong *)(param_1 + 0x50);
    if (uVar13 < uVar3) {
      uVar5 = uVar3;
LAB_012a7844:
      FUN_012a79ec(param_1 + 0x48,uVar5);
    }
    else if (uVar3 < uVar13) {
      uVar5 = (ulong)((float)*(ulong *)(param_1 + 0xa0) / *(float *)(param_1 + 0xa8));
      if ((uVar13 < 3) ||
         (uVar9 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
         uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333),
         1 < (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar5 = std::__next_prime(uVar5);
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar3) {
        uVar5 = uVar3;
      }
      if (uVar5 < uVar13) goto LAB_012a7844;
    }
    uVar13 = *(ulong *)(param_1 + 0x50);
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x26 = uVar13 - 1 & uVar12;
    }
    else if (uVar12 < uVar13) {
      unaff_x26 = uVar12;
    }
    else {
      uVar3 = 0;
      if (uVar13 != 0) {
        uVar3 = uVar12 / uVar13;
      }
      unaff_x26 = uVar12 - uVar3 * uVar13;
    }
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x48) + unaff_x26 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(param_1 + 0x78);
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(*(long *)(param_1 + 0x48) + unaff_x26 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_012a7774;
    uVar12 = *(ulong *)(*plVar10 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar12 = uVar12 & uVar13 - 1;
    }
    else if (uVar13 <= uVar12) {
      uVar3 = 0;
      if (uVar13 != 0) {
        uVar3 = uVar12 / uVar13;
      }
      uVar12 = uVar12 - uVar3 * uVar13;
    }
    plVar4 = (long *)(*(long *)(param_1 + 0x48) + uVar12 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_012a7774:
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  return;
}


