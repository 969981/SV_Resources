/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db2d64; name: FUN_01db2d64
 */


void FUN_01db2d64(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar10 = param_1 + 3;
  lVar5 = FUN_01db0aa0(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar11 = *param_1;
  lVar6 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar10;
  if (lVar5 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,lVar5 << 7,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xe8))();
    }
  }
  puVar1 = (undefined8 *)(local_68 + (lVar6 - lVar11 >> 7) * 0x80);
  local_50 = local_68 + lVar5 * 0x80;
  lVar11 = *plVar10;
  local_60 = puVar1;
  local_58 = puVar1;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar2 = param_2[1];
  puVar1[4] = *param_2;
  puVar1[5] = uVar2;
  *puVar1 = &LAB_01db2fb0;
  puVar1[1] = FUN_00a2ddc0;
  puVar1[2] = &LAB_00a2ddc4;
  puVar1[3] = &LAB_00a2ddd0;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  local_58 = local_58 + 0x10;
  FUN_01db0af0(param_1,&local_68);
  puVar1 = local_60;
  lVar11 = local_68;
  puVar9 = local_58;
  while (puVar3 = puVar9, local_68 = lVar11, puVar3 != puVar1) {
    puVar9 = puVar3 + -0x10;
    pcVar8 = (code *)puVar3[-0xf];
    local_58 = puVar9;
    if (pcVar8 != (code *)0x0) {
      puVar3[-0xe] = 0;
      puVar3[-0xd] = 0;
      puVar3[-0x10] = 0;
      puVar3[-0xf] = 0;
      (*pcVar8)(puVar3 + -0xc);
      lVar11 = local_68;
    }
  }
  if (lVar11 != 0) {
    lVar6 = local_50 - lVar11;
    plVar10 = (long *)*plStack_48;
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar6,0x10);
    }
    else {
      FUN_00c48fe8(plVar10,lVar11,lVar6,0x10);
    }
  }
  return;
}


