/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b45244; name: FUN_02b45244
 */


ulong FUN_02b45244(long *param_1,void *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  while( true ) {
    lVar11 = param_1[0xf] - param_1[0xe];
    if (lVar11 == 0) break;
    uVar9 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar11 + param_1[0xe] + -8;
    uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar8) =
         *(ulong *)(param_1[7] + uVar8) & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar9 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar12 = (undefined8 *)(*param_1 + uVar9 * 0x80);
      pcVar6 = (code *)puVar12[1];
      if (pcVar6 != (code *)0x0) {
        puVar12[2] = 0;
        puVar12[3] = 0;
        *puVar12 = 0;
        puVar12[1] = 0;
        (*pcVar6)(puVar12 + 4);
      }
      memcpy(puVar12 + 4,param_2,0x28);
      uVar7 = *(undefined8 *)((long)param_2 + 0x28);
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar12[9] = uVar7;
      FUN_01160880(puVar12 + 10,(long)param_2 + 0x30);
      *puVar12 = &LAB_02b4572c;
      puVar12[1] = &LAB_02b45734;
      puVar12[2] = FUN_02b45a0c;
      puVar12[3] = FUN_02b45a54;
      if ((ulong)param_1[0x15] <= uVar9) {
        param_1[0x15] = uVar9 + 1;
      }
      return uVar9;
    }
  }
  puVar12 = (undefined8 *)param_1[1];
  uVar8 = (long)puVar12 - *param_1 >> 7;
  if (puVar12 < (undefined8 *)param_1[2]) {
    lVar11 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_02b45728:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    memcpy(puVar12 + 4,param_2,0x28);
    puVar12[9] = *(undefined8 *)((long)param_2 + 0x28);
    puVar12[0xb] = 0;
    puVar12[10] = 0;
    FUN_01160880(puVar12 + 10,(long)param_2 + 0x30);
    *puVar12 = &LAB_02b4572c;
    puVar12[1] = &LAB_02b45734;
    puVar12[2] = FUN_02b45a0c;
    puVar12[3] = FUN_02b45a54;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar12 + 0x10);
  }
  else {
    plVar13 = param_1 + 3;
    lVar4 = FUN_0217b754(param_1,uVar8 + 1);
    lVar11 = *param_1;
    lVar3 = param_1[1];
    local_70 = 0;
    local_68 = plVar13;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,lVar4 << 7,0x10);
      if (lVar5 == 0) {
        (**(code **)(*(long *)*plVar13 + 0xe8))();
      }
    }
    puVar12 = (undefined8 *)(lVar5 + (lVar3 - lVar11 >> 7) * 0x80);
    local_70 = lVar5 + lVar4 * 0x80;
    lVar11 = *plVar13;
    local_80 = puVar12;
    local_78 = puVar12;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_02b45728;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    memcpy(puVar12 + 4,param_2,0x28);
    uVar7 = *(undefined8 *)((long)param_2 + 0x28);
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[9] = uVar7;
    FUN_01160880(puVar12 + 10,(long)param_2 + 0x30);
    *puVar12 = &LAB_02b4572c;
    puVar12[1] = &LAB_02b45734;
    puVar12[2] = FUN_02b45a0c;
    puVar12[3] = FUN_02b45a54;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    local_78 = local_78 + 0x10;
    FUN_021798b8(plVar13,*param_1,param_1[1],&local_80);
    puVar10 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    lVar11 = param_1[2];
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    param_1[2] = local_70;
    local_80 = puVar10;
    local_78 = puVar12;
    local_70 = lVar11;
    while (puVar1 = puVar12, puVar1 != puVar10) {
      puVar12 = puVar1 + -0x10;
      pcVar6 = (code *)puVar1[-0xf];
      local_78 = puVar12;
      if (pcVar6 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        (*pcVar6)(puVar1 + -0xc);
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      lVar11 = lVar11 - (long)puVar10;
      plVar13 = (long *)*local_68;
      uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar9 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar10,lVar11,0x10);
      }
      else {
        FUN_00c48fe8(plVar13,puVar10,lVar11,0x10);
      }
    }
  }
  param_1[0x15] = uVar8 + 1;
  return uVar8;
}


