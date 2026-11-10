/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0103d31c; name: FUN_0103d31c
 */


ulong FUN_0103d31c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  while( true ) {
    lVar13 = param_1[0xf] - param_1[0xe];
    if (lVar13 == 0) break;
    uVar9 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar13 + param_1[0xe] + -8;
    uVar7 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar7) =
         *(ulong *)(param_1[7] + uVar7) & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar9 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar11 = (undefined8 *)(*param_1 + uVar9 * 0x80);
      pcVar5 = (code *)puVar11[1];
      if (pcVar5 != (code *)0x0) {
        puVar11[2] = 0;
        puVar11[3] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        (*pcVar5)(puVar11 + 4);
      }
      uVar1 = param_2[1];
      puVar11[4] = *param_2;
      puVar11[5] = uVar1;
      *puVar11 = &LAB_02df2ab0;
      puVar11[1] = &LAB_02df2b38;
      puVar11[2] = &LAB_02df2b3c;
      puVar11[3] = &LAB_02df2b48;
      if ((ulong)param_1[0x15] <= uVar9) {
        param_1[0x15] = uVar9 + 1;
      }
      return uVar9;
    }
  }
  puVar11 = (undefined8 *)param_1[1];
  uVar7 = (long)puVar11 - *param_1 >> 7;
  if (puVar11 < (undefined8 *)param_1[2]) {
    lVar13 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_0103d790:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    uVar1 = param_2[1];
    puVar11[4] = *param_2;
    puVar11[5] = uVar1;
    *puVar11 = &LAB_02df2ab0;
    puVar11[1] = &LAB_02df2b38;
    puVar11[2] = &LAB_02df2b3c;
    puVar11[3] = &LAB_02df2b48;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar11 + 0x10);
  }
  else {
    uVar8 = param_1[4];
    uVar9 = uVar7 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = param_1[2] - *param_1;
    uVar6 = lVar13 >> 6;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    plVar12 = param_1 + 3;
    local_60 = 0;
    if (uVar8 >> 1 <= (ulong)(lVar13 >> 7)) {
      uVar9 = uVar8;
    }
    local_58 = plVar12;
    if (uVar9 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar9 << 7,0x10);
      if (lVar13 == 0) {
        (**(code **)(*(long *)*plVar12 + 0xe8))();
      }
    }
    puVar11 = (undefined8 *)(lVar13 + uVar7 * 0x80);
    local_60 = lVar13 + uVar9 * 0x80;
    lVar13 = *plVar12;
    local_70 = puVar11;
    local_68 = puVar11;
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_0103d790;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    uVar1 = param_2[1];
    puVar11[4] = *param_2;
    puVar11[5] = uVar1;
    *puVar11 = &LAB_02df2ab0;
    puVar11[1] = &LAB_02df2b38;
    puVar11[2] = &LAB_02df2b3c;
    puVar11[3] = &LAB_02df2b48;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    local_68 = local_68 + 0x10;
    FUN_028e55ac(plVar12,*param_1,param_1[1],&local_70);
    puVar10 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    lVar13 = param_1[2];
    *param_1 = (long)local_70;
    param_1[1] = (long)local_68;
    param_1[2] = local_60;
    local_70 = puVar10;
    local_68 = puVar11;
    local_60 = lVar13;
    while (puVar2 = puVar11, puVar2 != puVar10) {
      puVar11 = puVar2 + -0x10;
      pcVar5 = (code *)puVar2[-0xf];
      local_68 = puVar11;
      if (pcVar5 != (code *)0x0) {
        puVar2[-0xe] = 0;
        puVar2[-0xd] = 0;
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        (*pcVar5)(puVar2 + -0xc);
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      lVar13 = lVar13 - (long)puVar10;
      plVar12 = (long *)*local_58;
      uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar9 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar10,lVar13,0x10);
      }
      else {
        FUN_00c48fe8(plVar12,puVar10,lVar13,0x10);
      }
    }
  }
  param_1[0x15] = uVar7 + 1;
  return uVar7;
}


