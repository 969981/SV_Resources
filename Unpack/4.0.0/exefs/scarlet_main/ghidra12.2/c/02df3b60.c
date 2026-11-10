/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02df3b60; name: FUN_02df3b60
 */


ulong FUN_02df3b60(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  while( true ) {
    lVar15 = param_1[0xf] - param_1[0xe];
    if (lVar15 == 0) break;
    uVar11 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar15 + param_1[0xe] + -8;
    uVar7 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar7) =
         *(ulong *)(param_1[7] + uVar7) & (1L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar11 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar13 = (undefined8 *)(*param_1 + uVar11 * 0x80);
      pcVar5 = (code *)puVar13[1];
      if (pcVar5 != (code *)0x0) {
        puVar13[2] = 0;
        puVar13[3] = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        (*pcVar5)(puVar13 + 4);
      }
      uVar1 = *param_2;
      uVar9 = param_2[1];
      uVar8 = param_2[2];
      puVar13[7] = 0;
      puVar13[4] = uVar1;
      puVar13[8] = 0;
      puVar13[5] = uVar9;
      puVar13[6] = uVar8;
      FUN_00f34110(puVar13 + 7,param_2 + 3);
      *puVar13 = &LAB_02df4050;
      puVar13[1] = &LAB_02df4060;
      puVar13[2] = &LAB_02df4170;
      puVar13[3] = &LAB_02df4198;
      if ((ulong)param_1[0x15] <= uVar11) {
        param_1[0x15] = uVar11 + 1;
      }
      return uVar11;
    }
  }
  puVar13 = (undefined8 *)param_1[1];
  uVar7 = (long)puVar13 - *param_1 >> 7;
  if (puVar13 < (undefined8 *)param_1[2]) {
    lVar15 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_02df4044:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar15;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    uVar1 = param_2[1];
    uVar9 = param_2[2];
    puVar13[4] = *param_2;
    puVar13[5] = uVar1;
    puVar13[6] = uVar9;
    puVar13[7] = 0;
    puVar13[8] = 0;
    FUN_00f34110(puVar13 + 7,param_2 + 3);
    *puVar13 = &LAB_02df4050;
    puVar13[1] = &LAB_02df4060;
    puVar13[2] = &LAB_02df4170;
    puVar13[3] = &LAB_02df4198;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar13 + 0x10);
  }
  else {
    uVar10 = param_1[4];
    uVar11 = uVar7 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = param_1[2] - *param_1;
    uVar6 = lVar15 >> 6;
    if (uVar11 <= uVar6) {
      uVar11 = uVar6;
    }
    plVar14 = param_1 + 3;
    local_70 = 0;
    if (uVar10 >> 1 <= (ulong)(lVar15 >> 7)) {
      uVar11 = uVar10;
    }
    local_68 = plVar14;
    if (uVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar11 << 7,0x10);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*plVar14 + 0xe8))();
      }
    }
    puVar13 = (undefined8 *)(lVar15 + uVar7 * 0x80);
    local_70 = lVar15 + uVar11 * 0x80;
    lVar15 = *plVar14;
    local_80 = puVar13;
    local_78 = puVar13;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_02df4044;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar15;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    uVar8 = param_2[2];
    uVar1 = *param_2;
    uVar9 = param_2[1];
    puVar13[7] = 0;
    puVar13[5] = uVar9;
    puVar13[6] = uVar8;
    puVar13[4] = uVar1;
    puVar13[8] = 0;
    FUN_00f34110(puVar13 + 7,param_2 + 3);
    *puVar13 = &LAB_02df4050;
    puVar13[1] = &LAB_02df4060;
    puVar13[2] = &LAB_02df4170;
    puVar13[3] = &LAB_02df4198;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    local_78 = local_78 + 0x10;
    FUN_028ce4b0(plVar14,*param_1,param_1[1],&local_80);
    puVar12 = (undefined8 *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
    lVar15 = param_1[2];
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    param_1[2] = local_70;
    local_80 = puVar12;
    local_78 = puVar13;
    local_70 = lVar15;
    while (puVar2 = puVar13, puVar2 != puVar12) {
      puVar13 = puVar2 + -0x10;
      pcVar5 = (code *)puVar2[-0xf];
      local_78 = puVar13;
      if (pcVar5 != (code *)0x0) {
        puVar2[-0xe] = 0;
        puVar2[-0xd] = 0;
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        (*pcVar5)(puVar2 + -0xc);
      }
    }
    if (puVar12 != (undefined8 *)0x0) {
      lVar15 = lVar15 - (long)puVar12;
      plVar14 = (long *)*local_68;
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,lVar15,0x10);
      }
      else {
        FUN_00c48fe8(plVar14,puVar12,lVar15,0x10);
      }
    }
  }
  param_1[0x15] = uVar7 + 1;
  return uVar7;
}


