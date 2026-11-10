/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01615cfc; name: FUN_01615cfc
 */


void FUN_01615cfc(long *param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *local_60;
  undefined4 *local_58;
  long local_50;
  long *local_48;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_016160a0(param_1,param_2);
  }
  else {
    uVar5 = param_1[4];
    lVar7 = param_1[1] - *param_1 >> 2;
    uVar2 = lVar7 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar4 = lVar3 >> 1;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    plVar6 = param_1 + 3;
    local_50 = 0;
    if (uVar5 >> 1 <= (ulong)(lVar3 >> 2)) {
      uVar2 = uVar5;
    }
    local_48 = plVar6;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar2 << 2,4);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xe8))((long *)*plVar6);
      }
    }
    puVar8 = (undefined4 *)(lVar3 + lVar7 * 4);
    local_50 = lVar3 + uVar2 * 4;
    lVar7 = *plVar6;
    local_60 = puVar8;
    local_58 = puVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      *puVar8 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar8 = *param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar8 = local_58;
    }
    local_58 = puVar8 + 1;
    FUN_01615f80(plVar6,*param_1,param_1[1],&local_60);
    puVar8 = (undefined4 *)*param_1;
    lVar7 = param_1[1];
    *param_1 = (long)local_60;
    param_1[1] = (long)local_58;
    lVar3 = param_1[2];
    param_1[2] = local_50;
    local_58 = (undefined4 *)lVar7;
    if (lVar7 - (long)puVar8 != 0) {
      local_58 = (undefined4 *)(lVar7 + ((lVar7 - (long)puVar8) - 4U >> 2 ^ 0xffffffffffffffff) * 4)
      ;
    }
    if (puVar8 != (undefined4 *)0x0) {
      lVar7 = lVar3 - (long)puVar8;
      plVar6 = (long *)*local_48;
      local_60 = puVar8;
      local_50 = lVar3;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) != 0) && (lVar3 = FUN_00c4e600(), 0 < *(int *)(lVar3 + 0x12c8))) {
        FUN_00c48fe8(plVar6,puVar8,lVar7,4);
        return;
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar8,lVar7,4);
    }
  }
  return;
}


