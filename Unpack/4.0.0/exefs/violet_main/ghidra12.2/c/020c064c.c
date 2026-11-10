/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020c064c; name: FUN_020c064c
 */


void FUN_020c064c(long param_1,long *param_2)

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
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x74)) = &DAT_cbf29ce484222645;
  local_60 = 0x238f3c3c39758535;
  pcStack_58 = "TriggerIdKey";
  local_50 = 0xc;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar1;
  }
  local_60 = 0xf2ad01e237b41ef5;
  pcStack_58 = "TriggerProbabilityKey";
  local_50 = 0x15;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar1;
  }
  local_60 = 0x65469f37e9cd5de;
  pcStack_58 = "SuccessActionIdKey";
  local_50 = 0x12;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = uVar1;
  }
  local_60 = 0x29212085f1b5a484;
  pcStack_58 = "SuccessActionProbabilityKey";
  local_50 = 0x1b;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = uVar1;
  }
  local_60 = 0x4ce6531060befcf5;
  pcStack_58 = "FailureActionIdKey";
  local_50 = 0x12;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = uVar1;
  }
  local_60 = 0xc09707998d7ecfb5;
  pcStack_58 = "FailureActionProbabilityKey";
  local_50 = 0x1b;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x74)) = uVar1;
  }
  return;
}


