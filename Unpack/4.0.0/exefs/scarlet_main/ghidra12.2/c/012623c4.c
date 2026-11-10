/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012623c4; name: FUN_012623c4
 */


void FUN_012623c4(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  plVar8 = param_1 + 3;
  lVar3 = FUN_02188cb8(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar11 = *param_1;
  lVar7 = param_1[1];
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,lVar3 << 3,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))();
    }
  }
  lVar13 = *plVar8;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
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
  param_2 = (long *)*param_2;
  plVar12 = (long *)(lVar4 + (lVar7 - lVar11 >> 3) * 8);
  *plVar12 = (long)param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x58))();
  }
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  plVar9 = (long *)*param_1;
  plVar10 = (long *)param_1[1];
  plVar1 = plVar12 + 1;
  if (plVar10 == plVar9) {
    plVar10 = plVar9;
  }
  else {
    plVar12 = plVar12 + -1;
    FUN_01231224(plVar8,plVar12,plVar10 + -1);
    if (plVar10 + -1 != plVar9) {
      do {
        plVar12 = plVar12 + -1;
        FUN_01231224(plVar8,plVar12,plVar10 + -2);
        plVar10 = plVar10 + -1;
      } while (plVar9 + 1 != plVar10);
    }
    plVar9 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
  }
  *param_1 = (long)plVar12;
  param_1[1] = (long)plVar1;
  lVar11 = param_1[2];
  param_1[2] = lVar4 + lVar3 * 8;
  if (plVar10 != plVar9) {
    plVar10 = plVar10 + -1;
    if ((long *)*plVar10 != (long *)0x0) {
      (**(code **)(*(long *)*plVar10 + 0x60))();
    }
    while (plVar10 != plVar9) {
      plVar10 = plVar10 + -1;
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 0x60))();
      }
    }
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0126253c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,lVar11 - (long)plVar9,8);
    return;
  }
  FUN_00c48fe8(plVar8,plVar9,lVar11 - (long)plVar9,8);
  return;
}


