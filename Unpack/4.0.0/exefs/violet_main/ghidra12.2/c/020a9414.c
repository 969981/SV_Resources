/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020a9414; name: FUN_020a9414
 */


void FUN_020a9414(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  long *local_30;
  long local_28;
  
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = 0;
  local_60 = 0x65a72c838baab13b;
  pcStack_58 = "ReplyInfoType";
  local_50 = 0xd;
  FUN_00d8fb98(auStack_48,&local_60);
  FUN_00c97fdc(&local_28,param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != 0) {
    uVar1 = FUN_01326ec0();
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar1;
  }
  return;
}


