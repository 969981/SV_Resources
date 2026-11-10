/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9075c; name: FUN_01f9075c
 */


void FUN_01f9075c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  uVar9 = param_1[4];
  lVar14 = param_1[1] - *param_1 >> 6;
  uVar4 = lVar14 + 1;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  if (uVar9 < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1;
  uVar8 = lVar7 >> 5;
  if (uVar4 <= uVar8) {
    uVar4 = uVar8;
  }
  plVar13 = param_1 + 3;
  local_50 = 0;
  if (uVar9 >> 1 <= (ulong)(lVar7 >> 6)) {
    uVar4 = uVar9;
  }
  plStack_48 = plVar13;
  if (uVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar4 << 6,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar13 + 0xe8))();
    }
  }
  puVar1 = (undefined8 *)(local_68 + lVar14 * 0x40);
  local_50 = local_68 + uVar4 * 0x40;
  lVar14 = *plVar13;
  local_60 = puVar1;
  local_58 = puVar1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar14;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar10 = *param_2;
  puVar1[3] = &LAB_02a24ad8;
  puVar1[4] = uVar10;
  puVar1[2] = &LAB_02a24acc;
  *puVar1 = &LAB_01f90a54;
  puVar1[1] = FUN_02a24ac8;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  local_58 = local_58 + 8;
  FUN_01677e18(param_1,&local_68);
  puVar11 = local_58;
  puVar1 = local_60;
  if (local_58 != local_60) {
    puVar12 = local_58 + -8;
    pcVar6 = (code *)local_58[-7];
    puVar3 = puVar12;
    if (pcVar6 != (code *)0x0) {
      puVar3 = local_58 + -4;
      local_58[-6] = 0;
      local_58[-5] = 0;
      *puVar12 = 0;
      local_58[-7] = 0;
      local_58 = puVar12;
      (*pcVar6)(puVar3);
      puVar3 = local_58;
    }
    local_58 = puVar3;
    if (puVar12 != puVar1) {
      puVar3 = puVar11 + -0x10;
      pcVar6 = (code *)puVar11[-0xf];
      local_58 = puVar3;
      if (pcVar6 != (code *)0x0) {
        puVar11[-0xe] = 0;
        puVar11[-0xd] = 0;
        *puVar3 = 0;
        puVar11[-0xf] = 0;
        (*pcVar6)(puVar11 + -0xc);
      }
      if (puVar3 != puVar1) {
        puVar3 = puVar11 + -0x18;
        pcVar6 = (code *)puVar11[-0x17];
        local_58 = puVar3;
        if (pcVar6 != (code *)0x0) {
          puVar11[-0x16] = 0;
          puVar11[-0x15] = 0;
          *puVar3 = 0;
          puVar11[-0x17] = 0;
          (*pcVar6)(puVar11 + -0x14);
        }
        if (puVar3 != puVar1) {
          do {
            local_58 = puVar11 + -0x20;
            pcVar6 = (code *)puVar11[-0x1f];
            if (pcVar6 != (code *)0x0) {
              puVar11[-0x1e] = 0;
              puVar11[-0x1d] = 0;
              puVar11[-0x20] = 0;
              puVar11[-0x1f] = 0;
              (*pcVar6)(puVar11 + -0x1c);
            }
            puVar11 = puVar11 + -8;
          } while (puVar1 + 0x18 != puVar11);
        }
      }
    }
  }
  lVar14 = local_68;
  if (local_68 != 0) {
    lVar7 = local_50 - local_68;
    plVar13 = (long *)*plStack_48;
    uVar4 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar14,lVar7,0x10);
    }
    else {
      FUN_00c48fe8(plVar13,lVar14,lVar7,0x10);
    }
  }
  return;
}


