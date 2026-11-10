/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3ee4c; name: FUN_00d3ee4c
 */


void FUN_00d3ee4c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *plStack_68;
  
  puVar3 = (undefined8 *)param_1[1];
  plVar1 = param_1 + 3;
  if (puVar3 < (undefined8 *)param_1[2]) {
    lVar12 = *plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00d3f1d0;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar12;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    uVar9 = *param_2;
    *param_2 = 0;
    *puVar3 = uVar9;
    uVar9 = param_2[1];
    uVar11 = param_2[3];
    puVar3[2] = param_2[2];
    puVar3[3] = uVar11;
    puVar3[1] = uVar9;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar3 + 4);
  }
  else {
    lVar12 = (long)puVar3 - *param_1 >> 5;
    uVar2 = lVar12 + 1;
    if (uVar2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = param_1[2] - *param_1;
    uVar10 = lVar8 >> 4;
    local_70 = 0;
    if (uVar2 <= uVar10) {
      uVar2 = uVar10;
    }
    if (0x3fffffffffffffe < (ulong)(lVar8 >> 5)) {
      uVar2 = 0x7ffffffffffffff;
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
    puVar3 = (undefined8 *)(local_88 + lVar12 * 0x20);
    local_70 = local_88 + uVar2 * 0x20;
    lVar12 = *plVar1;
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
LAB_00d3f1d0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar12;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    uVar9 = *param_2;
    *param_2 = 0;
    *puVar3 = uVar9;
    uVar9 = param_2[1];
    uVar11 = param_2[3];
    puVar3[2] = param_2[2];
    puVar3[3] = uVar11;
    puVar3[1] = uVar9;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    puVar5 = PTR_LAB_047d3900;
    local_78 = local_78 + 4;
    lVar12 = *param_1;
    lVar8 = param_1[1];
    if (lVar8 == lVar12) {
      lVar8 = lVar12;
    }
    else {
      do {
        puVar3 = local_80;
        lVar13 = *plVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar5,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00d3f1d0;
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar13;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        uVar9 = *(undefined8 *)(lVar8 + -0x20);
        *(undefined8 *)(lVar8 + -0x20) = 0;
        puVar3[-4] = uVar9;
        uVar9 = *(undefined8 *)(lVar8 + -0x18);
        puVar4 = (undefined8 *)(lVar8 + -0x10);
        uVar11 = *(undefined8 *)(lVar8 + -8);
        lVar8 = lVar8 + -0x20;
        puVar3[-2] = *puVar4;
        puVar3[-1] = uVar11;
        puVar3[-3] = uVar9;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        local_80 = local_80 + -4;
      } while (lVar12 != lVar8);
      lVar12 = *param_1;
      lVar8 = param_1[1];
    }
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    lVar13 = param_1[2];
    param_1[2] = local_70;
    local_88 = lVar12;
    local_80 = (undefined8 *)lVar12;
    local_78 = (undefined8 *)lVar8;
    local_70 = lVar13;
    FUN_00d4008c(&local_88);
  }
  return;
}


