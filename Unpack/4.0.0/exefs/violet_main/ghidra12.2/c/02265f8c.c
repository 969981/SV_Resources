/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02265f8c; name: FUN_02265f8c
 */


void FUN_02265f8c(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  plVar8 = param_1 + 3;
  lVar2 = FUN_022661e4(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar9 = *param_1;
  lVar4 = param_1[1];
  local_50 = 0;
  lVar3 = 0;
  local_48 = plVar8;
  if ((lVar2 != 0) &&
     (lVar3 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,lVar2 << 3,8), lVar3 == 0)) {
    (**(code **)(*(long *)*plVar8 + 0xe8))((long *)*plVar8);
  }
  puVar10 = (undefined8 *)(lVar3 + (lVar4 - lVar9 >> 3) * 8);
  local_50 = lVar3 + lVar2 * 8;
  lVar9 = *plVar8;
  local_60 = puVar10;
  local_58 = puVar10;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    uVar6 = *param_2;
    *param_2 = 0;
    *puVar10 = uVar6;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar9;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar6 = *param_2;
    *param_2 = 0;
    *puVar10 = uVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar10 = local_58;
  }
  local_58 = puVar10 + 1;
  FUN_02266234(plVar8,*param_1,param_1[1],&local_60);
  puVar7 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar9 = param_1[2];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  param_1[2] = local_50;
  local_60 = puVar7;
  local_58 = puVar10;
  local_50 = lVar9;
  while (puVar10 != puVar7) {
    local_58 = puVar10 + -1;
    plVar8 = puVar10 + -1;
    puVar10 = local_58;
    if ((long *)*plVar8 != (long *)0x0) {
      (**(code **)(*(long *)*plVar8 + 0x20))();
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    lVar9 = lVar9 - (long)puVar7;
    plVar8 = (long *)*local_48;
    uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar7,lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar8,puVar7,lVar9,8);
    }
  }
  return;
}


