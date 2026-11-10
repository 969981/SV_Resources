/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02af7dbc; name: FUN_02af7dbc
 */


void FUN_02af7dbc(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x26;
  undefined8 uVar11;
  float fVar12;
  
  lVar3 = DAT_04840888;
  uVar10 = *param_1;
  plVar1 = (long *)(DAT_04840888 + 0xe0);
  uVar9 = *(ulong *)(DAT_04840888 + 0xe8);
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x26 = uVar7 & uVar10;
      plVar8 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar8 != (long *)0x0) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar10 || (plVar8[1] & uVar7) == unaff_x26))) {
          if (plVar8[2] == uVar10) {
            return;
          }
        }
      }
    }
    else {
      unaff_x26 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x26 = uVar10 - uVar7 * uVar9;
      }
      plVar8 = *(long **)(*plVar1 + unaff_x26 * 8);
      if (plVar8 != (long *)0x0) {
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar7 = plVar8[1];
          if (uVar7 != uVar10) {
            if (uVar9 <= uVar7) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar7 / uVar9;
              }
              uVar7 = uVar7 - uVar2 * uVar9;
            }
            if (uVar7 != unaff_x26) break;
          }
          if (plVar8[2] == uVar10) {
            return;
          }
        }
      }
    }
  }
  plVar8 = (long *)(**(code **)(**(long **)(DAT_04840888 + 0x118) + 0x10))
                             (*(long **)(DAT_04840888 + 0x118),0x38,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x118) + 0xe8))();
  }
  uVar11 = *(undefined8 *)(lVar3 + 0x118);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar11;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  plVar8[2] = *param_1;
  plVar8[3] = *param_1;
  plVar8[4] = param_1[1];
  plVar8[5] = param_1[2];
  plVar6 = (long *)param_1[3];
  plVar8[6] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar10;
  fVar12 = (float)(*(long *)(lVar3 + 0x138) + 1);
  if ((uVar9 == 0) || (*(float *)(lVar3 + 0x140) * (float)uVar9 < fVar12)) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar7 = (ulong)(fVar12 / *(float *)(lVar3 + 0x140));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    FUN_00fb9604(plVar1,uVar7);
    uVar9 = *(ulong *)(lVar3 + 0xe8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x26 = uVar9 - 1 & uVar10;
    }
    else if (uVar10 < uVar9) {
      unaff_x26 = uVar10;
    }
    else {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar10 / uVar9;
      }
      unaff_x26 = uVar10 - uVar7 * uVar9;
    }
  }
  plVar6 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar8 = *(long *)(lVar3 + 0x110);
    *(long **)(lVar3 + 0x110) = plVar8;
    *(long *)(*(long *)(lVar3 + 0xe0) + unaff_x26 * 8) = lVar3 + 0x110;
    if (*plVar8 == 0) goto LAB_02af7fe8;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar7 * uVar9;
    }
    plVar6 = (long *)(*plVar1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar6;
  }
  *plVar6 = (long)plVar8;
LAB_02af7fe8:
  *(long *)(lVar3 + 0x138) = *(long *)(lVar3 + 0x138) + 1;
  return;
}


