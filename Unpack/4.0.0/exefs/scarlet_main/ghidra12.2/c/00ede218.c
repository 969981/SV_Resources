/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ede218; name: FUN_00ede218
 */


void FUN_00ede218(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  puVar3 = PTR_LAB_047d3900;
  puVar14 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar14 >> 3) < param_2) {
    uVar13 = param_1[4];
    lVar12 = (long)puVar14 - *param_1 >> 3;
    uVar2 = param_2 + lVar12;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = param_1[2] - *param_1;
    uVar9 = lVar8 >> 2;
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    plVar1 = param_1 + 3;
    if (uVar13 >> 1 <= (ulong)(lVar8 >> 3)) {
      uVar2 = uVar13;
    }
    local_70 = 0;
    local_68 = plVar1;
    if (uVar2 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar2 << 3,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    puVar3 = PTR_LAB_047d3900;
    puVar14 = (undefined8 *)(local_88 + lVar12 * 8);
    local_70 = local_88 + uVar2 * 8;
    lVar12 = param_2 * 8;
    puVar15 = puVar14 + param_2;
    plVar10 = plVar1;
    local_80 = puVar14;
    local_78 = puVar14;
    while( true ) {
      lVar12 = lVar12 + -8;
      lVar8 = *plVar10;
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar3,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 == 0) {
        *puVar14 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00ede5a0;
        *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *puVar14 = 0;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      puVar4 = PTR_LAB_047d3900;
      if (lVar12 == 0) break;
      puVar14 = puVar14 + 1;
      plVar10 = local_68;
    }
    lVar12 = *param_1;
    lVar8 = param_1[1];
    local_78 = puVar15;
    if (lVar8 == lVar12) {
      lVar8 = lVar12;
    }
    else {
      do {
        puVar14 = local_80;
        lVar6 = *plVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar4,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 == 0) {
          uVar11 = *(undefined8 *)(lVar8 + -8);
          *(undefined8 *)(lVar8 + -8) = 0;
          puVar14[-1] = uVar11;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00ede5a0;
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar6;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          uVar11 = *(undefined8 *)(lVar8 + -8);
          *(undefined8 *)(lVar8 + -8) = 0;
          puVar14[-1] = uVar11;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        lVar8 = lVar8 + -8;
        local_80 = local_80 + -1;
      } while (lVar12 != lVar8);
      lVar12 = *param_1;
      lVar8 = param_1[1];
    }
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    lVar6 = param_1[2];
    param_1[2] = local_70;
    local_88 = lVar12;
    local_80 = (undefined8 *)lVar12;
    local_78 = (undefined8 *)lVar8;
    local_70 = lVar6;
    FUN_00ebb704(&local_88);
  }
  else {
    puVar15 = puVar14;
    if (param_2 != 0) {
      puVar15 = puVar14 + param_2;
      lVar12 = param_2 << 3;
      do {
        lVar8 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar3,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          *puVar14 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_00ede5a0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar8;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          *puVar14 = 0;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        puVar14 = puVar14 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    param_1[1] = (long)puVar15;
  }
  return;
}


