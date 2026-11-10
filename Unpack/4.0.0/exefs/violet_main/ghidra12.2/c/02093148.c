/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02093148; name: FUN_02093148
 */


void FUN_02093148(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  long *local_30;
  long local_28;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = &DAT_cbf29ce484222645;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = 0;
  local_60 = 0xbf139cba0b6ad732;
  pcStack_58 = "BehaviorBitType";
  local_50 = 0xf;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_01326ec0();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = uVar1;
  }
  local_60 = 0x1456cb0a0f618c69;
  pcStack_58 = "NearMemberPositionKey";
  local_50 = 0x15;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar2 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar2;
  }
  local_60 = 0x15c9ad3872da302a;
  pcStack_58 = "NearMemberIndexKey";
  local_50 = 0x12;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar2 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar2;
  }
  local_60 = 0x1cad5c54322d3568;
  pcStack_58 = "FoundFlagKey";
  local_50 = 0xc;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar2 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = uVar2;
  }
  return;
}


