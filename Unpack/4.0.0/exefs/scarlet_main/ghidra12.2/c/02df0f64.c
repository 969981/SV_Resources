/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02df0f64; name: FUN_02df0f64
 */


ulong FUN_02df0f64(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  while( true ) {
    lVar16 = param_1[0xf] - param_1[0xe];
    if (lVar16 == 0) break;
    uVar12 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar16 + param_1[0xe] + -8;
    uVar10 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar10) =
         *(ulong *)(param_1[7] + uVar10) & (1L << (uVar12 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar12 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar14 = (undefined8 *)(*param_1 + uVar12 * 0x80);
      pcVar8 = (code *)puVar14[1];
      if (pcVar8 != (code *)0x0) {
        puVar14[2] = 0;
        puVar14[3] = 0;
        *puVar14 = 0;
        puVar14[1] = 0;
        (*pcVar8)(puVar14 + 4);
      }
      uVar1 = *param_2;
      uVar3 = param_2[1];
      uVar2 = param_2[2];
      uVar4 = param_2[3];
      puVar14[8] = 0;
      puVar14[4] = uVar1;
      puVar14[5] = uVar3;
      puVar14[6] = uVar2;
      puVar14[7] = uVar4;
      puVar14[9] = 0;
      FUN_00fd9730(puVar14 + 8,param_2 + 4);
      *puVar14 = &LAB_02df1454;
      puVar14[1] = &LAB_02df1458;
      puVar14[2] = &LAB_02df1568;
      puVar14[3] = &LAB_02df1590;
      if ((ulong)param_1[0x15] <= uVar12) {
        param_1[0x15] = uVar12 + 1;
      }
      return uVar12;
    }
  }
  puVar14 = (undefined8 *)param_1[1];
  uVar10 = (long)puVar14 - *param_1 >> 7;
  if (puVar14 < (undefined8 *)param_1[2]) {
    lVar16 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_02df1448:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar16;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    uVar1 = *param_2;
    uVar3 = param_2[1];
    uVar2 = param_2[2];
    uVar4 = param_2[3];
    puVar14[9] = 0;
    puVar14[6] = uVar2;
    puVar14[7] = uVar4;
    puVar14[4] = uVar1;
    puVar14[5] = uVar3;
    puVar14[8] = 0;
    FUN_00fd9730(puVar14 + 8,param_2 + 4);
    *puVar14 = &LAB_02df1454;
    puVar14[1] = &LAB_02df1458;
    puVar14[2] = &LAB_02df1568;
    puVar14[3] = &LAB_02df1590;
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar14 + 0x10);
  }
  else {
    uVar11 = param_1[4];
    uVar12 = uVar10 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar16 = param_1[2] - *param_1;
    uVar9 = lVar16 >> 6;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    plVar15 = param_1 + 3;
    local_70 = 0;
    if (uVar11 >> 1 <= (ulong)(lVar16 >> 7)) {
      uVar12 = uVar11;
    }
    local_68 = plVar15;
    if (uVar12 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,uVar12 << 7,0x10);
      if (lVar16 == 0) {
        (**(code **)(*(long *)*plVar15 + 0xe8))();
      }
    }
    puVar14 = (undefined8 *)(lVar16 + uVar10 * 0x80);
    local_70 = lVar16 + uVar12 * 0x80;
    lVar16 = *plVar15;
    local_80 = puVar14;
    local_78 = puVar14;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_02df1448;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar16;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    uVar1 = *param_2;
    uVar3 = param_2[1];
    uVar2 = param_2[2];
    uVar4 = param_2[3];
    puVar14[8] = 0;
    puVar14[6] = uVar2;
    puVar14[7] = uVar4;
    puVar14[4] = uVar1;
    puVar14[5] = uVar3;
    puVar14[9] = 0;
    FUN_00fd9730(puVar14 + 8,param_2 + 4);
    *puVar14 = &LAB_02df1454;
    puVar14[1] = &LAB_02df1458;
    puVar14[2] = &LAB_02df1568;
    puVar14[3] = &LAB_02df1590;
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    local_78 = local_78 + 0x10;
    FUN_028ce4b0(plVar15,*param_1,param_1[1],&local_80);
    puVar13 = (undefined8 *)*param_1;
    puVar14 = (undefined8 *)param_1[1];
    lVar16 = param_1[2];
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    param_1[2] = local_70;
    local_80 = puVar13;
    local_78 = puVar14;
    local_70 = lVar16;
    while (puVar5 = puVar14, puVar5 != puVar13) {
      puVar14 = puVar5 + -0x10;
      pcVar8 = (code *)puVar5[-0xf];
      local_78 = puVar14;
      if (pcVar8 != (code *)0x0) {
        puVar5[-0xe] = 0;
        puVar5[-0xd] = 0;
        puVar5[-0x10] = 0;
        puVar5[-0xf] = 0;
        (*pcVar8)(puVar5 + -0xc);
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      lVar16 = lVar16 - (long)puVar13;
      plVar15 = (long *)*local_68;
      uVar12 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar12 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,puVar13,lVar16,0x10);
      }
      else {
        FUN_00c48fe8(plVar15,puVar13,lVar16,0x10);
      }
    }
  }
  param_1[0x15] = uVar10 + 1;
  return uVar10;
}


