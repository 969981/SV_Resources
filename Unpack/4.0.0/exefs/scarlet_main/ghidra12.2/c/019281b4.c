/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019281b4; name: FUN_019281b4
 */


void FUN_019281b4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  uVar9 = param_1[4];
  lVar13 = param_1[1] - *param_1 >> 7;
  uVar4 = lVar13 + 1;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  if (uVar9 < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1;
  uVar8 = lVar7 >> 6;
  if (uVar4 <= uVar8) {
    uVar4 = uVar8;
  }
  plVar12 = param_1 + 3;
  local_50 = 0;
  if (uVar9 >> 1 <= (ulong)(lVar7 >> 7)) {
    uVar4 = uVar9;
  }
  plStack_48 = plVar12;
  if (uVar4 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar4 << 7,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar12 + 0xe8))();
    }
  }
  puVar1 = (undefined8 *)(local_68 + lVar13 * 0x80);
  local_50 = local_68 + uVar4 * 0x80;
  lVar13 = *plVar12;
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
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar13;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar11 = *param_2;
  puVar1[3] = &LAB_02a4f43c;
  puVar1[4] = uVar11;
  puVar1[2] = &LAB_02a4f430;
  *puVar1 = &LAB_02a4f3f8;
  puVar1[1] = FUN_02a4f42c;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  local_58 = local_58 + 0x10;
  FUN_01926de4(param_1,&local_68);
  puVar1 = local_60;
  if (local_58 != local_60) {
    puVar6 = local_58 + -0x10;
    pcVar10 = (code *)local_58[-0xf];
    if (pcVar10 != (code *)0x0) {
      puVar3 = local_58 + -0xc;
      local_58[-0xe] = 0;
      local_58[-0xd] = 0;
      *puVar6 = 0;
      local_58[-0xf] = 0;
      local_58 = puVar6;
      (*pcVar10)(puVar3);
      puVar6 = local_58;
    }
    local_58 = puVar6;
    if (local_58 != puVar1) {
      puVar6 = local_58 + -0x10;
      pcVar10 = (code *)local_58[-0xf];
      if (pcVar10 != (code *)0x0) {
        puVar3 = local_58 + -0xc;
        local_58[-0xe] = 0;
        local_58[-0xd] = 0;
        *puVar6 = 0;
        local_58[-0xf] = 0;
        local_58 = puVar6;
        (*pcVar10)(puVar3);
        puVar6 = local_58;
      }
      local_58 = puVar6;
      if (local_58 != puVar1) {
        puVar6 = local_58 + -0x10;
        pcVar10 = (code *)local_58[-0xf];
        if (pcVar10 != (code *)0x0) {
          puVar3 = local_58 + -0xc;
          local_58[-0xe] = 0;
          local_58[-0xd] = 0;
          *puVar6 = 0;
          local_58[-0xf] = 0;
          local_58 = puVar6;
          (*pcVar10)(puVar3);
          puVar6 = local_58;
        }
        while (puVar3 = puVar6, local_58 = puVar3, puVar3 != puVar1) {
          local_58 = puVar3 + -0x10;
          pcVar10 = (code *)puVar3[-0xf];
          puVar6 = local_58;
          if (pcVar10 != (code *)0x0) {
            puVar3[-0xe] = 0;
            puVar3[-0xd] = 0;
            *local_58 = 0;
            puVar3[-0xf] = 0;
            (*pcVar10)(puVar3 + -0xc);
            puVar6 = local_58;
          }
        }
      }
    }
  }
  lVar13 = local_68;
  if (local_68 != 0) {
    lVar7 = local_50 - local_68;
    plVar12 = (long *)*plStack_48;
    uVar4 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,lVar7,0x10);
    }
    else {
      FUN_00c48fe8(plVar12,lVar13,lVar7,0x10);
    }
  }
  return;
}


