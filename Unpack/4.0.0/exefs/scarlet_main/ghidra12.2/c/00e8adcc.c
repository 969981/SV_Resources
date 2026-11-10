/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8adcc; name: FUN_00e8adcc
 */


void FUN_00e8adcc(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  puVar8 = (undefined8 *)param_1[1];
  plVar7 = param_1 + 3;
  if (puVar8 == (undefined8 *)param_1[2]) {
    uVar5 = param_1[4];
    lVar6 = (long)puVar8 - *param_1 >> 3;
    uVar3 = lVar6 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1;
    uVar4 = lVar2 >> 2;
    local_50 = 0;
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar5 >> 1 <= (ulong)(lVar2 >> 3)) {
      uVar3 = uVar5;
    }
    local_48 = plVar7;
    if (uVar3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar3 << 3,8);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
      }
    }
    puVar8 = (undefined8 *)(lVar2 + lVar6 * 8);
    local_50 = lVar2 + uVar3 * 8;
    lVar6 = *plVar7;
    local_60 = puVar8;
    local_58 = puVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      *puVar8 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00e8b0e8;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar8 = *param_2;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar8 = local_58;
    }
    local_58 = puVar8 + 1;
    FUN_00e8b100(plVar7,*param_1,param_1[1],&local_60);
    puVar8 = (undefined8 *)*param_1;
    lVar6 = param_1[1];
    *param_1 = (long)local_60;
    param_1[1] = (long)local_58;
    lVar2 = param_1[2];
    param_1[2] = local_50;
    local_58 = (undefined8 *)lVar6;
    if (lVar6 - (long)puVar8 != 0) {
      local_58 = (undefined8 *)(lVar6 + ((lVar6 - (long)puVar8) - 8U >> 3 ^ 0xffffffffffffffff) * 8)
      ;
    }
    if (puVar8 != (undefined8 *)0x0) {
      lVar6 = lVar2 - (long)puVar8;
      plVar7 = (long *)*local_48;
      local_60 = puVar8;
      local_50 = lVar2;
      uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar3 & 1) != 0) && (lVar2 = FUN_00c4e600(), 0 < *(int *)(lVar2 + 0x12c8))) {
        FUN_00c48fe8(plVar7,puVar8,lVar6,8);
        return;
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,lVar6,8);
    }
  }
  else {
    lVar6 = *plVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      *puVar8 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_00e8b0e8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar8 = *param_2;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar8 + 1);
  }
  return;
}


