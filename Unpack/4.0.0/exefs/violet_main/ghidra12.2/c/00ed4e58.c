/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ed4e58; name: FUN_00ed4e58
 */


void FUN_00ed4e58(long *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  puVar8 = (undefined8 *)param_1[1];
  plVar6 = param_1 + 3;
  if (puVar8 == (undefined8 *)param_1[2]) {
    uVar5 = param_1[4];
    lVar7 = (long)puVar8 - *param_1 >> 3;
    uVar2 = lVar7 + 1;
    if (0x7ffffffffffffffe < uVar5) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar4 = lVar3 >> 2;
    local_50 = 0;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    if (uVar5 >> 1 <= (ulong)(lVar3 >> 3)) {
      uVar2 = uVar5;
    }
    local_48 = plVar6;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,uVar2 << 3,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar6 + 0xe8))((long *)*plVar6);
      }
    }
    puVar8 = (undefined8 *)(lVar3 + lVar7 * 8);
    local_50 = lVar3 + uVar2 * 8;
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
LAB_00ed5174:
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
    FUN_00ed518c(plVar6,*param_1,param_1[1],&local_60);
    puVar8 = (undefined8 *)*param_1;
    lVar7 = param_1[1];
    *param_1 = (long)local_60;
    param_1[1] = (long)local_58;
    lVar3 = param_1[2];
    param_1[2] = local_50;
    local_58 = (undefined8 *)lVar7;
    if (lVar7 - (long)puVar8 != 0) {
      local_58 = (undefined8 *)(lVar7 + ((lVar7 - (long)puVar8) - 8U >> 3 ^ 0xffffffffffffffff) * 8)
      ;
    }
    if (puVar8 != (undefined8 *)0x0) {
      lVar7 = lVar3 - (long)puVar8;
      plVar6 = (long *)*local_48;
      local_60 = puVar8;
      local_50 = lVar3;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) != 0) && (lVar3 = FUN_00c4e600(), 0 < *(int *)(lVar3 + 0x12c8))) {
        FUN_00c48fe8(plVar6,puVar8,lVar7,8);
        return;
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar8,lVar7,8);
    }
  }
  else {
    lVar7 = *plVar6;
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
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00ed5174;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar8 = *param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar8 + 1);
  }
  return;
}


