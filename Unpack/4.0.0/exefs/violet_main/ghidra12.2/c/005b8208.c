/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005b8208; name: FUN_005b8208
 */


void FUN_005b8208(undefined8 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 local_58 [2];
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  param_1 = (undefined8 *)*param_1;
  (**(code **)(*(long *)param_1[8] + 0x28))((long *)param_1[8],*param_2);
  plVar1 = param_1 + 0x11b;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    local_58[0] = *(undefined4 *)(param_1 + 0x75);
    uStack_48 = param_1[0x77];
    local_50 = param_1[0x76];
    local_40 = param_1[0x78];
    param_1[0x78] = 0;
    param_1[0x77] = 0;
    param_1[0x76] = 0;
    uStack_30 = param_1[0x7a];
    local_38 = param_1[0x79];
    local_28 = param_1[0x7b];
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    param_1[0x79] = 0;
    puVar5 = (undefined8 *)param_1[8];
    uVar6 = param_1[4];
    (**(code **)*param_1)(param_1);
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x120))(*(long **)PTR_DAT_047cbb08,uVar6);
    (**(code **)*puVar5)(puVar5,local_58);
    if ((local_38 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_28);
    }
    if ((local_50 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_40);
      return;
    }
  }
  return;
}


