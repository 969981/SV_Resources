/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ceab04; name: FUN_00ceab04
 */


void FUN_00ceab04(long *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plStack_50;
  undefined1 local_48;
  
  plVar11 = param_1 + 7;
  plVar4 = (long *)(**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,0x38,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*(long *)*plVar11 + 0xe8))();
  }
  lVar13 = *plVar11;
  plStack_50 = plVar11;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
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
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  lVar13 = *param_2;
  plVar11 = (long *)PTR_DAT_047d8b70;
  if (lVar13 != 0) {
    plVar11 = (long *)(lVar13 + 0x30);
  }
  plVar1 = (long *)PTR_PTR_047d4508;
  if (lVar13 != 0) {
    plVar1 = (long *)(lVar13 + 0x38);
  }
  lVar7 = *plVar1;
  lVar9 = 0;
  if (lVar13 != 0) {
    lVar9 = *(long *)(lVar13 + 0x40);
  }
  plVar4[2] = *plVar11;
  plVar4[3] = lVar7;
  plVar4[4] = lVar9;
  plVar4[5] = 0;
  param_2 = (long *)*param_2;
  if (param_2 == (long *)0x0) {
    plVar4[5] = 0;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    plVar11 = (long *)plVar4[5];
    plVar4[5] = (long)param_2;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  *(undefined4 *)(plVar4 + 6) = *param_3;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_48 = 1;
  uVar8 = plVar4[2];
  *plVar4 = 0;
  plVar4[1] = uVar8;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar10 = uVar6 - 1;
    if ((uVar6 & uVar10) == 0) {
      plVar11 = *(long **)(*param_1 + (uVar10 & uVar8) * 8);
      if (plVar11 != (long *)0x0) {
        do {
          plVar11 = (long *)*plVar11;
          if ((plVar11 == (long *)0x0) || ((plVar11[1] & uVar10) != (uVar10 & uVar8)))
          goto LAB_00ceacec;
        } while (plVar11[2] != uVar8);
        goto LAB_00ceac6c;
      }
    }
    else {
      uVar10 = uVar8;
      if (uVar6 <= uVar8) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar8 / uVar6;
        }
        uVar10 = uVar8 - uVar10 * uVar6;
      }
      plVar11 = *(long **)(*param_1 + uVar10 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_00ceacec;
          uVar12 = plVar11[1];
          if (uVar6 <= uVar12) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar12 / uVar6;
            }
            uVar12 = uVar12 - uVar2 * uVar6;
          }
          if (uVar12 != uVar10) goto LAB_00ceacec;
        } while (plVar11[2] != uVar8);
LAB_00ceac6c:
        if (plVar4 == (long *)0x0) {
          return;
        }
        FUN_00ceaea0(&plStack_50,plVar4);
        return;
      }
    }
  }
LAB_00ceacec:
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar8 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    FUN_011e9f9c(param_1,uVar8);
    uVar6 = param_1[1];
    uVar8 = plVar4[1];
  }
  uVar10 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar10 < 2) {
    uVar8 = uVar6 - 1 & uVar8;
  }
  else if (uVar6 <= uVar8) {
    uVar12 = 0;
    if (uVar6 != 0) {
      uVar12 = uVar8 / uVar6;
    }
    uVar8 = uVar8 - uVar12 * uVar6;
  }
  plVar11 = *(long **)(*param_1 + uVar8 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = param_1 + 6;
    *plVar4 = *plVar11;
    *plVar11 = (long)plVar4;
    *(long **)(*param_1 + uVar8 * 8) = plVar11;
    if (*plVar4 == 0) goto LAB_00ceadb8;
    uVar8 = *(ulong *)(*plVar4 + 8);
    if (uVar10 < 2) {
      uVar8 = uVar8 & uVar6 - 1;
    }
    else if (uVar6 <= uVar8) {
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar8 / uVar6;
      }
      uVar8 = uVar8 - uVar10 * uVar6;
    }
    plVar11 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *plVar4 = *plVar11;
  }
  *plVar11 = (long)plVar4;
LAB_00ceadb8:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


