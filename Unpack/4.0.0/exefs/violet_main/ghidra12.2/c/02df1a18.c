/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02df1a18; name: FUN_02df1a18
 */


ulong FUN_02df1a18(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  while( true ) {
    lVar12 = param_1[0xf] - param_1[0xe];
    if (lVar12 == 0) break;
    uVar8 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar12 + param_1[0xe] + -8;
    uVar6 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar6) =
         *(ulong *)(param_1[7] + uVar6) & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar8 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar10 = (undefined8 *)(*param_1 + uVar8 * 0x80);
      pcVar4 = (code *)puVar10[1];
      if (pcVar4 != (code *)0x0) {
        puVar10[2] = 0;
        puVar10[3] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        (*pcVar4)(puVar10 + 4);
      }
      puVar10[4] = *param_2;
      puVar10[6] = 0;
      puVar10[5] = 0;
      FUN_00dbefa4(puVar10 + 5,param_2 + 1);
      puVar10[7] = 0;
      puVar10[8] = 0;
      FUN_00f34110(puVar10 + 7,param_2 + 3);
      *puVar10 = &LAB_02df1f2c;
      puVar10[1] = &LAB_02df1f40;
      puVar10[2] = &LAB_02df2120;
      puVar10[3] = &LAB_02df216c;
      if ((ulong)param_1[0x15] <= uVar8) {
        param_1[0x15] = uVar8 + 1;
      }
      return uVar8;
    }
  }
  puVar10 = (undefined8 *)param_1[1];
  uVar6 = (long)puVar10 - *param_1 >> 7;
  if (puVar10 < (undefined8 *)param_1[2]) {
    lVar12 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_02df1f20:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[4] = *param_2;
    puVar10[5] = 0;
    puVar10[6] = 0;
    FUN_00dbefa4(puVar10 + 5,param_2 + 1);
    puVar10[8] = 0;
    puVar10[7] = 0;
    FUN_00f34110(puVar10 + 7,param_2 + 3);
    *puVar10 = &LAB_02df1f2c;
    puVar10[1] = &LAB_02df1f40;
    puVar10[2] = &LAB_02df2120;
    puVar10[3] = &LAB_02df216c;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar10 + 0x10);
  }
  else {
    uVar7 = param_1[4];
    uVar8 = uVar6 + 1;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_1[2] - *param_1;
    uVar5 = lVar12 >> 6;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    plVar11 = param_1 + 3;
    local_70 = 0;
    if (uVar7 >> 1 <= (ulong)(lVar12 >> 7)) {
      uVar8 = uVar7;
    }
    local_68 = plVar11;
    if (uVar8 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar8 << 7,0x10);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*plVar11 + 0xe8))();
      }
    }
    puVar10 = (undefined8 *)(lVar12 + uVar6 * 0x80);
    local_70 = lVar12 + uVar8 * 0x80;
    lVar12 = *plVar11;
    local_80 = puVar10;
    local_78 = puVar10;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_02df1f20;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[4] = *param_2;
    puVar10[5] = 0;
    puVar10[6] = 0;
    FUN_00dbefa4(puVar10 + 5,param_2 + 1);
    puVar10[7] = 0;
    puVar10[8] = 0;
    FUN_00f34110(puVar10 + 7,param_2 + 3);
    *puVar10 = &LAB_02df1f2c;
    puVar10[1] = &LAB_02df1f40;
    puVar10[2] = &LAB_02df2120;
    puVar10[3] = &LAB_02df216c;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    local_78 = local_78 + 0x10;
    FUN_028ce4b0(plVar11,*param_1,param_1[1],&local_80);
    puVar9 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
    lVar12 = param_1[2];
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    param_1[2] = local_70;
    local_80 = puVar9;
    local_78 = puVar10;
    local_70 = lVar12;
    while (puVar1 = puVar10, puVar1 != puVar9) {
      puVar10 = puVar1 + -0x10;
      pcVar4 = (code *)puVar1[-0xf];
      local_78 = puVar10;
      if (pcVar4 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        (*pcVar4)(puVar1 + -0xc);
      }
    }
    if (puVar9 != (undefined8 *)0x0) {
      lVar12 = lVar12 - (long)puVar9;
      plVar11 = (long *)*local_68;
      uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar8 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar9,lVar12,0x10);
      }
      else {
        FUN_00c48fe8(plVar11,puVar9,lVar12,0x10);
      }
    }
  }
  param_1[0x15] = uVar6 + 1;
  return uVar6;
}


