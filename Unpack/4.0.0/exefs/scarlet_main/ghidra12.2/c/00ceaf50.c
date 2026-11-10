/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ceaf50; name: FUN_00ceaf50
 */


void FUN_00ceaf50(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_00ceb344(param_1,param_2);
    return;
  }
  uVar7 = param_1[4];
  lVar10 = param_1[1] - *param_1 >> 5;
  uVar3 = lVar10 + 1;
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  uVar5 = lVar4 >> 4;
  if (uVar3 <= uVar5) {
    uVar3 = uVar5;
  }
  plVar9 = param_1 + 3;
  local_50 = 0;
  if (uVar7 >> 1 <= (ulong)(lVar4 >> 5)) {
    uVar3 = uVar7;
  }
  local_48 = plVar9;
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar3 << 5,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar9 + 0xe8))((long *)*plVar9);
    }
  }
  puVar1 = (undefined8 *)(lVar4 + lVar10 * 0x20);
  local_50 = lVar4 + uVar3 * 0x20;
  lVar10 = *plVar9;
  local_60 = puVar1;
  local_58 = puVar1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  uVar6 = param_2[3];
  param_2[3] = 0;
  puVar1[3] = uVar6;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_58 = local_58 + 4;
  FUN_00ceb210(plVar9,*param_1,param_1[1],&local_60);
  puVar8 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar10 = param_1[2];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  param_1[2] = local_50;
  local_60 = puVar8;
  local_58 = puVar1;
  local_50 = lVar10;
  while (puVar1 != puVar8) {
    local_58 = puVar1 + -4;
    plVar9 = puVar1 + -1;
    puVar1 = local_58;
    if ((long *)*plVar9 != (long *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0x20))();
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    lVar10 = lVar10 - (long)puVar8;
    plVar9 = (long *)*local_48;
    uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar8,lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar9,puVar8,lVar10,8);
    }
  }
  return;
}


