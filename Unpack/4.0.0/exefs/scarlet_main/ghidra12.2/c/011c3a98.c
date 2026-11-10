/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c3a98; name: FUN_011c3a98
 */


ulong FUN_011c3a98(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *local_48;
  
  while( true ) {
    lVar8 = param_1[0xf] - param_1[0xe];
    if (lVar8 == 0) break;
    uVar7 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar8 + param_1[0xe] + -8;
    uVar12 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar12) =
         *(ulong *)(param_1[7] + uVar12) & (1L << (uVar7 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar7 < (ulong)(param_1[1] - *param_1 >> 6)) {
      puVar16 = (undefined8 *)(*param_1 + uVar7 * 0x40);
      pcVar10 = (code *)puVar16[1];
      if (pcVar10 != (code *)0x0) {
        puVar16[2] = 0;
        puVar16[3] = 0;
        *puVar16 = 0;
        puVar16[1] = 0;
        (*pcVar10)(puVar16 + 4);
      }
      puVar16[4] = 0;
      puVar16[5] = 0;
      FUN_01084328(puVar16 + 4,param_2);
      *puVar16 = PTR_LAB_047d9b30;
      puVar16[1] = PTR_LAB_047d9b38;
      puVar2 = PTR_LAB_047d9b48;
      puVar16[2] = PTR_LAB_047d9b40;
      puVar16[3] = puVar2;
      if ((ulong)param_1[0x15] <= uVar7) {
        param_1[0x15] = uVar7 + 1;
      }
      return uVar7;
    }
  }
  uVar12 = param_1[1] - *param_1 >> 6;
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_011c4168(param_1,param_2);
  }
  else {
    uVar11 = param_1[4];
    uVar7 = uVar12 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = param_1[2] - *param_1;
    uVar9 = lVar8 >> 5;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    plVar13 = param_1 + 3;
    if (uVar11 >> 1 <= (ulong)(lVar8 >> 6)) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar7 << 6,0x10);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*plVar13 + 0xe8))();
      }
    }
    lVar15 = *plVar13;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
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
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    puVar16 = (undefined8 *)(lVar8 + uVar12 * 0x40);
    puVar16[4] = 0;
    puVar16[5] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    FUN_01084328(puVar16 + 4,param_2);
    puVar4 = PTR_LAB_047d9b48;
    puVar3 = PTR_LAB_047d9b40;
    puVar2 = PTR_LAB_047d9b38;
    *puVar16 = PTR_LAB_047d9b30;
    puVar16[1] = puVar2;
    puVar16[2] = puVar3;
    puVar16[3] = puVar4;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    puVar14 = (undefined8 *)*param_1;
    local_48 = (undefined8 *)param_1[1];
    puVar1 = puVar16 + 8;
    if (local_48 == puVar14) {
      puVar17 = puVar14;
    }
    else {
      puVar16 = puVar16 + -8;
      FUN_011c4044(plVar13,puVar16,local_48 + -8);
      if (local_48 + -8 != puVar14) {
        do {
          puVar16 = puVar16 + -8;
          FUN_011c4044(plVar13,puVar16,local_48 + -0x10);
          local_48 = local_48 + -8;
        } while (puVar14 + 8 != local_48);
      }
      puVar14 = (undefined8 *)*param_1;
      puVar17 = (undefined8 *)param_1[1];
    }
    *param_1 = (long)puVar16;
    param_1[1] = (long)puVar1;
    lVar15 = param_1[2];
    param_1[2] = lVar8 + uVar7 * 0x40;
    if (puVar17 != puVar14) {
      pcVar10 = (code *)puVar17[-7];
      puVar16 = puVar17 + -8;
      if (pcVar10 != (code *)0x0) {
        puVar17[-6] = 0;
        puVar17[-5] = 0;
        *puVar16 = 0;
        puVar17[-7] = 0;
        (*pcVar10)(puVar17 + -4);
      }
      while (puVar1 = puVar16, puVar1 != puVar14) {
        pcVar10 = (code *)puVar1[-7];
        puVar16 = puVar1 + -8;
        if (pcVar10 != (code *)0x0) {
          puVar1[-6] = 0;
          puVar1[-5] = 0;
          puVar1[-8] = 0;
          puVar1[-7] = 0;
          (*pcVar10)(puVar1 + -4);
        }
      }
    }
    if (puVar14 != (undefined8 *)0x0) {
      plVar13 = (long *)*plVar13;
      uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar14,lVar15 - (long)puVar14,0x10);
      }
      else {
        FUN_00c48fe8(plVar13,puVar14,lVar15 - (long)puVar14,0x10);
      }
    }
  }
  param_1[0x15] = uVar12 + 1;
  return uVar12;
}


