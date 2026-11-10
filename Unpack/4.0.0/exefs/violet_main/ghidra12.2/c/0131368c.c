/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131368c; name: FUN_0131368c
 */


void FUN_0131368c(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  plVar7 = param_1 + 3;
  lVar2 = FUN_028f7f10(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar8 = *param_1;
  lVar3 = param_1[1];
  local_50 = 0;
  plStack_48 = plVar7;
  if (lVar2 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar2 << 3,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))();
    }
  }
  puVar9 = (undefined8 *)(local_68 + (lVar3 - lVar8 >> 3) * 8);
  local_50 = local_68 + lVar2 * 8;
  lVar8 = *plVar7;
  local_60 = puVar9;
  local_58 = puVar9;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar9 = uVar5;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar9 = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar9 = local_58;
  }
  lVar8 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar8) {
    local_58 = (undefined8 *)lVar8;
  }
  else {
    puVar6 = local_60;
    local_58 = puVar9 + 1;
    do {
      puVar6 = puVar6 + -1;
      lVar3 = lVar3 + -8;
      FUN_00da3d74(plVar7,puVar6,lVar3);
    } while (lVar8 != lVar3);
    lVar8 = *param_1;
    local_60 = puVar6;
    local_58 = (undefined8 *)param_1[1];
  }
  *param_1 = (long)local_60;
  param_1[1] = (long)(puVar9 + 1);
  lVar3 = param_1[2];
  param_1[2] = local_50;
  local_68 = lVar8;
  local_60 = (undefined8 *)lVar8;
  local_50 = lVar3;
  FUN_028f7f60(&local_68);
  lVar8 = local_68;
  if (local_68 != 0) {
    lVar3 = local_50 - local_68;
    plVar7 = (long *)*plStack_48;
    uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar4 & 1) != 0) && (lVar2 = FUN_00c4e600(), 0 < *(int *)(lVar2 + 0x12c8))) {
      FUN_00c48fe8(plVar7,lVar8,lVar3,8);
      return;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar3,8);
  }
  return;
}


