/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0131ae74; name: FUN_0131ae74
 */


void FUN_0131ae74(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  puVar1 = (undefined8 *)param_1[1];
  plVar4 = param_1 + 3;
  if (puVar1 == (undefined8 *)param_1[2]) {
    uVar8 = param_1[4];
    lVar10 = (long)puVar1 - *param_1 >> 5;
    uVar6 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar7 = lVar3 >> 4;
    local_60 = 0;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar8 >> 1 <= (ulong)(lVar3 >> 5)) {
      uVar6 = uVar8;
    }
    local_58 = plVar4;
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,uVar6 << 5,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar4 + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(lVar3 + lVar10 * 0x20);
    local_60 = lVar3 + uVar6 * 0x20;
    lVar10 = *plVar4;
    local_70 = puVar1;
    local_68 = puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_0131b1f8;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    plVar5 = (long *)param_2[3];
    puVar1[3] = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    local_68 = local_68 + 4;
    FUN_0131b204(plVar4,*param_1,param_1[1],&local_70);
    puVar9 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[1];
    lVar10 = param_1[2];
    *param_1 = (long)local_70;
    param_1[1] = (long)local_68;
    param_1[2] = local_60;
    local_70 = puVar9;
    local_68 = puVar1;
    local_60 = lVar10;
    while (puVar1 != puVar9) {
      local_68 = puVar1 + -4;
      plVar4 = puVar1 + -1;
      puVar1 = local_68;
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x20))();
      }
    }
    if (puVar9 != (undefined8 *)0x0) {
      lVar10 = lVar10 - (long)puVar9;
      plVar4 = (long *)*local_58;
      uVar6 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,puVar9,lVar10,8);
      }
      else {
        FUN_00c48fe8(plVar4,puVar9,lVar10,8);
      }
    }
  }
  else {
    lVar10 = *plVar4;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0131b1f8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    plVar4 = (long *)param_2[3];
    puVar1[3] = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar1 + 4);
  }
  return;
}


