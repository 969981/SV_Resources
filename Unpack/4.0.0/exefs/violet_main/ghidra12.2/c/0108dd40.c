/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0108dd40; name: FUN_0108dd40
 */


void FUN_0108dd40(long *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *local_60;
  undefined4 *local_58;
  long local_50;
  long *local_48;
  
  puVar7 = (undefined4 *)param_1[1];
  plVar6 = param_1 + 3;
  if (puVar7 < (undefined4 *)param_1[2]) {
    lVar8 = *plVar6;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      *puVar7 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_0108e054:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar7 = *param_2;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar7 + 1);
  }
  else {
    uVar5 = param_1[4];
    lVar8 = (long)puVar7 - *param_1 >> 2;
    uVar3 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_1[2] - *param_1;
    uVar4 = lVar2 >> 1;
    local_50 = 0;
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar5 >> 1 <= (ulong)(lVar2 >> 2)) {
      uVar3 = uVar5;
    }
    local_48 = plVar6;
    if (uVar3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar3 << 2,4);
      if (lVar2 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xe8))((long *)*plVar6);
      }
    }
    puVar7 = (undefined4 *)(lVar2 + lVar8 * 4);
    local_50 = lVar2 + uVar3 * 4;
    lVar8 = *plVar6;
    local_60 = puVar7;
    local_58 = puVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      *puVar7 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_0108e054;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar7 = *param_2;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar7 = local_58;
    }
    local_58 = puVar7 + 1;
    FUN_0108e06c(plVar6,*param_1,param_1[1],&local_60);
    puVar7 = (undefined4 *)*param_1;
    lVar8 = param_1[1];
    *param_1 = (long)local_60;
    param_1[1] = (long)local_58;
    lVar2 = param_1[2];
    param_1[2] = local_50;
    local_58 = (undefined4 *)lVar8;
    if (lVar8 - (long)puVar7 != 0) {
      local_58 = (undefined4 *)(lVar8 + ((lVar8 - (long)puVar7) - 4U >> 2 ^ 0xffffffffffffffff) * 4)
      ;
    }
    if (puVar7 != (undefined4 *)0x0) {
      lVar8 = lVar2 - (long)puVar7;
      plVar6 = (long *)*local_48;
      local_60 = puVar7;
      local_50 = lVar2;
      uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar3 & 1) != 0) && (lVar2 = FUN_00c4e600(), 0 < *(int *)(lVar2 + 0x12c8))) {
        FUN_00c48fe8(plVar6,puVar7,lVar8,4);
        return;
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,lVar8,4);
    }
  }
  return;
}


