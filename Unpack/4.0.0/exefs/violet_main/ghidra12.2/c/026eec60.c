/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026eec60; name: FUN_026eec60
 */


void FUN_026eec60(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  if (param_1[1] == param_1[2]) {
    plVar3 = param_1 + 3;
    lVar4 = FUN_026eefe8(param_1,(param_1[1] - *param_1 >> 5) + 1);
    lVar10 = *param_1;
    lVar2 = param_1[1];
    local_50 = 0;
    local_48 = plVar3;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)*plVar3 + 0x10))((long *)*plVar3,lVar4 << 5,8);
      if (lVar5 == 0) {
        (**(code **)(*(long *)*plVar3 + 0xe8))();
      }
    }
    puVar9 = (undefined8 *)(lVar5 + (lVar2 - lVar10 >> 5) * 0x20);
    local_50 = lVar5 + lVar4 * 0x20;
    lVar10 = *plVar3;
    local_60 = puVar9;
    local_58 = puVar9;
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 != 0) {
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    }
    *puVar9 = *param_2;
    puVar9[1] = param_2[1];
    puVar9[2] = param_2[2];
    plVar6 = (long *)param_2[3];
    puVar9[3] = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    local_58 = local_58 + 4;
    FUN_026ef038(plVar3,*param_1,param_1[1],&local_60);
    puVar8 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
    lVar10 = param_1[2];
    *param_1 = (long)local_60;
    param_1[1] = (long)local_58;
    param_1[2] = local_50;
    local_60 = puVar8;
    local_58 = puVar9;
    local_50 = lVar10;
    while (puVar9 != puVar8) {
      local_58 = puVar9 + -4;
      plVar3 = puVar9 + -1;
      puVar9 = local_58;
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x20))();
      }
    }
    if (puVar8 != (undefined8 *)0x0) {
      lVar10 = lVar10 - (long)puVar8;
      plVar3 = (long *)*local_48;
      uVar7 = FUN_00c4e564(plVar3);
      if ((uVar7 & 1) == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,puVar8,lVar10,8);
      }
      else {
        FUN_00c48fe8(plVar3,puVar8,lVar10,8);
      }
    }
    return;
  }
  puVar9 = (undefined8 *)param_1[1];
  lVar10 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  *puVar9 = *param_2;
  puVar9[1] = param_2[1];
  puVar9[2] = param_2[2];
  plVar3 = (long *)param_2[3];
  puVar9[3] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  param_1[1] = (long)(puVar9 + 4);
  return;
}


