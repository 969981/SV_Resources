/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a752f4; name: FUN_02a752f4
 */


ulong FUN_02a752f4(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  while( true ) {
    lVar18 = param_1[0xf] - param_1[0xe];
    if (lVar18 == 0) break;
    uVar14 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar18 + param_1[0xe] + -8;
    uVar11 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar11) =
         *(ulong *)(param_1[7] + uVar11) & (1L << (uVar14 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar14 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar16 = (undefined8 *)(*param_1 + uVar14 * 0x80);
      pcVar9 = (code *)puVar16[1];
      if (pcVar9 != (code *)0x0) {
        puVar16[2] = 0;
        puVar16[3] = 0;
        *puVar16 = 0;
        puVar16[1] = 0;
        (*pcVar9)(puVar16 + 4);
      }
      uVar1 = *param_2;
      uVar12 = param_2[2];
      puVar16[5] = param_2[1];
      puVar16[6] = uVar12;
      puVar16[4] = uVar1;
      *puVar16 = PTR_LAB_047dc8b0;
      puVar16[1] = PTR_LAB_047dc8b8;
      puVar3 = PTR_LAB_047dc8c8;
      puVar16[2] = PTR_LAB_047dc8c0;
      puVar16[3] = puVar3;
      if ((ulong)param_1[0x15] <= uVar14) {
        param_1[0x15] = uVar14 + 1;
      }
      return uVar14;
    }
  }
  puVar16 = (undefined8 *)param_1[1];
  uVar11 = (long)puVar16 - *param_1 >> 7;
  plVar17 = param_1 + 3;
  if (puVar16 < (undefined8 *)param_1[2]) {
    lVar18 = *plVar17;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_02a75780:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar18;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar3 = PTR_LAB_047dc8b0;
    uVar1 = *param_2;
    uVar12 = param_2[1];
    puVar16[6] = param_2[2];
    puVar4 = PTR_LAB_047dc8b8;
    puVar16[4] = uVar1;
    puVar16[5] = uVar12;
    puVar6 = PTR_LAB_047dc8c8;
    puVar5 = PTR_LAB_047dc8c0;
    *puVar16 = puVar3;
    puVar16[1] = puVar4;
    puVar16[2] = puVar5;
    puVar16[3] = puVar6;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar16 + 0x10);
  }
  else {
    uVar13 = param_1[4];
    uVar14 = uVar11 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar14) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = param_1[2] - *param_1;
    uVar10 = lVar18 >> 6;
    local_60 = 0;
    if (uVar14 <= uVar10) {
      uVar14 = uVar10;
    }
    if (uVar13 >> 1 <= (ulong)(lVar18 >> 7)) {
      uVar14 = uVar13;
    }
    local_58 = plVar17;
    if (uVar14 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = (**(code **)(*(long *)*plVar17 + 0x10))((long *)*plVar17,uVar14 << 7,0x10);
      if (lVar18 == 0) {
        (**(code **)(*(long *)*plVar17 + 0xe8))();
      }
    }
    puVar16 = (undefined8 *)(lVar18 + uVar11 * 0x80);
    local_60 = lVar18 + uVar14 * 0x80;
    lVar18 = *plVar17;
    local_70 = puVar16;
    local_68 = puVar16;
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02a75780;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar18;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar3 = PTR_LAB_047dc8b0;
    uVar1 = *param_2;
    uVar12 = param_2[1];
    puVar16[6] = param_2[2];
    puVar4 = PTR_LAB_047dc8b8;
    puVar16[4] = uVar1;
    puVar16[5] = uVar12;
    puVar6 = PTR_LAB_047dc8c8;
    puVar5 = PTR_LAB_047dc8c0;
    *puVar16 = puVar3;
    puVar16[1] = puVar4;
    puVar16[2] = puVar5;
    puVar16[3] = puVar6;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    local_68 = local_68 + 0x10;
    FUN_010095a4(plVar17,*param_1,param_1[1],&local_70);
    puVar15 = (undefined8 *)*param_1;
    puVar16 = (undefined8 *)param_1[1];
    lVar18 = param_1[2];
    *param_1 = (long)local_70;
    param_1[1] = (long)local_68;
    param_1[2] = local_60;
    local_70 = puVar15;
    local_68 = puVar16;
    local_60 = lVar18;
    while (puVar2 = puVar16, puVar2 != puVar15) {
      puVar16 = puVar2 + -0x10;
      pcVar9 = (code *)puVar2[-0xf];
      local_68 = puVar16;
      if (pcVar9 != (code *)0x0) {
        puVar2[-0xe] = 0;
        puVar2[-0xd] = 0;
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        (*pcVar9)(puVar2 + -0xc);
      }
    }
    if (puVar15 != (undefined8 *)0x0) {
      lVar18 = lVar18 - (long)puVar15;
      plVar17 = (long *)*local_58;
      uVar14 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar14 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,puVar15,lVar18,0x10);
      }
      else {
        FUN_00c48fe8(plVar17,puVar15,lVar18,0x10);
      }
    }
  }
  param_1[0x15] = uVar11 + 1;
  return uVar11;
}


