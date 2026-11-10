/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c5a24; name: FUN_006c5a24
 */


undefined1  [16] FUN_006c5a24(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *local_a0;
  undefined8 ******local_98;
  undefined8 ******local_90;
  MultiWaitHolderType aMStack_80 [64];
  undefined1 *local_40;
  undefined8 uStack_38;
  
  local_98 = &local_98;
  local_a0 = PTR_DAT_047cbb38 + 0x10;
  local_40 = (undefined1 *)0x0;
  uStack_38 = 0;
  local_90 = local_98;
  nn::os::InitializeMultiWaitHolder(aMStack_80,*(EventType **)(param_1 + 0x40));
  local_40 = (undefined1 *)&local_a0;
  FUN_006c45f4(param_1,&local_a0);
  if (param_2 != (undefined1 *)0x0) {
    FUN_006c45f4(param_1,param_2);
  }
  puVar1 = (undefined1 *)FUN_006c46c0(param_1);
  if (&local_a0 == (undefined **)puVar1) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else if (puVar1 == param_2) {
    uVar2 = 0;
    uVar3 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(puVar1 + 0x18);
    uVar3 = 2;
  }
  if (param_2 != (undefined1 *)0x0) {
    FUN_006c43c0(param_1,param_2);
  }
  FUN_006c43c0(param_1,&local_a0);
  FUN_006c4274(&local_a0);
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


