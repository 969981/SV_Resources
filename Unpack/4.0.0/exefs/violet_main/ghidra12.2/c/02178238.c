/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02178238; name: FUN_02178238
 */


void FUN_02178238(long *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  long *plStack_58;
  
  plVar9 = param_1 + 3;
  lVar3 = FUN_021784c0(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  local_60 = (undefined8 *)0x0;
  lVar7 = param_1[1] - *param_1 >> 3;
  plStack_58 = plVar9;
  if (lVar3 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,lVar3 * 0x28,8);
    if (puVar4 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0xe8))();
    }
  }
  puVar10 = puVar4 + lVar7;
  local_60 = puVar4 + lVar3 * 5;
  lVar3 = *plVar9;
  local_78 = puVar4;
  local_70 = puVar10;
  local_68 = puVar10;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_00dd9f00(puVar10,param_2);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    puVar4[lVar7 + 2] = *(undefined8 *)(param_2 + 0x10);
    puVar4[lVar7 + 3] = uVar1;
    puVar4[lVar7 + 4] = uVar8;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar3;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_00dd9f00(puVar10,param_2);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    puVar4[lVar7 + 2] = *(undefined8 *)(param_2 + 0x10);
    puVar4[lVar7 + 3] = uVar1;
    puVar4[lVar7 + 4] = uVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    puVar10 = local_68;
  }
  local_68 = puVar10 + 5;
  FUN_0217851c(plVar9,*param_1,param_1[1],&local_70);
  local_78 = (undefined8 *)*param_1;
  lVar7 = param_1[1];
  *param_1 = (long)local_70;
  param_1[1] = (long)local_68;
  lVar3 = param_1[2];
  param_1[2] = (long)local_60;
  local_70 = local_78;
  local_68 = (undefined8 *)lVar7;
  local_60 = (undefined8 *)lVar3;
  FUN_02178678(&local_78);
  puVar4 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    lVar3 = (long)local_60 - (long)local_78;
    plVar9 = (long *)*plStack_58;
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) != 0) && (lVar7 = FUN_00c4e600(), 0 < *(int *)(lVar7 + 0x12c8))) {
      FUN_00c48fe8(plVar9,puVar4,lVar3,8);
      return;
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,puVar4,lVar3,8);
  }
  return;
}


