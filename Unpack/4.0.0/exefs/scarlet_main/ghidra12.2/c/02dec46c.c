/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02dec46c; name: FUN_02dec46c
 */


ulong FUN_02dec46c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  while( true ) {
    lVar14 = param_1[0xf] - param_1[0xe];
    if (lVar14 == 0) break;
    uVar10 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar14 + param_1[0xe] + -8;
    uVar8 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar8) =
         *(ulong *)(param_1[7] + uVar8) & (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar10 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar12 = (undefined8 *)(*param_1 + uVar10 * 0x80);
      pcVar6 = (code *)puVar12[1];
      if (pcVar6 != (code *)0x0) {
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = 0;
        puVar12[1] = 0;
        (*pcVar6)(puVar12 + 4);
      }
      uVar1 = param_2[1];
      puVar12[4] = *param_2;
      puVar12[5] = uVar1;
      puVar12[6] = 0;
      puVar12[7] = 0;
      FUN_00dbefa4(puVar12 + 6,param_2 + 2);
      puVar12[8] = 0;
      puVar12[9] = 0;
      FUN_00f34110(puVar12 + 8,param_2 + 4);
      *puVar12 = &LAB_02dec980;
      puVar12[1] = &LAB_02dec984;
      puVar12[2] = FUN_02decc98;
      puVar12[3] = FUN_02decce4;
      if ((ulong)param_1[0x15] <= uVar10) {
        param_1[0x15] = uVar10 + 1;
      }
      return uVar10;
    }
  }
  puVar12 = (undefined8 *)param_1[1];
  uVar8 = (long)puVar12 - *param_1 >> 7;
  if (puVar12 < (undefined8 *)param_1[2]) {
    lVar14 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_02dec974:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar14;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar12[7] = 0;
    puVar12[4] = uVar1;
    puVar12[5] = uVar2;
    puVar12[6] = 0;
    FUN_00dbefa4(puVar12 + 6,param_2 + 2);
    puVar12[9] = 0;
    puVar12[8] = 0;
    FUN_00f34110(puVar12 + 8,param_2 + 4);
    *puVar12 = &LAB_02dec980;
    puVar12[1] = &LAB_02dec984;
    puVar12[2] = FUN_02decc98;
    puVar12[3] = FUN_02decce4;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar12 + 0x10);
  }
  else {
    uVar9 = param_1[4];
    uVar10 = uVar8 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = param_1[2] - *param_1;
    uVar7 = lVar14 >> 6;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    plVar13 = param_1 + 3;
    local_70 = 0;
    if (uVar9 >> 1 <= (ulong)(lVar14 >> 7)) {
      uVar10 = uVar9;
    }
    local_68 = plVar13;
    if (uVar10 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar10 << 7,0x10);
      if (lVar14 == 0) {
        (**(code **)(*(long *)*plVar13 + 0xe8))();
      }
    }
    puVar12 = (undefined8 *)(lVar14 + uVar8 * 0x80);
    local_70 = lVar14 + uVar10 * 0x80;
    lVar14 = *plVar13;
    local_80 = puVar12;
    local_78 = puVar12;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_02dec974;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar14;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    puVar12[7] = 0;
    puVar12[4] = uVar1;
    puVar12[5] = uVar2;
    puVar12[6] = 0;
    FUN_00dbefa4(puVar12 + 6,param_2 + 2);
    puVar12[8] = 0;
    puVar12[9] = 0;
    FUN_00f34110(puVar12 + 8,param_2 + 4);
    *puVar12 = &LAB_02dec980;
    puVar12[1] = &LAB_02dec984;
    puVar12[2] = FUN_02decc98;
    puVar12[3] = FUN_02decce4;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    local_78 = local_78 + 0x10;
    FUN_028ce4b0(plVar13,*param_1,param_1[1],&local_80);
    puVar11 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    lVar14 = param_1[2];
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    param_1[2] = local_70;
    local_80 = puVar11;
    local_78 = puVar12;
    local_70 = lVar14;
    while (puVar3 = puVar12, puVar3 != puVar11) {
      puVar12 = puVar3 + -0x10;
      pcVar6 = (code *)puVar3[-0xf];
      local_78 = puVar12;
      if (pcVar6 != (code *)0x0) {
        puVar3[-0xe] = 0;
        puVar3[-0xd] = 0;
        puVar3[-0x10] = 0;
        puVar3[-0xf] = 0;
        (*pcVar6)(puVar3 + -0xc);
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      lVar14 = lVar14 - (long)puVar11;
      plVar13 = (long *)*local_68;
      uVar10 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar11,lVar14,0x10);
      }
      else {
        FUN_00c48fe8(plVar13,puVar11,lVar14,0x10);
      }
    }
  }
  param_1[0x15] = uVar8 + 1;
  return uVar8;
}


