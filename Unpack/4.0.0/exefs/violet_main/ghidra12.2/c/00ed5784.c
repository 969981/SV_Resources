/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ed5784; name: FUN_00ed5784
 */


void FUN_00ed5784(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  long local_70;
  long *plStack_68;
  
  puVar3 = (undefined4 *)param_1[1];
  plVar1 = param_1 + 3;
  if (puVar3 < (undefined4 *)param_1[2]) {
    lVar13 = *plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00ed5b1c;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar13;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    uVar4 = *param_3;
    *puVar3 = *param_2;
    puVar3[1] = uVar4;
    *(undefined8 *)(puVar3 + 2) = 0;
    uVar10 = param_4[1];
    *(undefined8 *)(puVar3 + 4) = *param_4;
    *(undefined8 *)(puVar3 + 6) = uVar10;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar3 + 8);
  }
  else {
    uVar11 = param_1[4];
    lVar13 = (long)puVar3 - *param_1 >> 5;
    uVar2 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = param_1[2] - *param_1;
    uVar9 = lVar8 >> 4;
    local_70 = 0;
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    if (uVar11 >> 1 <= (ulong)(lVar8 >> 5)) {
      uVar2 = uVar11;
    }
    plStack_68 = plVar1;
    if (uVar2 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar2 << 5,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    puVar3 = (undefined4 *)(local_88 + lVar13 * 0x20);
    local_70 = local_88 + uVar2 * 0x20;
    lVar13 = *plVar1;
    local_80 = puVar3;
    local_78 = puVar3;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00ed5b1c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar13;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    uVar4 = *param_3;
    *puVar3 = *param_2;
    puVar3[1] = uVar4;
    *(undefined8 *)(puVar3 + 2) = 0;
    uVar10 = param_4[1];
    *(undefined8 *)(puVar3 + 4) = *param_4;
    *(undefined8 *)(puVar3 + 6) = uVar10;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    puVar5 = PTR_LAB_047d3900;
    local_78 = local_78 + 8;
    lVar13 = *param_1;
    if (param_1[1] == lVar13) {
      lVar8 = lVar13;
    }
    else {
      lVar8 = param_1[1];
      do {
        puVar3 = local_80;
        lVar12 = *plVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar5,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00ed5b1c;
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar12;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(lVar8 + -0x20);
        uVar10 = *(undefined8 *)(lVar8 + -0x18);
        *(undefined8 *)(lVar8 + -0x18) = 0;
        *(undefined8 *)(puVar3 + -6) = uVar10;
        lVar12 = lVar8 + -0x20;
        uVar10 = *(undefined8 *)(lVar8 + -8);
        *(undefined8 *)(puVar3 + -4) = *(undefined8 *)(lVar8 + -0x10);
        *(undefined8 *)(puVar3 + -2) = uVar10;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        local_80 = local_80 + -8;
        lVar8 = lVar12;
      } while (lVar13 != lVar12);
      lVar13 = *param_1;
      lVar8 = param_1[1];
    }
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    lVar12 = param_1[2];
    param_1[2] = local_70;
    local_88 = lVar13;
    local_80 = (undefined4 *)lVar13;
    local_78 = (undefined4 *)lVar8;
    local_70 = lVar12;
    FUN_00d11564(&local_88);
  }
  return;
}


