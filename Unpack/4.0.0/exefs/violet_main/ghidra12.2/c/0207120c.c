/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0207120c; name: FUN_0207120c
 */


void FUN_0207120c(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  long *local_30;
  long local_28;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = &DAT_cbf29ce484222645;
  local_60 = 0xec77edc9479fe621;
  pcStack_58 = "FadeTimeKey";
  local_50 = 0xb;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar1;
  }
  local_60 = 0xec01289837ec7030;
  pcStack_58 = "TargetFadeParameterKey";
  local_50 = 0x16;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar1;
  }
  local_60 = 0xc0b5473db5dfb775;
  pcStack_58 = "IsDisableSaveKey";
  local_50 = 0x10;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = uVar1;
  }
  return;
}


