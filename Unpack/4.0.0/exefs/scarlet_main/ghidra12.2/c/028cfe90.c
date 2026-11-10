/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028cfe90; name: FUN_028cfe90
 */


void FUN_028cfe90(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  uVar8 = param_1[4];
  lVar12 = param_1[1] - *param_1 >> 7;
  uVar4 = lVar12 + 1;
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (uVar8 < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  uVar6 = lVar5 >> 6;
  if (uVar4 <= uVar6) {
    uVar4 = uVar6;
  }
  plVar11 = param_1 + 3;
  local_50 = 0;
  if (uVar8 >> 1 <= (ulong)(lVar5 >> 7)) {
    uVar4 = uVar8;
  }
  local_48 = plVar11;
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar4 << 7,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar11 + 0xe8))();
    }
  }
  puVar9 = (undefined8 *)(lVar5 + lVar12 * 0x80);
  local_50 = lVar5 + uVar4 * 0x80;
  lVar12 = *plVar11;
  local_60 = puVar9;
  local_58 = puVar9;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
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
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  uVar1 = param_2[1];
  puVar9[4] = *param_2;
  puVar9[5] = uVar1;
  *puVar9 = &LAB_028d0134;
  puVar9[1] = &LAB_02de8b98;
  puVar9[2] = &LAB_02de8b9c;
  puVar9[3] = &LAB_02de8ba8;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_58 = local_58 + 0x10;
  FUN_028ce4b0(plVar11,*param_1,param_1[1],&local_60);
  puVar10 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar12 = param_1[2];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  param_1[2] = local_50;
  local_60 = puVar10;
  local_58 = puVar9;
  local_50 = lVar12;
  while (puVar2 = puVar9, puVar2 != puVar10) {
    puVar9 = puVar2 + -0x10;
    pcVar7 = (code *)puVar2[-0xf];
    local_58 = puVar9;
    if (pcVar7 != (code *)0x0) {
      puVar2[-0xe] = 0;
      puVar2[-0xd] = 0;
      puVar2[-0x10] = 0;
      puVar2[-0xf] = 0;
      (*pcVar7)(puVar2 + -0xc);
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    lVar12 = lVar12 - (long)puVar10;
    plVar11 = (long *)*local_48;
    uVar4 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,lVar12,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,puVar10,lVar12,0x10);
    }
  }
  return;
}


