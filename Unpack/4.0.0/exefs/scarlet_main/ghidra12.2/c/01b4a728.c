/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b4a728; name: FUN_01b4a728
 */


void FUN_01b4a728(ulong *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x25;
  undefined8 uVar13;
  float fVar14;
  
  if (((DAT_04840858 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04840858), iVar3 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  lVar2 = DAT_04840848;
  DAT_04840840 = DAT_04840848;
  uVar11 = *(ulong *)(DAT_04840848 + 0x5b0);
  plVar1 = (long *)(DAT_04840848 + 0x5a8);
  uVar12 = *param_1 & 0xffffffff;
  iVar3 = (int)*param_1;
  if (uVar11 != 0) {
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = (int)uVar11 - 1 & uVar12;
      plVar10 = *(long **)(*plVar1 + unaff_x25 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          plVar10 = (long *)*plVar10;
          if ((plVar10 == (long *)0x0) ||
             (plVar10[1] != uVar12 && (plVar10[1] & uVar11 - 1) != unaff_x25)) goto LAB_01b4a7e8;
        } while ((int)plVar10[2] != iVar3);
        goto LAB_01b4a928;
      }
    }
    else {
      unaff_x25 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        unaff_x25 = uVar12 - uVar7 * uVar11;
      }
      plVar10 = *(long **)(*plVar1 + unaff_x25 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_01b4a7e8;
          uVar7 = plVar10[1];
          if (uVar7 != uVar12) {
            if (uVar11 <= uVar7) {
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar6 * uVar11;
            }
            if (uVar7 != unaff_x25) goto LAB_01b4a7e8;
          }
        } while ((int)plVar10[2] != iVar3);
        goto LAB_01b4a928;
      }
    }
  }
LAB_01b4a7e8:
  plVar10 = (long *)(**(code **)(**(long **)(DAT_04840848 + 0x5e0) + 0x10))
                              (*(long **)(DAT_04840848 + 0x5e0),0x20,4);
  if (plVar10 == (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0x5e0) + 0xe8))();
  }
  uVar13 = *(undefined8 *)(lVar2 + 0x5e0);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    *(int *)(plVar10 + 2) = iVar3;
    *(undefined8 *)((long)plVar10 + 0x14) = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar13;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *(int *)(plVar10 + 2) = iVar3;
    *(undefined8 *)((long)plVar10 + 0x14) = 0;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *plVar10 = 0;
  plVar10[1] = uVar12;
  fVar14 = (float)(*(long *)(lVar2 + 0x600) + 1);
  if ((uVar11 == 0) || (*(float *)(lVar2 + 0x608) * (float)uVar11 < fVar14)) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar7 = (ulong)(fVar14 / *(float *)(lVar2 + 0x608));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      uVar7 = std::__next_prime(uVar7);
    }
    uVar11 = *(ulong *)(lVar2 + 0x5b0);
    if (uVar11 < uVar7) {
      uVar6 = uVar7;
LAB_01b4a8e0:
      FUN_020ecff8(plVar1,uVar6);
    }
    else if (uVar7 < uVar11) {
      uVar6 = (ulong)((float)*(ulong *)(lVar2 + 0x600) / *(float *)(lVar2 + 0x608));
      if ((uVar11 < 3) ||
         (uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333),
         1 < (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar6 = std::__next_prime(uVar6);
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar11) goto LAB_01b4a8e0;
    }
    uVar11 = *(ulong *)(lVar2 + 0x5b0);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = (int)uVar11 - 1 & uVar12;
    }
    else if (uVar12 < uVar11) {
      unaff_x25 = uVar12;
    }
    else {
      uVar7 = 0;
      if (uVar11 != 0) {
        uVar7 = uVar12 / uVar11;
      }
      unaff_x25 = uVar12 - uVar7 * uVar11;
    }
  }
  plVar8 = *(long **)(*plVar1 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar10 = *(long *)(lVar2 + 0x5d8);
    *(long **)(lVar2 + 0x5d8) = plVar10;
    *(long *)(*(long *)(lVar2 + 0x5a8) + unaff_x25 * 8) = lVar2 + 0x5d8;
    if (*plVar10 != 0) {
      uVar12 = *(ulong *)(*plVar10 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        uVar12 = uVar12 - uVar7 * uVar11;
      }
      plVar8 = (long *)(*plVar1 + uVar12 * 8);
      goto LAB_01b4a918;
    }
  }
  else {
    *plVar10 = *plVar8;
LAB_01b4a918:
    *plVar8 = (long)plVar10;
  }
  *(long *)(lVar2 + 0x600) = *(long *)(lVar2 + 0x600) + 1;
LAB_01b4a928:
  *(undefined4 *)((long)plVar10 + 0x14) = *param_2;
  *(undefined4 *)(plVar10 + 3) = param_2[1];
  return;
}


