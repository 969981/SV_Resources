/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01561c6c; name: FUN_01561c6c
 */


void FUN_01561c6c(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  undefined8 *local_48;
  
  pcVar10 = *(char **)(param_2 + 8);
  local_70 = (long *)0x0;
  if (*pcVar10 == '\0') {
    plVar8 = (long *)FUN_00d44228();
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar4;
    FUN_00cf9884(&local_68,uVar4,pcVar10);
    plVar8 = local_70;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    plVar8 = local_68;
  }
  local_70 = plVar8;
  if (*(ulong *)(param_1 + 0x3a8) < *(ulong *)(param_1 + 0x3b0)) {
    FUN_0156211c(param_1 + 0x3a0,&local_70);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x3c0);
    lVar12 = (long)(*(ulong *)(param_1 + 0x3a8) - *(long *)(param_1 + 0x3a0)) >> 3;
    uVar5 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = *(ulong *)(param_1 + 0x3b0) - *(long *)(param_1 + 0x3a0);
    uVar7 = lVar6 >> 2;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    puVar2 = (undefined8 *)(param_1 + 0x3b8);
    local_50 = (long *)0x0;
    if (uVar9 >> 1 <= (ulong)(lVar6 >> 3)) {
      uVar5 = uVar9;
    }
    local_48 = puVar2;
    if (uVar5 == 0) {
      local_68 = (long *)0x0;
    }
    else {
      local_68 = (long *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar5 << 3,8);
      if (local_68 == (long *)0x0) {
        (**(code **)(*(long *)*puVar2 + 0xe8))((long *)*puVar2);
      }
    }
    plVar11 = local_68 + lVar12;
    local_50 = local_68 + uVar5;
    uVar4 = *puVar2;
    local_60 = plVar11;
    local_58 = plVar11;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 == 0) {
      *plVar11 = (long)plVar8;
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar4;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *plVar11 = (long)local_70;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      plVar11 = local_58;
    }
    local_70 = (long *)0x0;
    local_58 = plVar11 + 1;
    FUN_01561ff4(puVar2,*(undefined8 *)(param_1 + 0x3a0),*(undefined8 *)(param_1 + 0x3a8),&local_60)
    ;
    plVar11 = *(long **)(param_1 + 0x3a0);
    *(long **)(param_1 + 0x3a0) = local_60;
    plVar8 = *(long **)(param_1 + 0x3a8);
    *(long **)(param_1 + 0x3a8) = local_58;
    lVar12 = *(long *)(param_1 + 0x3b0);
    *(long **)(param_1 + 0x3b0) = local_50;
    local_68 = plVar11;
    local_60 = plVar11;
    local_58 = plVar8;
    local_50 = (long *)lVar12;
    while (plVar8 != plVar11) {
      local_58 = plVar8 + -1;
      plVar1 = plVar8 + -1;
      plVar8 = local_58;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    }
    if (plVar11 != (long *)0x0) {
      lVar12 = lVar12 - (long)plVar11;
      plVar8 = (long *)*local_48;
      uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar11,lVar12,8);
      }
      else {
        FUN_00c48fe8(plVar8,plVar11,lVar12,8);
      }
    }
  }
  return;
}


