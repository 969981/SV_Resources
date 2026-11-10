/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011638f4; name: FUN_011638f4
 */


ulong FUN_011638f4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  while( true ) {
    lVar5 = param_1[0xf] - param_1[0xe];
    if (lVar5 == 0) break;
    uVar4 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar5 + param_1[0xe] + -8;
    uVar10 = uVar4 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar10) =
         *(ulong *)(param_1[7] + uVar10) & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar4 < (ulong)(param_1[1] - *param_1 >> 7)) {
      FUN_021857e8(*param_1 + uVar4 * 0x80,param_2);
      if ((ulong)param_1[0x15] <= uVar4) {
        param_1[0x15] = uVar4 + 1;
      }
      return uVar4;
    }
  }
  uVar10 = param_1[1] - *param_1 >> 7;
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_01164288(param_1,param_2);
  }
  else {
    uVar9 = param_1[4];
    uVar4 = uVar10 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1;
    uVar6 = lVar5 >> 6;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    plVar13 = param_1 + 3;
    local_70 = 0;
    if (uVar9 >> 1 <= (ulong)(lVar5 >> 7)) {
      uVar4 = uVar9;
    }
    local_68 = plVar13;
    if (uVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar4 << 7,0x10);
      if (lVar5 == 0) {
        (**(code **)(*(long *)*plVar13 + 0xe8))();
      }
    }
    puVar12 = (undefined8 *)(lVar5 + uVar10 * 0x80);
    local_70 = lVar5 + uVar4 * 0x80;
    lVar5 = *plVar13;
    local_80 = puVar12;
    local_78 = puVar12;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    uVar7 = *param_2;
    puVar12[5] = 0;
    puVar12[4] = uVar7;
    puVar12[6] = 0;
    FUN_01161be4(puVar12 + 5,param_2 + 1);
    *puVar12 = &LAB_01055b30;
    puVar12[1] = FUN_02184800;
    puVar12[2] = &LAB_02184910;
    puVar12[3] = &LAB_02184930;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    local_78 = local_78 + 0x10;
    FUN_01062384(plVar13,*param_1,param_1[1],&local_80);
    puVar11 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    lVar5 = param_1[2];
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    param_1[2] = local_70;
    local_80 = puVar11;
    local_78 = puVar12;
    local_70 = lVar5;
    while (puVar1 = puVar12, puVar1 != puVar11) {
      puVar12 = puVar1 + -0x10;
      pcVar8 = (code *)puVar1[-0xf];
      local_78 = puVar12;
      if (pcVar8 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        (*pcVar8)(puVar1 + -0xc);
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      lVar5 = lVar5 - (long)puVar11;
      plVar13 = (long *)*local_68;
      uVar4 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar11,lVar5,0x10);
      }
      else {
        FUN_00c48fe8(plVar13,puVar11,lVar5,0x10);
      }
    }
  }
  param_1[0x15] = uVar10 + 1;
  return uVar10;
}


