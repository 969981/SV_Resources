/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f09970; name: FUN_00f09970
 */


ulong FUN_00f09970(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  while( true ) {
    lVar4 = param_1[0xf] - param_1[0xe];
    if (lVar4 == 0) break;
    uVar3 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar4 + param_1[0xe] + -8;
    uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar7) =
         *(ulong *)(param_1[7] + uVar7) & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar3 < (ulong)(param_1[1] - *param_1 >> 3)) {
      *(undefined8 *)(*param_1 + uVar3 * 8) = 0xffffffffffffffff;
      if ((ulong)param_1[0x15] <= uVar3) {
        param_1[0x15] = uVar3 + 1;
      }
      return uVar3;
    }
  }
  puVar8 = (undefined8 *)param_1[1];
  uVar7 = (long)puVar8 - *param_1 >> 3;
  plVar9 = param_1 + 3;
  if (puVar8 < (undefined8 *)param_1[2]) {
    lVar4 = *plVar9;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      *puVar8 = 0xffffffffffffffff;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00f09cd4;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar8 = 0xffffffffffffffff;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar8 + 1);
  }
  else {
    uVar6 = param_1[4];
    uVar3 = uVar7 + 1;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar5 = lVar4 >> 2;
    local_60 = 0;
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    if (uVar6 >> 1 <= (ulong)(lVar4 >> 3)) {
      uVar3 = uVar6;
    }
    local_58 = plVar9;
    if (uVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar3 << 3,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*plVar9 + 0xe8))();
      }
    }
    puVar8 = (undefined8 *)(lVar4 + uVar7 * 8);
    local_60 = lVar4 + uVar3 * 8;
    lVar4 = *plVar9;
    local_70 = puVar8;
    local_68 = puVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      *puVar8 = 0xffffffffffffffff;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_00f09cd4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar8 = 0xffffffffffffffff;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar8 = local_68;
    }
    local_68 = puVar8 + 1;
    FUN_00f09d3c(plVar9,*param_1,param_1[1],&local_70);
    puVar8 = (undefined8 *)*param_1;
    lVar4 = param_1[1];
    *param_1 = (long)local_70;
    param_1[1] = (long)local_68;
    lVar2 = param_1[2];
    param_1[2] = local_60;
    local_68 = (undefined8 *)lVar4;
    if (lVar4 - (long)puVar8 != 0) {
      local_68 = (undefined8 *)(lVar4 + ((lVar4 - (long)puVar8) - 8U >> 3 ^ 0xffffffffffffffff) * 8)
      ;
    }
    if (puVar8 != (undefined8 *)0x0) {
      lVar4 = lVar2 - (long)puVar8;
      plVar9 = (long *)*local_58;
      local_70 = puVar8;
      local_60 = lVar2;
      uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar8,lVar4,8);
      }
      else {
        FUN_00c48fe8(plVar9,puVar8,lVar4,8);
      }
    }
  }
  param_1[0x15] = uVar7 + 1;
  return uVar7;
}


