/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a75d4; name: FUN_029a75d4
 */


long FUN_029a75d4(long param_1,undefined8 param_2)

{
  undefined8 local_40;
  undefined1 auStack_38 [8];
  long local_30;
  undefined1 **ppuStack_28;
  undefined1 *local_8;
  
  local_8 = auStack_38;
  local_30 = param_1 + 0x108;
  ppuStack_28 = &local_8;
  local_40 = param_2;
  FUN_029a762c(local_30,&local_30);
  FUN_029a7738(param_1,*(undefined8 *)(param_1 + 8),&local_40);
  return param_1;
}


