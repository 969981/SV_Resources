/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010bec04; name: FUN_010bec04
 */


void FUN_010bec04(long *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  long *plStack_48;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_010c1998(param_1,param_2);
    return;
  }
  uVar6 = param_1[4];
  lVar8 = param_1[1] - *param_1 >> 3;
  uVar2 = lVar8 + 1;
  if (0x7ffffffffffffffe < uVar6) {
    uVar6 = 0x7fffffffffffffff;
  }
  if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - *param_1;
  uVar4 = lVar3 >> 2;
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  plVar7 = param_1 + 3;
  local_50 = (undefined8 *)0x0;
  if (uVar6 >> 1 <= (ulong)(lVar3 >> 3)) {
    uVar2 = uVar6;
  }
  plStack_48 = plVar7;
  if (uVar2 == 0) {
    local_68 = (undefined8 *)0x0;
  }
  else {
    local_68 = (undefined8 *)(**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar2 << 3,8);
    if (local_68 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
    }
  }
  puVar9 = local_68 + lVar8;
  local_50 = local_68 + uVar2;
  lVar8 = *plVar7;
  local_60 = puVar9;
  local_58 = puVar9;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar9 = uVar5;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar9 = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar9 = local_58;
  }
  local_58 = puVar9 + 1;
  FUN_010bef30(plVar7,*param_1,param_1[1],&local_60);
  local_68 = (undefined8 *)*param_1;
  lVar3 = param_1[1];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  lVar8 = param_1[2];
  param_1[2] = (long)local_50;
  local_60 = local_68;
  local_58 = (undefined8 *)lVar3;
  local_50 = (undefined8 *)lVar8;
  FUN_010bee90(&local_68);
  puVar9 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    lVar8 = (long)local_50 - (long)local_68;
    plVar7 = (long *)*plStack_48;
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) != 0) && (lVar3 = FUN_00c4e600(), 0 < *(int *)(lVar3 + 0x12c8))) {
      FUN_00c48fe8(plVar7,puVar9,lVar8,8);
      return;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar9,lVar8,8);
  }
  return;
}


