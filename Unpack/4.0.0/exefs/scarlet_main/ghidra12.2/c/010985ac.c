/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010985ac; name: FUN_010985ac
 */


ulong FUN_010985ac(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *plStack_58;
  
  while( true ) {
    lVar18 = param_1[0xf] - param_1[0xe];
    if (lVar18 == 0) break;
    uVar15 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar18 + param_1[0xe] + -8;
    uVar13 = uVar15 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar13) =
         *(ulong *)(param_1[7] + uVar13) & (1L << (uVar15 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar15 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar1 = (undefined8 *)(*param_1 + uVar15 * 0x80);
      pcVar10 = (code *)puVar1[1];
      if (pcVar10 != (code *)0x0) {
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        (*pcVar10)(puVar1 + 4);
      }
      uVar11 = param_2[1];
      puVar1[4] = *param_2;
      puVar1[5] = uVar11;
      uVar11 = param_2[2];
      param_2[2] = 0;
      puVar1[6] = uVar11;
      *puVar1 = PTR_LAB_047d9858;
      puVar1[1] = PTR_FUN_047d9860;
      puVar3 = PTR_LAB_047d9870;
      puVar1[2] = PTR_FUN_047d9868;
      puVar1[3] = puVar3;
      if ((ulong)param_1[0x15] <= uVar15) {
        param_1[0x15] = uVar15 + 1;
      }
      return uVar15;
    }
  }
  puVar1 = (undefined8 *)param_1[1];
  uVar13 = (long)puVar1 - *param_1 >> 7;
  plVar17 = param_1 + 3;
  if (puVar1 < (undefined8 *)param_1[2]) {
    lVar18 = *plVar17;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_01098a1c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar18;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar3 = PTR_LAB_047d9858;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar4 = PTR_FUN_047d9860;
    uVar11 = param_2[1];
    puVar1[4] = *param_2;
    puVar1[5] = uVar11;
    uVar11 = param_2[2];
    param_2[2] = 0;
    puVar5 = PTR_FUN_047d9868;
    puVar1[6] = uVar11;
    puVar6 = PTR_LAB_047d9870;
    *puVar1 = puVar3;
    puVar1[1] = puVar4;
    puVar1[2] = puVar5;
    puVar1[3] = puVar6;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar1 + 0x10);
  }
  else {
    uVar14 = param_1[4];
    uVar15 = uVar13 + 1;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = param_1[2] - *param_1;
    uVar12 = lVar18 >> 6;
    local_60 = 0;
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (uVar14 >> 1 <= (ulong)(lVar18 >> 7)) {
      uVar15 = uVar14;
    }
    plStack_58 = plVar17;
    if (uVar15 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*plVar17 + 0x10))((long *)*plVar17,uVar15 << 7,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*plVar17 + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(local_78 + uVar13 * 0x80);
    local_60 = local_78 + uVar15 * 0x80;
    lVar18 = *plVar17;
    local_70 = puVar1;
    local_68 = puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01098a1c;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar18;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar3 = PTR_LAB_047d9858;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar4 = PTR_FUN_047d9860;
    uVar11 = param_2[1];
    puVar1[4] = *param_2;
    puVar1[5] = uVar11;
    uVar11 = param_2[2];
    param_2[2] = 0;
    puVar5 = PTR_FUN_047d9868;
    puVar1[6] = uVar11;
    puVar6 = PTR_LAB_047d9870;
    *puVar1 = puVar3;
    puVar1[1] = puVar4;
    puVar1[2] = puVar5;
    puVar1[3] = puVar6;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    local_68 = local_68 + 0x10;
    FUN_0109ba94(param_1,&local_78);
    puVar1 = local_70;
    lVar18 = local_78;
    puVar16 = local_68;
    while (puVar2 = puVar16, local_78 = lVar18, puVar2 != puVar1) {
      puVar16 = puVar2 + -0x10;
      pcVar10 = (code *)puVar2[-0xf];
      local_68 = puVar16;
      if (pcVar10 != (code *)0x0) {
        puVar2[-0xe] = 0;
        puVar2[-0xd] = 0;
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        (*pcVar10)(puVar2 + -0xc);
        lVar18 = local_78;
      }
    }
    if (lVar18 != 0) {
      lVar8 = local_60 - lVar18;
      plVar17 = (long *)*plStack_58;
      uVar15 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar15 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar18,lVar8,0x10);
      }
      else {
        FUN_00c48fe8(plVar17,lVar18,lVar8,0x10);
      }
    }
  }
  param_1[0x15] = uVar13 + 1;
  return uVar13;
}


