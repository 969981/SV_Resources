/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017ea844; name: FUN_017ea844
 */


void FUN_017ea844(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x26;
  long lVar11;
  
  uVar10 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar5 = uVar9 - 1;
    if ((uVar9 & uVar5) == 0) {
      unaff_x26 = uVar5 & uVar10;
      plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
      if (plVar6 != (long *)0x0) {
        while ((plVar6 = (long *)*plVar6, plVar6 != (long *)0x0 &&
               (plVar6[1] == uVar10 || (plVar6[1] & uVar5) == unaff_x26))) {
          if (plVar6[2] == uVar10) {
            return;
          }
        }
      }
    }
    else {
      unaff_x26 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x26 = uVar10 - uVar5 * uVar9;
      }
      plVar6 = *(long **)(*param_1 + unaff_x26 * 8);
      if (plVar6 != (long *)0x0) {
        while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
          uVar5 = plVar6[1];
          if (uVar5 != uVar10) {
            if (uVar9 <= uVar5) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar5 / uVar9;
              }
              uVar5 = uVar5 - uVar1 * uVar9;
            }
            if (uVar5 != unaff_x26) break;
          }
          if (plVar6[2] == uVar10) {
            return;
          }
        }
      }
    }
  }
  plVar6 = (long *)(**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],0xb0,0x10);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0xe8))();
  }
  lVar11 = param_1[4];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  plVar6[2] = *param_2;
  plVar6[3] = param_2[1];
  plVar6[4] = param_2[2];
  plVar4 = (long *)param_2[3];
  plVar6[5] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  plVar6[6] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[7] = 0;
  if ((code *)param_3[3] != (code *)0x0) {
    (*(code *)param_3[3])(param_3 + 4,plVar6 + 10);
    lVar11 = param_3[1];
    plVar6[9] = param_3[3];
    lVar8 = param_3[2];
    plVar6[6] = *param_3;
    plVar6[7] = lVar11;
    plVar6[8] = lVar8;
    pcVar7 = (code *)param_3[1];
    if (pcVar7 != (code *)0x0) {
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      (*pcVar7)(param_3 + 4);
    }
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *plVar6 = 0;
  plVar6[1] = uVar10;
  if ((uVar9 == 0) || (*(float *)(param_1 + 6) * (float)uVar9 < (float)(param_1[5] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar5 = (ulong)((float)(param_1[5] + 1) / *(float *)(param_1 + 6));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    FUN_014e0c70(param_1,uVar5);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x26 = uVar9 - 1 & uVar10;
    }
    else if (uVar10 < uVar9) {
      unaff_x26 = uVar10;
    }
    else {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar10 / uVar9;
      }
      unaff_x26 = uVar10 - uVar5 * uVar9;
    }
  }
  plVar4 = *(long **)(*param_1 + unaff_x26 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 3;
    *plVar6 = *plVar4;
    *plVar4 = (long)plVar6;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar4;
    if (*plVar6 == 0) goto LAB_017eaa20;
    uVar10 = *(ulong *)(*plVar6 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar5 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar6 = *plVar4;
  }
  *plVar4 = (long)plVar6;
LAB_017eaa20:
  param_1[5] = param_1[5] + 1;
  return;
}


