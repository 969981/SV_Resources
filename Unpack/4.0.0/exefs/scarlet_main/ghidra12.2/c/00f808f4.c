/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f808f4; name: FUN_00f808f4
 */


long * FUN_00f808f4(long *param_1,ulong *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  plVar5 = (long *)(**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],0x20,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0xe8))();
  }
  lVar14 = param_1[4];
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    uVar15 = *param_2;
    plVar5[2] = uVar15;
    plVar5[3] = *param_3;
  }
  else {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar14;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar5[2] = *param_2;
    plVar5[3] = *param_3;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    uVar15 = plVar5[2];
  }
  *plVar5 = 0;
  plVar5[1] = uVar15;
  uVar13 = param_1[1];
  if ((uVar13 == 0) || (*(float *)(param_1 + 6) * (float)uVar13 < (float)(param_1[5] + 1))) {
    uVar7 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
    uVar9 = (ulong)((float)(param_1[5] + 1) / *(float *)(param_1 + 6));
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      uVar9 = std::__next_prime(uVar9);
      uVar13 = param_1[1];
    }
    if (uVar13 < uVar9) {
      uVar7 = uVar9;
LAB_00f80b6c:
      FUN_00f80d60(param_1,uVar7);
    }
    else if (uVar9 < uVar13) {
      uVar7 = (ulong)((float)(ulong)param_1[5] / *(float *)(param_1 + 6));
      if ((uVar13 < 3) ||
         (uVar11 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
         uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333),
         1 < (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar7 = std::__next_prime(uVar7);
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if (uVar7 < uVar13) goto LAB_00f80b6c;
    }
    uVar13 = param_1[1];
  }
  uVar7 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar7 < 2) {
    uVar9 = uVar13 - 1 & uVar15;
  }
  else {
    uVar9 = uVar15;
    if (uVar13 <= uVar15) {
      uVar9 = 0;
      if (uVar13 != 0) {
        uVar9 = uVar15 / uVar13;
      }
      uVar9 = uVar15 - uVar9 * uVar13;
    }
  }
  plVar10 = *(long **)(*param_1 + uVar9 * 8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else if (uVar7 < 2) {
    bVar1 = 0;
    do {
      do {
        bVar2 = bVar1;
        plVar8 = plVar10;
        plVar10 = (long *)*plVar8;
        if ((plVar10 == (long *)0x0) || ((plVar10[1] & uVar13 - 1) != uVar9)) goto LAB_00f80a64;
        if (plVar10[1] == uVar15) {
          bVar3 = plVar10[2] == plVar5[2];
        }
        else {
          bVar3 = false;
        }
        bVar1 = bVar2 | bVar3;
      } while (bVar3);
    } while ((bool)(bVar2 ^ 1));
  }
  else {
    bVar1 = 0;
    do {
      do {
        bVar2 = bVar1;
        plVar8 = plVar10;
        plVar10 = (long *)*plVar8;
        if (plVar10 == (long *)0x0) goto LAB_00f80a64;
        uVar11 = plVar10[1];
        if (uVar11 < uVar13) {
          uVar12 = uVar11;
        }
        else {
          uVar12 = 0;
          if (uVar13 != 0) {
            uVar12 = uVar11 / uVar13;
          }
          uVar12 = uVar11 - uVar12 * uVar13;
        }
        if (uVar12 != uVar9) goto LAB_00f80a64;
        if (uVar11 == uVar15) {
          bVar3 = plVar10[2] == plVar5[2];
        }
        else {
          bVar3 = false;
        }
        bVar1 = bVar2 | bVar3;
      } while (bVar3);
    } while ((bool)(bVar2 ^ 1));
  }
LAB_00f80a64:
  uVar15 = plVar5[1];
  if (uVar7 < 2) {
    uVar15 = uVar15 & uVar13 - 1;
  }
  else if (uVar13 <= uVar15) {
    uVar9 = 0;
    if (uVar13 != 0) {
      uVar9 = uVar15 / uVar13;
    }
    uVar15 = uVar15 - uVar9 * uVar13;
  }
  if (plVar8 == (long *)0x0) {
    plVar10 = param_1 + 3;
    *plVar5 = *plVar10;
    *plVar10 = (long)plVar5;
    *(long **)(*param_1 + uVar15 * 8) = plVar10;
    if (*plVar5 == 0) goto LAB_00f80aec;
    uVar9 = *(ulong *)(*plVar5 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar13 - 1;
    }
    else if (uVar13 <= uVar9) {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar9 / uVar13;
      }
      uVar9 = uVar9 - uVar15 * uVar13;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    if (*plVar5 == 0) goto LAB_00f80aec;
    uVar9 = *(ulong *)(*plVar5 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar13 - 1;
    }
    else if (uVar13 <= uVar9) {
      uVar7 = 0;
      if (uVar13 != 0) {
        uVar7 = uVar9 / uVar13;
      }
      uVar9 = uVar9 - uVar7 * uVar13;
    }
    if (uVar9 == uVar15) goto LAB_00f80aec;
  }
  *(long **)(*param_1 + uVar9 * 8) = plVar5;
LAB_00f80aec:
  param_1[5] = param_1[5] + 1;
  return plVar5;
}


