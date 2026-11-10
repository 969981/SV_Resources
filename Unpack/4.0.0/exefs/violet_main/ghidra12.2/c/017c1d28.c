/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c1d28; name: FUN_017c1d28
 */


void FUN_017c1d28(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  puVar8 = (undefined8 *)param_1[1];
  plVar7 = param_1 + 3;
  if (puVar8 < (undefined8 *)param_1[2]) {
    lVar9 = *plVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      uVar1 = *param_3;
      *puVar8 = *param_2;
      *(undefined4 *)(puVar8 + 1) = uVar1;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_017c2060:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar1 = *param_3;
      *puVar8 = *param_2;
      *(undefined4 *)(puVar8 + 1) = uVar1;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar8 + 2);
  }
  else {
    uVar6 = param_1[4];
    lVar9 = (long)puVar8 - *param_1 >> 4;
    uVar4 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar5 = lVar3 >> 3;
    local_60 = 0;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar6 >> 1 <= (ulong)(lVar3 >> 4)) {
      uVar4 = uVar6;
    }
    local_58 = plVar7;
    if (uVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar4 << 4,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
      }
    }
    puVar8 = (undefined8 *)(lVar3 + lVar9 * 0x10);
    local_60 = lVar3 + uVar4 * 0x10;
    lVar9 = *plVar7;
    local_70 = puVar8;
    local_68 = puVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      uVar1 = *param_3;
      *puVar8 = *param_2;
      *(undefined4 *)(puVar8 + 1) = uVar1;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_017c2060;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar1 = *param_3;
      *puVar8 = *param_2;
      *(undefined4 *)(puVar8 + 1) = uVar1;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar8 = local_68;
    }
    local_68 = puVar8 + 2;
    FUN_017c2080(plVar7,*param_1,param_1[1],&local_70);
    puVar8 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    *param_1 = (long)local_70;
    param_1[1] = (long)local_68;
    lVar3 = param_1[2];
    param_1[2] = local_60;
    local_68 = (undefined8 *)lVar9;
    if (lVar9 - (long)puVar8 != 0) {
      local_68 = (undefined8 *)
                 (lVar9 + ((lVar9 - (long)puVar8) - 0x10U >> 4 ^ 0xffffffffffffffff) * 0x10);
    }
    if (puVar8 != (undefined8 *)0x0) {
      lVar9 = lVar3 - (long)puVar8;
      plVar7 = (long *)*local_58;
      local_70 = puVar8;
      local_60 = lVar3;
      uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar4 & 1) != 0) && (lVar3 = FUN_00c4e600(), 0 < *(int *)(lVar3 + 0x12c8))) {
        FUN_00c48fe8(plVar7,puVar8,lVar9,8);
        return;
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,lVar9,8);
    }
  }
  return;
}


