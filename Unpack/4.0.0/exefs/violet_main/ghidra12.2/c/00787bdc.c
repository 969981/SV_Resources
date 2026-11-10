/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00787bdc; name: FUN_00787bdc
 */


void FUN_00787bdc(undefined8 *param_1,ulong param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 local_a0 [2];
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  ulong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  plVar8 = param_1 + 0xb5;
  do {
    lVar7 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
    uStack_58 = param_1[0x7e];
    local_60 = param_1[0x7d];
    local_50 = param_1[0x7f];
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    param_1[0x7d] = 0;
    uStack_40 = param_1[0x81];
    local_48 = param_1[0x80];
    local_38 = param_1[0x82];
    param_1[0x82] = 0;
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    plVar8 = (long *)param_1[8];
    uVar9 = param_1[4];
    local_68[0] = uVar1;
    (**(code **)*param_1)();
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x120))(*(long **)PTR_DAT_047cbb08,uVar9);
    uVar6 = local_48;
    uVar5 = local_50;
    uVar9 = uStack_58;
    uVar4 = local_60;
    if ((param_2 & 1) == 0) {
      uStack_58 = 0;
      local_50 = 0;
      local_60 = 0;
      uStack_90 = uVar9;
      local_98 = uVar4;
      local_88 = uVar5;
      local_70 = local_38;
      local_48 = 0;
      uStack_78 = uStack_40;
      local_80 = uVar6;
      uStack_40 = 0;
      local_38 = 0;
      local_a0[0] = uVar1;
      (**(code **)(*plVar8 + 8))(plVar8,local_a0);
      if ((local_80 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_70);
      }
      if ((local_98 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_88);
      }
    }
    else {
      (**(code **)*plVar8)(plVar8,local_68);
    }
    if ((local_48 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_38);
    }
    if ((local_60 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_50);
    }
  }
  return;
}


