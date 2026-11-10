/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a63e48; name: FUN_02a63e48
 */


ulong FUN_02a63e48(long *param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
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
      pcVar7 = (code *)puVar14[1];
      if (pcVar7 != (code *)0x0) {
        puVar14[2] = 0;
        puVar14[3] = 0;
        *puVar14 = 0;
        puVar14[1] = 0;
        (*pcVar7)(puVar14 + 4);
      }
      memcpy(puVar14 + 4,param_2,0x28);
      uVar8 = *(undefined8 *)((long)param_2 + 0x28);
      puVar14[10] = 0;
      puVar14[0xb] = 0;
      puVar14[9] = uVar8;
      FUN_00fd9730(puVar14 + 10,(long)param_2 + 0x30);
      *puVar14 = PTR_LAB_047dc1a8;
      puVar14[1] = PTR_LAB_047dc1b0;
      puVar2 = PTR_LAB_047dc1c0;
      puVar14[2] = PTR_LAB_047dc1b8;
      puVar14[3] = puVar2;
      if ((ulong)param_1[0x15] <= uVar12) {
        param_1[0x15] = uVar12 + 1;
      }
      return uVar12;
    }
  }
  puVar14 = (undefined8 *)param_1[1];
  uVar10 = (long)puVar14 - *param_1 >> 7;
  plVar15 = param_1 + 3;
  if (puVar14 < (undefined8 *)param_1[2]) {
    lVar16 = *plVar15;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_02a64344:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar16;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    memcpy(puVar14 + 4,param_2,0x28);
    puVar14[9] = *(undefined8 *)((long)param_2 + 0x28);
    puVar14[0xb] = 0;
    puVar14[10] = 0;
    FUN_00fd9730(puVar14 + 10,(long)param_2 + 0x30);
    puVar4 = PTR_LAB_047dc1c0;
    puVar3 = PTR_LAB_047dc1b8;
    puVar2 = PTR_LAB_047dc1b0;
    *puVar14 = PTR_LAB_047dc1a8;
    puVar14[1] = puVar2;
    puVar14[2] = puVar3;
    puVar14[3] = puVar4;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
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
    local_70 = 0;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
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
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_02a64344;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar16;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    memcpy(puVar14 + 4,param_2,0x28);
    uVar8 = *(undefined8 *)((long)param_2 + 0x28);
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    puVar14[9] = uVar8;
    FUN_00fd9730(puVar14 + 10,(long)param_2 + 0x30);
    puVar3 = PTR_LAB_047dc1b8;
    puVar2 = PTR_LAB_047dc1b0;
    *puVar14 = PTR_LAB_047dc1a8;
    puVar14[1] = puVar2;
    puVar14[2] = puVar3;
    puVar14[3] = PTR_LAB_047dc1c0;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    local_78 = local_78 + 0x10;
    FUN_010095a4(plVar15,*param_1,param_1[1],&local_80);
    puVar13 = (undefined8 *)*param_1;
    puVar14 = (undefined8 *)param_1[1];
    lVar16 = param_1[2];
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    param_1[2] = local_70;
    local_80 = puVar13;
    local_78 = puVar14;
    local_70 = lVar16;
    while (puVar1 = puVar14, puVar1 != puVar13) {
      puVar14 = puVar1 + -0x10;
      pcVar7 = (code *)puVar1[-0xf];
      local_78 = puVar14;
      if (pcVar7 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        (*pcVar7)(puVar1 + -0xc);
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      lVar16 = lVar16 - (long)puVar13;
      plVar15 = (long *)*local_68;
      uVar12 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar12 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
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


