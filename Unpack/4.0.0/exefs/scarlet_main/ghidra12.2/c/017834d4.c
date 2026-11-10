/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017834d4; name: FUN_017834d4
 */


void FUN_017834d4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_01783834();
    return;
  }
  plVar11 = param_1 + 3;
  lVar3 = FUN_017837e4(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar12 = *param_1;
  lVar4 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar11;
  if (lVar3 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,lVar3 << 7,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar11 + 0xe8))();
    }
  }
  puVar1 = (undefined8 *)(local_68 + (lVar4 - lVar12 >> 7) * 0x80);
  local_50 = local_68 + lVar3 * 0x80;
  lVar12 = *plVar11;
  local_60 = puVar1;
  local_58 = puVar1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,puVar1 + 4);
    uVar7 = param_2[1];
    puVar1[3] = param_2[3];
    uVar10 = param_2[2];
    *puVar1 = *param_2;
    puVar1[1] = uVar7;
    puVar1[2] = uVar10;
    pcVar8 = (code *)param_2[1];
    if (pcVar8 != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar8)(param_2 + 4);
    }
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_58 = local_58 + 0x10;
  FUN_0168e4ec(param_1,&local_68);
  puVar1 = local_60;
  if (local_58 != local_60) {
    puVar9 = local_58 + -0x10;
    pcVar8 = (code *)local_58[-0xf];
    if (pcVar8 != (code *)0x0) {
      puVar5 = local_58 + -0xc;
      local_58[-0xe] = 0;
      local_58[-0xd] = 0;
      *puVar9 = 0;
      local_58[-0xf] = 0;
      local_58 = puVar9;
      (*pcVar8)(puVar5);
      puVar9 = local_58;
    }
    local_58 = puVar9;
    if (local_58 != puVar1) {
      puVar9 = local_58 + -0x10;
      pcVar8 = (code *)local_58[-0xf];
      if (pcVar8 != (code *)0x0) {
        puVar5 = local_58 + -0xc;
        local_58[-0xe] = 0;
        local_58[-0xd] = 0;
        *puVar9 = 0;
        local_58[-0xf] = 0;
        local_58 = puVar9;
        (*pcVar8)(puVar5);
        puVar9 = local_58;
      }
      local_58 = puVar9;
      if (local_58 != puVar1) {
        puVar9 = local_58 + -0x10;
        pcVar8 = (code *)local_58[-0xf];
        if (pcVar8 != (code *)0x0) {
          puVar5 = local_58 + -0xc;
          local_58[-0xe] = 0;
          local_58[-0xd] = 0;
          *puVar9 = 0;
          local_58[-0xf] = 0;
          local_58 = puVar9;
          (*pcVar8)(puVar5);
          puVar9 = local_58;
        }
        while (puVar5 = puVar9, local_58 = puVar5, puVar5 != puVar1) {
          local_58 = puVar5 + -0x10;
          pcVar8 = (code *)puVar5[-0xf];
          puVar9 = local_58;
          if (pcVar8 != (code *)0x0) {
            puVar5[-0xe] = 0;
            puVar5[-0xd] = 0;
            *local_58 = 0;
            puVar5[-0xf] = 0;
            (*pcVar8)(puVar5 + -0xc);
            puVar9 = local_58;
          }
        }
      }
    }
  }
  lVar12 = local_68;
  if (local_68 != 0) {
    lVar4 = local_50 - local_68;
    plVar11 = (long *)*plStack_48;
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar4,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,lVar12,lVar4,0x10);
    }
  }
  return;
}


