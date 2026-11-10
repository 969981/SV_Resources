/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f79460; name: FUN_00f79460
 */


ulong FUN_00f79460(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  while( true ) {
    lVar9 = param_1[0xf] - param_1[0xe];
    if (lVar9 == 0) break;
    uVar6 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar9 + param_1[0xe] + -8;
    uVar14 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar14) =
         *(ulong *)(param_1[7] + uVar14) & (1L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar6 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar1 = (undefined8 *)(*param_1 + uVar6 * 0x80);
      pcVar12 = (code *)puVar1[1];
      if (pcVar12 != (code *)0x0) {
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        (*pcVar12)(puVar1 + 4);
      }
      uVar11 = *param_2;
      puVar1[5] = 0;
      puVar1[4] = uVar11;
      puVar1[6] = 0;
      FUN_00fd9730(puVar1 + 5,param_2 + 1);
      *puVar1 = PTR_LAB_047dc188;
      puVar1[1] = PTR_FUN_047dc190;
      puVar2 = PTR_LAB_047dc1a0;
      puVar1[2] = PTR_LAB_047dc198;
      puVar1[3] = puVar2;
      if ((ulong)param_1[0x15] <= uVar6) {
        param_1[0x15] = uVar6 + 1;
      }
      return uVar6;
    }
  }
  uVar14 = param_1[1] - *param_1 >> 7;
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_00f79878(param_1,param_2);
  }
  else {
    uVar13 = param_1[4];
    uVar6 = uVar14 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_1[2] - *param_1;
    uVar10 = lVar9 >> 6;
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    plVar16 = param_1 + 3;
    local_60 = 0;
    if (uVar13 >> 1 <= (ulong)(lVar9 >> 7)) {
      uVar6 = uVar13;
    }
    plStack_58 = plVar16;
    if (uVar6 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar6 << 7,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar16 + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(local_78 + uVar14 * 0x80);
    local_60 = local_78 + uVar6 * 0x80;
    lVar9 = *plVar16;
    local_70 = puVar1;
    local_68 = puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar11 = *param_2;
    puVar1[5] = 0;
    puVar1[4] = uVar11;
    puVar1[6] = 0;
    FUN_00fd9730(puVar1 + 5,param_2 + 1);
    puVar3 = PTR_LAB_047dc198;
    puVar2 = PTR_FUN_047dc190;
    *puVar1 = PTR_LAB_047dc188;
    puVar1[1] = puVar2;
    puVar1[2] = puVar3;
    puVar1[3] = PTR_LAB_047dc1a0;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    local_68 = local_68 + 0x10;
    FUN_00e94be8(param_1,&local_78);
    puVar15 = local_68;
    puVar1 = local_70;
    if (local_68 != local_70) {
      puVar17 = local_68 + -0x10;
      pcVar12 = (code *)local_68[-0xf];
      puVar7 = puVar17;
      if (pcVar12 != (code *)0x0) {
        puVar7 = local_68 + -0xc;
        local_68[-0xe] = 0;
        local_68[-0xd] = 0;
        *puVar17 = 0;
        local_68[-0xf] = 0;
        local_68 = puVar17;
        (*pcVar12)(puVar7);
        puVar7 = local_68;
      }
      local_68 = puVar7;
      if (puVar17 != puVar1) {
        puVar7 = puVar15 + -0x20;
        pcVar12 = (code *)puVar15[-0x1f];
        local_68 = puVar7;
        if (pcVar12 != (code *)0x0) {
          puVar15[-0x1e] = 0;
          puVar15[-0x1d] = 0;
          *puVar7 = 0;
          puVar15[-0x1f] = 0;
          (*pcVar12)(puVar15 + -0x1c);
        }
        if (puVar7 != puVar1) {
          do {
            local_68 = puVar15 + -0x30;
            pcVar12 = (code *)puVar15[-0x2f];
            if (pcVar12 != (code *)0x0) {
              puVar15[-0x2e] = 0;
              puVar15[-0x2d] = 0;
              *local_68 = 0;
              puVar15[-0x2f] = 0;
              (*pcVar12)(puVar15 + -0x2c);
            }
            puVar15 = puVar15 + -0x10;
          } while (puVar1 + 0x20 != puVar15);
        }
      }
    }
    lVar9 = local_78;
    if (local_78 != 0) {
      lVar5 = local_60 - local_78;
      plVar16 = (long *)*plStack_58;
      uVar6 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar9,lVar5,0x10);
      }
      else {
        FUN_00c48fe8(plVar16,lVar9,lVar5,0x10);
      }
    }
  }
  param_1[0x15] = uVar14 + 1;
  return uVar14;
}


