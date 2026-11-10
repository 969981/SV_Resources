/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f2ee90; name: FUN_00f2ee90
 */


void FUN_00f2ee90(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  plVar9 = param_1 + 3;
  lVar3 = FUN_02714e10(param_1,(param_1[1] - *param_1 >> 5) + 1);
  lVar10 = *param_1;
  lVar5 = param_1[1];
  local_50 = 0;
  lVar4 = 0;
  local_48 = plVar9;
  if ((lVar3 != 0) &&
     (lVar4 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,lVar3 << 5,8), lVar4 == 0)) {
    (**(code **)(*(long *)*plVar9 + 0xe8))((long *)*plVar9);
  }
  puVar1 = (undefined8 *)(lVar4 + (lVar5 - lVar10 >> 5) * 0x20);
  local_50 = lVar4 + lVar3 * 0x20;
  lVar10 = *plVar9;
  local_60 = puVar1;
  local_58 = puVar1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  uVar7 = param_2[3];
  param_2[3] = 0;
  puVar1[3] = uVar7;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_58 = local_58 + 4;
  FUN_02714cdc(plVar9,*param_1,param_1[1],&local_60);
  puVar8 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar10 = param_1[2];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  param_1[2] = local_50;
  local_60 = puVar8;
  local_58 = puVar1;
  local_50 = lVar10;
  while (puVar1 != puVar8) {
    local_58 = puVar1 + -4;
    plVar9 = puVar1 + -1;
    puVar1 = local_58;
    if ((long *)*plVar9 != (long *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0x20))();
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    lVar10 = lVar10 - (long)puVar8;
    plVar9 = (long *)*local_48;
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar8,lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar9,puVar8,lVar10,8);
    }
  }
  return;
}


