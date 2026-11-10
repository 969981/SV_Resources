/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f8fdc4; name: FUN_00f8fdc4
 */


void FUN_00f8fdc4(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  uVar10 = param_1[4];
  lVar14 = param_1[1] - *param_1 >> 7;
  uVar6 = lVar14 + 1;
  if (0x7ffffffffffffffe < uVar10) {
    uVar10 = 0x7fffffffffffffff;
  }
  if (uVar10 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1;
  uVar8 = lVar7 >> 6;
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  plVar13 = param_1 + 3;
  local_60 = 0;
  if (uVar10 >> 1 <= (ulong)(lVar7 >> 7)) {
    uVar6 = uVar10;
  }
  local_58 = plVar13;
  if (uVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar6 << 7,0x10);
    if (lVar7 == 0) {
      (**(code **)(*(long *)*plVar13 + 0xe8))();
    }
  }
  puVar11 = (undefined8 *)(lVar7 + lVar14 * 0x80);
  local_60 = lVar7 + uVar6 * 0x80;
  lVar14 = *plVar13;
  local_70 = puVar11;
  local_68 = puVar11;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
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
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  uVar1 = *param_2;
  puVar11[5] = 0;
  *(undefined1 *)(puVar11 + 4) = uVar1;
  puVar11[6] = 0;
  FUN_00fd9730(puVar11 + 5,param_2 + 8);
  puVar4 = PTR_LAB_047dd418;
  puVar3 = PTR_LAB_047dd410;
  *puVar11 = PTR_FUN_047dd408;
  puVar11[1] = puVar3;
  puVar11[2] = puVar4;
  puVar11[3] = PTR_LAB_047dd420;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  local_68 = local_68 + 0x10;
  FUN_00f9008c(plVar13,*param_1,param_1[1],&local_70);
  puVar12 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  lVar14 = param_1[2];
  *param_1 = (long)local_70;
  param_1[1] = (long)local_68;
  param_1[2] = local_60;
  local_70 = puVar12;
  local_68 = puVar11;
  local_60 = lVar14;
  while (puVar2 = puVar11, puVar2 != puVar12) {
    puVar11 = puVar2 + -0x10;
    pcVar9 = (code *)puVar2[-0xf];
    local_68 = puVar11;
    if (pcVar9 != (code *)0x0) {
      puVar2[-0xe] = 0;
      puVar2[-0xd] = 0;
      puVar2[-0x10] = 0;
      puVar2[-0xf] = 0;
      (*pcVar9)(puVar2 + -0xc);
    }
  }
  if (puVar12 != (undefined8 *)0x0) {
    lVar14 = lVar14 - (long)puVar12;
    plVar13 = (long *)*local_58;
    uVar6 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar12,lVar14,0x10);
    }
    else {
      FUN_00c48fe8(plVar13,puVar12,lVar14,0x10);
    }
  }
  return;
}


