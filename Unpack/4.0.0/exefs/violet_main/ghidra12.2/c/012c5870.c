/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c5870; name: FUN_012c5870
 */


void FUN_012c5870(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  
  FUN_012c5bd8();
  *param_1 = &PTR_FUN_045eb808;
  param_1[4] = &PTR_LAB_045eb838;
  plVar8 = param_1 + 6;
  *plVar8 = 0;
  FUN_012c5d04(param_1 + 7);
  plVar6 = param_1 + 5;
  *plVar6 = (long)plVar8;
  param_1[0xb] = 0;
  plVar5 = param_1 + 0xc;
  *plVar5 = 0;
  param_1[0xd] = 0;
  FUN_012c5e38(param_1 + 0xe);
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x14,0,1);
  local_68 = param_1[1];
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_58 = 0;
  local_60 = 0x1fffffffffffffff;
  local_50 = (ulong)local_50._4_4_ << 0x20;
  local_48 = 0;
  local_70 = 0;
  local_78 = &local_70;
  FUN_012c5a98(plVar6,*plVar8);
  *plVar6 = (long)local_78;
  *plVar8 = local_70;
  param_1[8] = local_60;
  param_1[9] = local_58;
  param_1[10] = local_50;
  param_1[7] = local_68;
  param_1[0xb] = local_48;
  if (local_48 == 0) {
    *plVar6 = (long)plVar8;
  }
  else {
    *(long **)(local_70 + 0x10) = plVar8;
    local_48 = 0;
    local_70 = 0;
    local_78 = &local_70;
  }
  FUN_012c5a98(&local_78,local_70);
  local_60 = param_1[1];
  local_78 = (long *)0x0;
  local_70 = 0;
  local_48 = local_48 & 0xffffffff00000000;
  local_68 = 0;
  local_58 = 0x3fffffffffffffff;
  local_50 = 0;
  lVar7 = param_1[0xc];
  if (lVar7 == 0) goto LAB_012c597c;
  lVar1 = param_1[0xe];
  plVar6 = (long *)param_1[0xf];
  param_1[0xd] = lVar7;
  uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar4 & 1) == 0) {
LAB_012c5a34:
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,lVar1 - lVar7,4);
  }
  else {
    lVar2 = FUN_00c4e600();
    if (*(int *)(lVar2 + 0x12c8) < 1) goto LAB_012c5a34;
    FUN_00c48fe8(plVar6,lVar7,lVar1 - lVar7,4);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *plVar5 = 0;
LAB_012c597c:
  param_1[0x11] = local_50;
  param_1[0x12] = local_48;
  param_1[0xf] = local_60;
  param_1[0x10] = local_58;
  *plVar5 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_78 = (long *)0x0;
  local_70 = 0;
  local_68 = 0;
  FUN_012c5b38(&local_78);
  puVar3 = (undefined4 *)param_1[0xc];
  uVar4 = param_1[0xd] - (long)puVar3 >> 2;
  if (uVar4 < 3) {
    FUN_00d0af44(plVar5,3 - uVar4);
    puVar3 = (undefined4 *)*plVar5;
  }
  else if (param_1[0xd] - (long)puVar3 != 0xc) {
    param_1[0xd] = puVar3 + 3;
  }
  *puVar3 = 0;
  *(undefined4 *)(*plVar5 + 4) = 1;
  *(undefined4 *)(*plVar5 + 8) = 2;
  return;
}


