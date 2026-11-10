/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175d43c; name: FUN_0175d43c
 */


void FUN_0175d43c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint local_28 [2];
  
  *param_1 = &PTR_FUN_045e6be0;
  memcpy(param_1 + 1,param_2,0x28);
  param_1[6] = 0;
  FUN_0175dc14(param_1 + 7);
  FUN_0175da40(param_1 + 0x34);
  FUN_0175db28(param_1 + 0x39);
  uVar6 = *param_2;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = &PTR_LAB_045e6db0;
  param_1[0x3e] = uVar6;
  param_1[0x46] = 0x1fca056;
  param_1[0x48] = 0x1fca056;
  *(undefined1 *)((long)param_1 + 0x252) = 1;
  param_1[0x41] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  param_1[0x4f] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  DAT_04863440 = param_1;
  nn::time::Initialize();
  lVar3 = (**(code **)(*(long *)param_1[0x3e] + 0x58))();
  puVar2 = PTR_DAT_047d4e20;
  FUN_0175d694(*(undefined8 *)PTR_DAT_047d4e20,"HeapType::Trinity",1,lVar3 - param_1[4],
               param_1[0x3e],0);
  plVar4 = *(long **)(*(long *)puVar2 + 0x28);
  (**(code **)(*plVar4 + 0xe0))(plVar4,"Trinity");
  uVar5 = FUN_012e29a0();
  puVar1 = PTR_DAT_047d3f70;
  if ((uVar5 & 1) == 0) {
    FUN_01760108(*(undefined8 *)PTR_DAT_047d3f70,"TrinityHeapType::System",0,0x2000000,
                 *(undefined8 *)(*(long *)puVar2 + 0x28));
  }
  else {
    FUN_0175d5e4();
  }
  uVar6 = *(undefined8 *)(*(long *)puVar1 + 8);
  FUN_0175d7e8(uVar6);
  FUN_0175d8b0(uVar6);
  FUN_0175d978(uVar6);
  nn::hid::InitializeNpad();
  local_28[0] = 0;
  local_28[1] = 0x20;
  nn::hid::SetSupportedNpadIdType(local_28,2);
  nn::hid::SetSupportedNpadStyleSet(7);
  FUN_0175d5e0();
  return;
}


