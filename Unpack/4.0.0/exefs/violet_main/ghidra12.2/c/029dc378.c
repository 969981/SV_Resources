/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029dc378; name: FUN_029dc378
 */


void FUN_029dc378(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *plStack_68;
  
  uVar11 = param_1[4];
  lVar12 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar12 + 1;
  if (0x7ffffffffffffffe < uVar11) {
    uVar11 = 0x7fffffffffffffff;
  }
  if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1;
  uVar10 = lVar9 >> 2;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  plVar2 = param_1 + 3;
  local_70 = 0;
  if (uVar11 >> 1 <= (ulong)(lVar9 >> 3)) {
    uVar1 = uVar11;
  }
  plStack_68 = plVar2;
  if (uVar1 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar1 << 3,8);
    if (local_88 == 0) {
      (**(code **)(*(long *)*plVar2 + 0xe8))();
    }
  }
  puVar3 = (undefined8 *)(local_88 + lVar12 * 8);
  local_70 = local_88 + uVar1 * 8;
  lVar12 = *plVar2;
  local_80 = puVar3;
  local_78 = puVar3;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    uVar7 = *param_2;
    *param_2 = 0;
    *puVar3 = uVar7;
  }
  else {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_029dc620:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar12;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    uVar7 = *param_2;
    *param_2 = 0;
    *puVar3 = uVar7;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  puVar4 = PTR_LAB_047d3900;
  local_78 = local_78 + 1;
  lVar12 = *param_1;
  lVar9 = param_1[1];
  if (lVar9 == lVar12) {
    lVar9 = lVar12;
  }
  else {
    do {
      puVar3 = local_80;
      lVar8 = *plVar2;
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar4,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 == 0) {
        uVar7 = *(undefined8 *)(lVar9 + -8);
        *(undefined8 *)(lVar9 + -8) = 0;
        puVar3[-1] = uVar7;
      }
      else {
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_029dc620;
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        uVar7 = *(undefined8 *)(lVar9 + -8);
        *(undefined8 *)(lVar9 + -8) = 0;
        puVar3[-1] = uVar7;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      lVar9 = lVar9 + -8;
      local_80 = local_80 + -1;
    } while (lVar12 != lVar9);
    lVar12 = *param_1;
    lVar9 = param_1[1];
  }
  *param_1 = (long)local_80;
  param_1[1] = (long)local_78;
  lVar8 = param_1[2];
  param_1[2] = local_70;
  local_88 = lVar12;
  local_80 = (undefined8 *)lVar12;
  local_78 = (undefined8 *)lVar9;
  local_70 = lVar8;
  FUN_011c76ec(&local_88);
  return;
}


