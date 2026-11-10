/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00df28a4; name: FUN_00df28a4
 */


ulong FUN_00df28a4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  while( true ) {
    lVar15 = param_1[0xf] - param_1[0xe];
    if (lVar15 == 0) break;
    uVar5 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar15 + param_1[0xe] + -8;
    uVar11 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar11) =
         *(ulong *)(param_1[7] + uVar11) & (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar5 < (ulong)(param_1[1] - *param_1 >> 6)) {
      puVar1 = (undefined8 *)(*param_1 + uVar5 * 0x40);
      pcVar8 = (code *)puVar1[1];
      if (pcVar8 != (code *)0x0) {
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        (*pcVar8)(puVar1 + 4);
      }
      puVar1[4] = *param_2;
      *puVar1 = &LAB_00d8bb08;
      puVar1[1] = FUN_02bcb820;
      puVar1[2] = &LAB_02bcb824;
      puVar1[3] = &LAB_02bcb830;
      if ((ulong)param_1[0x15] <= uVar5) {
        param_1[0x15] = uVar5 + 1;
      }
      return uVar5;
    }
  }
  puVar1 = (undefined8 *)param_1[1];
  uVar11 = (long)puVar1 - *param_1 >> 6;
  if (puVar1 < (undefined8 *)param_1[2]) {
    lVar15 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00df2da0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar15;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar10 = *param_2;
    puVar1[3] = &LAB_02bcb830;
    puVar1[4] = uVar10;
    puVar1[2] = &LAB_02bcb824;
    *puVar1 = &LAB_00d8bb08;
    puVar1[1] = FUN_02bcb820;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar1 + 8);
  }
  else {
    uVar9 = param_1[4];
    uVar5 = uVar11 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = param_1[2] - *param_1;
    uVar7 = lVar15 >> 5;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    plVar14 = param_1 + 3;
    local_60 = 0;
    if (uVar9 >> 1 <= (ulong)(lVar15 >> 6)) {
      uVar5 = uVar9;
    }
    plStack_58 = plVar14;
    if (uVar5 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar5 << 6,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar14 + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(local_78 + uVar11 * 0x40);
    local_60 = local_78 + uVar5 * 0x40;
    lVar15 = *plVar14;
    local_70 = puVar1;
    local_68 = puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00df2da0;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar15;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar10 = *param_2;
    puVar1[3] = &LAB_02bcb830;
    puVar1[4] = uVar10;
    puVar1[2] = &LAB_02bcb824;
    *puVar1 = &LAB_00d8bb08;
    puVar1[1] = FUN_02bcb820;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    local_68 = local_68 + 8;
    FUN_00df2dfc(param_1,&local_78);
    puVar12 = local_68;
    puVar1 = local_70;
    if (local_68 != local_70) {
      puVar13 = local_68 + -8;
      pcVar8 = (code *)local_68[-7];
      puVar4 = puVar13;
      if (pcVar8 != (code *)0x0) {
        puVar4 = local_68 + -4;
        local_68[-6] = 0;
        local_68[-5] = 0;
        *puVar13 = 0;
        local_68[-7] = 0;
        local_68 = puVar13;
        (*pcVar8)(puVar4);
        puVar4 = local_68;
      }
      local_68 = puVar4;
      if (puVar13 != puVar1) {
        puVar4 = puVar12 + -0x10;
        pcVar8 = (code *)puVar12[-0xf];
        local_68 = puVar4;
        if (pcVar8 != (code *)0x0) {
          puVar12[-0xe] = 0;
          puVar12[-0xd] = 0;
          *puVar4 = 0;
          puVar12[-0xf] = 0;
          (*pcVar8)(puVar12 + -0xc);
        }
        if (puVar4 != puVar1) {
          puVar4 = puVar12 + -0x18;
          pcVar8 = (code *)puVar12[-0x17];
          local_68 = puVar4;
          if (pcVar8 != (code *)0x0) {
            puVar12[-0x16] = 0;
            puVar12[-0x15] = 0;
            *puVar4 = 0;
            puVar12[-0x17] = 0;
            (*pcVar8)(puVar12 + -0x14);
          }
          if (puVar4 != puVar1) {
            puVar4 = puVar12 + -0x20;
            pcVar8 = (code *)puVar12[-0x1f];
            local_68 = puVar4;
            if (pcVar8 != (code *)0x0) {
              puVar12[-0x1e] = 0;
              puVar12[-0x1d] = 0;
              *puVar4 = 0;
              puVar12[-0x1f] = 0;
              (*pcVar8)(puVar12 + -0x1c);
            }
            if (puVar4 != puVar1) {
              do {
                local_68 = puVar12 + -0x28;
                pcVar8 = (code *)puVar12[-0x27];
                if (pcVar8 != (code *)0x0) {
                  puVar12[-0x26] = 0;
                  puVar12[-0x25] = 0;
                  *local_68 = 0;
                  puVar12[-0x27] = 0;
                  (*pcVar8)(puVar12 + -0x24);
                }
                puVar12 = puVar12 + -8;
              } while (puVar1 + 0x20 != puVar12);
            }
          }
        }
      }
    }
    lVar15 = local_78;
    if (local_78 != 0) {
      lVar3 = local_60 - local_78;
      plVar14 = (long *)*plStack_58;
      uVar5 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,lVar3,0x10);
      }
      else {
        FUN_00c48fe8(plVar14,lVar15,lVar3,0x10);
      }
    }
  }
  param_1[0x15] = uVar11 + 1;
  return uVar11;
}


