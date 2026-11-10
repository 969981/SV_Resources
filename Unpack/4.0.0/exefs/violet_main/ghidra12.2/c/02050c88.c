/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02050c88; name: FUN_02050c88
 */


void FUN_02050c88(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  long *local_30;
  long local_28;
  
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = 0xffffffff;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xec)) = 0xffffffff;
  local_60 = 0x81316c1bb8af0852;
  pcStack_58 = "ActionID";
  local_50 = 8;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0135d1bc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_01326ec0();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = uVar1;
  }
  local_60 = 0xc212ed610413be50;
  pcStack_58 = "ActionState";
  local_50 = 0xb;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_0135d1bc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_01326ec0();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xec)) = uVar1;
  }
  return;
}


