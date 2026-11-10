/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02179b20; name: FUN_02179b20
 */


void FUN_02179b20(long *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *local_60;
  long *local_58;
  long local_50;
  long *local_48;
  
  uVar6 = param_1[4];
  lVar8 = param_1[1] - *param_1 >> 4;
  uVar3 = lVar8 + 1;
  if (0x7ffffffffffffffe < uVar6) {
    uVar6 = 0x7fffffffffffffff;
  }
  if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  uVar5 = lVar4 >> 3;
  if (uVar3 <= uVar5) {
    uVar3 = uVar5;
  }
  plVar1 = param_1 + 3;
  local_50 = 0;
  if (uVar6 >> 1 <= (ulong)(lVar4 >> 4)) {
    uVar3 = uVar6;
  }
  local_48 = plVar1;
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar3 << 4,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar1 + 0xe8))((long *)*plVar1);
    }
  }
  plVar7 = (long *)(lVar4 + lVar8 * 0x10);
  local_50 = lVar4 + uVar3 * 0x10;
  lVar8 = *plVar1;
  local_60 = plVar7;
  local_58 = plVar7;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    *plVar7 = (long)*param_2;
    plVar7[1] = *(long *)(param_2 + 2);
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *plVar7 = (long)*param_2;
    plVar7[1] = *(long *)(param_2 + 2);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    plVar7 = local_58;
  }
  local_58 = plVar7 + 2;
  FUN_01160f10(plVar1,*param_1,param_1[1],&local_60);
  plVar1 = (long *)*param_1;
  lVar8 = param_1[1];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  lVar4 = param_1[2];
  param_1[2] = local_50;
  local_58 = (long *)lVar8;
  if (lVar8 - (long)plVar1 != 0) {
    local_58 = (long *)(lVar8 + ((lVar8 - (long)plVar1) - 0x10U >> 4 ^ 0xffffffffffffffff) * 0x10);
  }
  if (plVar1 != (long *)0x0) {
    lVar8 = lVar4 - (long)plVar1;
    plVar7 = (long *)*local_48;
    local_60 = plVar1;
    local_50 = lVar4;
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar3 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
      FUN_00c48fe8(plVar7,plVar1,lVar8,8);
      return;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar1,lVar8,8);
  }
  return;
}


