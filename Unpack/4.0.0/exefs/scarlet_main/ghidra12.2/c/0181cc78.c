/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0181cc78; name: FUN_0181cc78
 */


ulong FUN_0181cc78(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
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
    uVar4 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar13 + param_1[0xe] + -8;
    uVar9 = uVar4 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar9) =
         *(ulong *)(param_1[7] + uVar9) & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar4 < (ulong)(param_1[1] - *param_1 >> 6)) {
      puVar11 = (undefined8 *)(*param_1 + uVar4 * 0x40);
      pcVar6 = (code *)puVar11[1];
      if (pcVar6 != (code *)0x0) {
        puVar11[2] = 0;
        puVar11[3] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        (*pcVar6)(puVar11 + 4);
      }
      puVar11[4] = *param_2;
      *puVar11 = &LAB_00d94a58;
      puVar11[1] = &LAB_02a2715c;
      puVar11[2] = &LAB_02a27160;
      puVar11[3] = &LAB_02a2716c;
      if ((ulong)param_1[0x15] <= uVar4) {
        param_1[0x15] = uVar4 + 1;
      }
      return uVar4;
    }
  }
  puVar11 = (undefined8 *)param_1[1];
  uVar9 = (long)puVar11 - *param_1 >> 6;
  if (puVar11 < (undefined8 *)param_1[2]) {
    lVar13 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0181d0ec:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    uVar8 = *param_2;
    puVar11[3] = &LAB_02a2716c;
    puVar11[4] = uVar8;
    puVar11[2] = &LAB_02a27160;
    *puVar11 = &LAB_00d94a58;
    puVar11[1] = &LAB_02a2715c;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar11 + 8);
  }
  else {
    uVar7 = param_1[4];
    uVar4 = uVar9 + 1;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = param_1[2] - *param_1;
    uVar5 = lVar13 >> 5;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    plVar12 = param_1 + 3;
    local_60 = 0;
    if (uVar7 >> 1 <= (ulong)(lVar13 >> 6)) {
      uVar4 = uVar7;
    }
    local_58 = plVar12;
    if (uVar4 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar4 << 6,0x10);
      if (lVar13 == 0) {
        (**(code **)(*(long *)*plVar12 + 0xe8))();
      }
    }
    puVar11 = (undefined8 *)(lVar13 + uVar9 * 0x40);
    local_60 = lVar13 + uVar4 * 0x40;
    lVar13 = *plVar12;
    local_70 = puVar11;
    local_68 = puVar11;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_0181d0ec;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    uVar8 = *param_2;
    *puVar11 = &LAB_00d94a58;
    puVar11[1] = &LAB_02a2715c;
    puVar11[2] = &LAB_02a27160;
    puVar11[3] = &LAB_02a2716c;
    puVar11[4] = uVar8;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    local_68 = local_68 + 8;
    FUN_0181d0f8(plVar12,*param_1,param_1[1],&local_70);
    puVar10 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    lVar13 = param_1[2];
    *param_1 = (long)local_70;
    param_1[1] = (long)local_68;
    param_1[2] = local_60;
    local_70 = puVar10;
    local_68 = puVar11;
    local_60 = lVar13;
    while (puVar1 = puVar11, puVar1 != puVar10) {
      puVar11 = puVar1 + -8;
      pcVar6 = (code *)puVar1[-7];
      local_68 = puVar11;
      if (pcVar6 != (code *)0x0) {
        puVar1[-6] = 0;
        puVar1[-5] = 0;
        puVar1[-8] = 0;
        puVar1[-7] = 0;
        (*pcVar6)(puVar1 + -4);
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      lVar13 = lVar13 - (long)puVar10;
      plVar12 = (long *)*local_58;
      uVar4 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar10,lVar13,0x10);
      }
      else {
        FUN_00c48fe8(plVar12,puVar10,lVar13,0x10);
      }
    }
  }
  param_1[0x15] = uVar9 + 1;
  return uVar9;
}


