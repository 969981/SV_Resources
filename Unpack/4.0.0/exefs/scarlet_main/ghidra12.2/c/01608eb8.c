/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01608eb8; name: FUN_01608eb8
 */


void FUN_01608eb8(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *local_70;
  long *local_68;
  long local_60;
  long *local_58;
  
  plVar7 = (long *)param_1[1];
  plVar8 = param_1 + 3;
  if (plVar7 == (long *)param_1[2]) {
    uVar6 = param_1[4];
    lVar9 = (long)plVar7 - *param_1 >> 3;
    uVar3 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar5 = lVar4 >> 2;
    local_60 = 0;
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    if (uVar6 >> 1 <= (ulong)(lVar4 >> 3)) {
      uVar3 = uVar6;
    }
    local_58 = plVar8;
    if (uVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar3 << 3,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xe8))();
      }
    }
    plVar7 = (long *)(lVar4 + lVar9 * 8);
    local_60 = lVar4 + uVar3 * 8;
    lVar9 = *plVar8;
    local_70 = plVar7;
    local_68 = plVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_01609210:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    param_2 = (long *)*param_2;
    *plVar7 = (long)param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x18))();
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    local_68 = local_68 + 1;
    FUN_0160921c(plVar8,*param_1,param_1[1],&local_70);
    plVar7 = (long *)*param_1;
    plVar8 = (long *)param_1[1];
    lVar9 = param_1[2];
    *param_1 = (long)local_70;
    param_1[1] = (long)local_68;
    param_1[2] = local_60;
    local_70 = plVar7;
    local_68 = plVar8;
    local_60 = lVar9;
    while (plVar8 != plVar7) {
      local_68 = plVar8 + -1;
      plVar1 = plVar8 + -1;
      plVar8 = local_68;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    }
    if (plVar7 != (long *)0x0) {
      lVar9 = lVar9 - (long)plVar7;
      plVar8 = (long *)*local_58;
      uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,lVar9,8);
      }
      else {
        FUN_00c48fe8(plVar8,plVar7,lVar9,8);
      }
    }
  }
  else {
    lVar9 = *plVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_01609210;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    param_2 = (long *)*param_2;
    *plVar7 = (long)param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x18))();
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    param_1[1] = (long)(plVar7 + 1);
  }
  return;
}


