/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020772b8; name: FUN_020772b8
 */


void FUN_020772b8(long param_1,long *param_2)

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
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x78)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x7c)) = &DAT_cbf29ce484222645;
  local_60 = 0x5193fe31ea4d1054;
  pcStack_58 = "MinJumpCountGroundKey";
  local_50 = 0x15;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar1;
  }
  local_60 = 0x7334361ced5f98da;
  pcStack_58 = "MaxJumpCountGroundKey";
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
  local_60 = 0xe9a4be092f32e3a4;
  pcStack_58 = "MinJumpCountWaterKey";
  local_50 = 0x14;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = uVar1;
  }
  local_60 = 0xf242002ca28a9e5e;
  pcStack_58 = "MaxJumpCountWaterKey";
  local_50 = 0x14;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = uVar1;
  }
  local_60 = 0xf25746259d83995c;
  pcStack_58 = "MinJumpTimeGroundKey";
  local_50 = 0x14;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = uVar1;
  }
  local_60 = 0xfeaa55bfbed9c87a;
  pcStack_58 = "MaxJumpTimeGroundKey";
  local_50 = 0x14;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x74)) = uVar1;
  }
  local_60 = 0xae29e6e0908cd77c;
  pcStack_58 = "MinJumpTimeWaterKey";
  local_50 = 0x13;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x78)) = uVar1;
  }
  local_60 = 0x7e004b6cc52c297e;
  pcStack_58 = "MaxJumpTimeWaterKey";
  local_50 = 0x13;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x7c)) = uVar1;
  }
  return;
}


