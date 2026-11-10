/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f98048; name: FUN_01f98048
 */


void FUN_01f98048(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  uVar7 = param_1[4];
  lVar12 = param_1[1] - *param_1 >> 6;
  uVar3 = lVar12 + 1;
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  uVar5 = lVar4 >> 5;
  if (uVar3 <= uVar5) {
    uVar3 = uVar5;
  }
  plVar11 = param_1 + 3;
  local_50 = 0;
  if (uVar7 >> 1 <= (ulong)(lVar4 >> 6)) {
    uVar3 = uVar7;
  }
  local_48 = plVar11;
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar3 << 6,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar11 + 0xe8))();
    }
  }
  puVar9 = (undefined8 *)(lVar4 + lVar12 * 0x40);
  local_50 = lVar4 + uVar3 * 0x40;
  lVar12 = *plVar11;
  local_60 = puVar9;
  local_58 = puVar9;
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
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  uVar8 = *param_2;
  *puVar9 = &LAB_01f982ec;
  puVar9[1] = &LAB_02a27118;
  puVar9[2] = &LAB_02a2711c;
  puVar9[3] = &LAB_02a27128;
  puVar9[4] = uVar8;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_58 = local_58 + 8;
  FUN_0181d0f8(plVar11,*param_1,param_1[1],&local_60);
  puVar10 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar12 = param_1[2];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  param_1[2] = local_50;
  local_60 = puVar10;
  local_58 = puVar9;
  local_50 = lVar12;
  while (puVar1 = puVar9, puVar1 != puVar10) {
    puVar9 = puVar1 + -8;
    pcVar6 = (code *)puVar1[-7];
    local_58 = puVar9;
    if (pcVar6 != (code *)0x0) {
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-8] = 0;
      puVar1[-7] = 0;
      (*pcVar6)(puVar1 + -4);
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    lVar12 = lVar12 - (long)puVar10;
    plVar11 = (long *)*local_48;
    uVar3 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,lVar12,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,puVar10,lVar12,0x10);
    }
  }
  return;
}


