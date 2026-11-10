/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01258834; name: FUN_01258834
 */


void FUN_01258834(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long local_78;
  long *local_70;
  long *local_68;
  long local_60;
  long *plStack_58;
  
  plVar12 = (long *)param_1[1];
  plVar5 = param_1 + 3;
  if (plVar12 < (long *)param_1[2]) {
    lVar10 = *plVar5;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01258be0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    plVar5 = (long *)*param_2;
    *plVar12 = (long)plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    plVar5 = (long *)param_2[1];
    plVar12[1] = (long)plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *(int *)(plVar12 + 2) = (int)param_2[2];
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    param_1[1] = (long)(plVar12 + 3);
  }
  else {
    uVar8 = param_1[4];
    lVar10 = (long)plVar12 - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    uVar2 = lVar10 * -0x5555555555555555 + 1;
    if (uVar8 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    local_60 = 0;
    uVar7 = lVar4 * 0x5555555555555556;
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar8 >> 1 <= (ulong)(lVar4 * -0x5555555555555555)) {
      uVar2 = uVar8;
    }
    plStack_58 = plVar5;
    if (uVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,uVar2 * 0x18,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*plVar5 + 0xe8))();
      }
    }
    plVar12 = (long *)(lVar4 + lVar10 * 8);
    local_60 = lVar4 + uVar2 * 0x18;
    lVar11 = *plVar5;
    local_78 = lVar4;
    local_70 = plVar12;
    local_68 = plVar12;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01258be0;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    plVar5 = (long *)*param_2;
    *plVar12 = (long)plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    plVar5 = (long *)param_2[1];
    *(long **)(lVar4 + lVar10 * 8 + 8) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *(int *)(lVar4 + lVar10 * 8 + 0x10) = (int)param_2[2];
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    local_68 = local_68 + 3;
    FUN_01259200(param_1,&local_78);
    plVar12 = local_70;
    lVar10 = local_78;
    plVar5 = local_68;
    while (local_78 = lVar10, plVar5 != plVar12) {
      plVar9 = plVar5 + -3;
      local_68 = plVar9;
      if ((long *)plVar5[-2] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[-2] + 0x20))();
      }
      plVar1 = plVar5 + -3;
      lVar10 = local_78;
      plVar5 = plVar9;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
        lVar10 = local_78;
      }
    }
    if (lVar10 != 0) {
      lVar4 = local_60 - lVar10;
      plVar5 = (long *)*plStack_58;
      uVar8 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar4,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar10,lVar4,8);
      }
    }
  }
  return;
}


