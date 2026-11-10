/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bd30fc; name: FUN_02bd30fc
 */


ulong FUN_02bd30fc(long *param_1,void *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
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
      pcVar4 = (code *)puVar11[1];
      if (pcVar4 != (code *)0x0) {
        puVar11[2] = 0;
        puVar11[3] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        (*pcVar4)(puVar11 + 4);
      }
      memcpy(puVar11 + 4,param_2,0x28);
      uVar5 = *(undefined8 *)((long)param_2 + 0x28);
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[9] = uVar5;
      FUN_00cacc64(puVar11 + 10,(long)param_2 + 0x30);
      *puVar11 = &LAB_02bd3604;
      puVar11[1] = &LAB_02bd360c;
      puVar11[2] = &LAB_02bd371c;
      puVar11[3] = &LAB_02bd3764;
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
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_02bd35f8:
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
    memcpy(puVar11 + 4,param_2,0x28);
    puVar11[9] = *(undefined8 *)((long)param_2 + 0x28);
    puVar11[0xb] = 0;
    puVar11[10] = 0;
    FUN_00cacc64(puVar11 + 10,(long)param_2 + 0x30);
    *puVar11 = &LAB_02bd3604;
    puVar11[1] = &LAB_02bd360c;
    puVar11[2] = &LAB_02bd371c;
    puVar11[3] = &LAB_02bd3764;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
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
    local_70 = 0;
    if (uVar8 >> 1 <= (ulong)(lVar13 >> 7)) {
      uVar9 = uVar8;
    }
    local_68 = plVar12;
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
    local_70 = lVar13 + uVar9 * 0x80;
    lVar13 = *plVar12;
    local_80 = puVar11;
    local_78 = puVar11;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_02bd35f8;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    memcpy(puVar11 + 4,param_2,0x28);
    uVar5 = *(undefined8 *)((long)param_2 + 0x28);
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[9] = uVar5;
    FUN_00cacc64(puVar11 + 10,(long)param_2 + 0x30);
    *puVar11 = &LAB_02bd3604;
    puVar11[1] = &LAB_02bd360c;
    puVar11[2] = &LAB_02bd371c;
    puVar11[3] = &LAB_02bd3764;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    local_78 = local_78 + 0x10;
    FUN_0103360c(plVar12,*param_1,param_1[1],&local_80);
    puVar10 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    lVar13 = param_1[2];
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    param_1[2] = local_70;
    local_80 = puVar10;
    local_78 = puVar11;
    local_70 = lVar13;
    while (puVar1 = puVar11, puVar1 != puVar10) {
      puVar11 = puVar1 + -0x10;
      pcVar4 = (code *)puVar1[-0xf];
      local_78 = puVar11;
      if (pcVar4 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        (*pcVar4)(puVar1 + -0xc);
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      lVar13 = lVar13 - (long)puVar10;
      plVar12 = (long *)*local_68;
      uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar9 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
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


