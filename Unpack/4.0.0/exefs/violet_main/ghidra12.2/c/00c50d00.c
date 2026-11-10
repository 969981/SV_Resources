/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c50d00; name: FUN_00c50d00
 */


void FUN_00c50d00(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  int local_8c;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  undefined8 *puStack_68;
  
  uVar7 = *(uint *)(param_1 + 0x144);
  uVar1 = uVar7 + 1;
  *(uint *)(param_1 + 0x144) = uVar1;
  puVar8 = PTR_DAT_047e1c48;
  if ((ulong)uVar1 <= (ulong)(*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 5)) {
                    /* WARNING: Could not recover jumptable at 0x00c50d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)PTR_DAT_047e1c48)
              (param_1,*(undefined8 *)(*(long *)(param_1 + 0xe0) + (ulong)uVar7 * 0x20),
               *(undefined8 *)(param_1 + 0x120));
    return;
  }
  (**(code **)PTR_DAT_047e1970)(*(undefined8 *)(param_1 + 0x138),0x14,&local_8c);
  uVar14 = *(undefined8 *)(param_1 + 0x120);
  plVar6 = *(long **)(param_1 + 0x128);
  lVar16 = (long)local_8c;
  uVar10 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar14,lVar16);
  (**(code **)puVar8)(param_1,uVar10,*(undefined8 *)(param_1 + 0x120));
  puVar4 = *(undefined8 **)(param_1 + 0xe8);
  puVar2 = (undefined8 *)(param_1 + 0xf8);
  if (puVar4 < *(undefined8 **)(param_1 + 0xf0)) {
    uVar17 = *puVar2;
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      *puVar4 = uVar10;
      puVar4[1] = plVar6;
      puVar4[2] = uVar14;
      puVar4[3] = lVar16;
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00c510dc;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar17;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar4 = uVar10;
      puVar4[1] = plVar6;
      puVar4[2] = uVar14;
      puVar4[3] = lVar16;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0xe8) = puVar4 + 4;
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x100);
    lVar11 = (long)puVar4 - *(long *)(param_1 + 0xe0) >> 5;
    uVar3 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)*(undefined8 **)(param_1 + 0xf0) - *(long *)(param_1 + 0xe0);
    uVar13 = lVar12 >> 4;
    local_70 = 0;
    if (uVar3 <= uVar13) {
      uVar3 = uVar13;
    }
    if (uVar15 >> 1 <= (ulong)(lVar12 >> 5)) {
      uVar3 = uVar15;
    }
    puStack_68 = puVar2;
    if (uVar3 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar3 << 5,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xe8))();
      }
    }
    puVar4 = (undefined8 *)(local_88 + lVar11 * 0x20);
    local_70 = local_88 + uVar3 * 0x20;
    uVar17 = *puVar2;
    local_80 = puVar4;
    local_78 = puVar4;
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      *puVar4 = uVar10;
      puVar4[1] = plVar6;
      puVar4[2] = uVar14;
      puVar4[3] = lVar16;
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00c510dc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar17;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar4 = uVar10;
      puVar4[1] = plVar6;
      puVar4[2] = uVar14;
      puVar4[3] = lVar16;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    puVar8 = PTR_LAB_047d3900;
    local_78 = local_78 + 4;
    lVar16 = *(long *)(param_1 + 0xe0);
    lVar11 = *(long *)(param_1 + 0xe8);
    if (lVar11 == lVar16) {
      lVar11 = lVar16;
    }
    else {
      do {
        puVar4 = local_80;
        uVar14 = *puVar2;
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar8,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00c510dc;
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar14;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        uVar14 = *(undefined8 *)(lVar11 + -0x20);
        *(undefined8 *)(lVar11 + -0x20) = 0;
        puVar4[-4] = uVar14;
        uVar14 = *(undefined8 *)(lVar11 + -0x18);
        puVar5 = (undefined8 *)(lVar11 + -0x10);
        uVar10 = *(undefined8 *)(lVar11 + -8);
        lVar11 = lVar11 + -0x20;
        puVar4[-2] = *puVar5;
        puVar4[-1] = uVar10;
        puVar4[-3] = uVar14;
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        local_80 = local_80 + -4;
      } while (lVar16 != lVar11);
      lVar16 = *(long *)(param_1 + 0xe0);
      lVar11 = *(long *)(param_1 + 0xe8);
    }
    *(undefined8 **)(param_1 + 0xe0) = local_80;
    *(undefined8 **)(param_1 + 0xe8) = local_78;
    uVar14 = *(undefined8 *)(param_1 + 0xf0);
    *(long *)(param_1 + 0xf0) = local_70;
    local_88 = lVar16;
    local_80 = (undefined8 *)lVar16;
    local_78 = (undefined8 *)lVar11;
    local_70 = uVar14;
    FUN_00c546f8(&local_88);
  }
  return;
}


