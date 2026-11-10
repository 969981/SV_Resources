/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0144cf4c; name: FUN_0144cf4c
 */


void FUN_0144cf4c(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  long *plStack_48;
  
  plVar7 = param_1 + 3;
  lVar2 = FUN_0272e584(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar8 = *param_1;
  lVar4 = param_1[1];
  local_50 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)0x0;
  plStack_48 = plVar7;
  if ((lVar2 != 0) &&
     (puVar3 = (undefined8 *)(**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar2 << 3,8),
     puVar3 == (undefined8 *)0x0)) {
    (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
  }
  puVar9 = puVar3 + (lVar4 - lVar8 >> 3);
  local_50 = puVar3 + lVar2;
  lVar8 = *plVar7;
  local_68 = puVar3;
  local_60 = puVar9;
  local_58 = puVar9;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    uVar6 = *param_2;
    *param_2 = 0;
    *puVar9 = uVar6;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar6 = *param_2;
    *param_2 = 0;
    *puVar9 = uVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar9 = local_58;
  }
  local_58 = puVar9 + 1;
  FUN_0272e5d4(plVar7,*param_1,param_1[1],&local_60);
  local_68 = (undefined8 *)*param_1;
  lVar4 = param_1[1];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  lVar8 = param_1[2];
  param_1[2] = (long)local_50;
  local_60 = local_68;
  local_58 = (undefined8 *)lVar4;
  local_50 = (undefined8 *)lVar8;
  FUN_0272e6fc(&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    lVar8 = (long)local_50 - (long)local_68;
    plVar7 = (long *)*plStack_48;
    uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar5 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
      FUN_00c48fe8(plVar7,puVar3,lVar8,8);
      return;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar3,lVar8,8);
  }
  return;
}


