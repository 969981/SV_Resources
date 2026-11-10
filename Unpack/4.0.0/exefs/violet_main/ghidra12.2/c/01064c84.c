/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01064c84; name: FUN_01064c84
 */


void FUN_01064c84(long *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  puVar10 = (undefined8 *)param_1[1];
  plVar8 = param_1 + 3;
  if (puVar10 < (undefined8 *)param_1[2]) {
    lVar9 = *plVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      uVar5 = *param_2;
      *param_2 = 0;
      *puVar10 = uVar5;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_01064fc0;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar5 = *param_2;
      *param_2 = 0;
      *puVar10 = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar10 + 1);
  }
  else {
    uVar6 = param_1[4];
    lVar9 = (long)puVar10 - *param_1 >> 3;
    uVar2 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    if (uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar4 = lVar3 >> 2;
    local_50 = 0;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    if (uVar6 >> 1 <= (ulong)(lVar3 >> 3)) {
      uVar2 = uVar6;
    }
    local_48 = plVar8;
    if (uVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar2 << 3,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)*plVar8 + 0xe8))((long *)*plVar8);
      }
    }
    puVar10 = (undefined8 *)(lVar3 + lVar9 * 8);
    local_50 = lVar3 + uVar2 * 8;
    lVar9 = *plVar8;
    local_60 = puVar10;
    local_58 = puVar10;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      uVar5 = *param_2;
      *param_2 = 0;
      *puVar10 = uVar5;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_01064fc0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar9;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar5 = *param_2;
      *param_2 = 0;
      *puVar10 = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar10 = local_58;
    }
    local_58 = puVar10 + 1;
    FUN_01064fdc(plVar8,*param_1,param_1[1],&local_60);
    puVar7 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
    lVar9 = param_1[2];
    *param_1 = (long)local_60;
    param_1[1] = (long)local_58;
    param_1[2] = local_50;
    local_60 = puVar7;
    local_58 = puVar10;
    local_50 = lVar9;
    while (puVar10 != puVar7) {
      local_58 = puVar10 + -1;
      plVar8 = puVar10 + -1;
      puVar10 = local_58;
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x20))();
      }
    }
    if (puVar7 != (undefined8 *)0x0) {
      lVar9 = lVar9 - (long)puVar7;
      plVar8 = (long *)*local_48;
      uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar7,lVar9,8);
      }
      else {
        FUN_00c48fe8(plVar8,puVar7,lVar9,8);
      }
    }
  }
  return;
}


