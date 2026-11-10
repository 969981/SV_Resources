/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01685258; name: FUN_01685258
 */


void FUN_01685258(long param_1,long param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = *(undefined8 *)(param_1 + 8);
  local_28 = param_1 + 0x10;
  uStack_30 = *(undefined8 *)(param_1 + 0x6098);
  FUN_016875e8(*(undefined8 *)(param_1 + 0x6140),&local_38,*(undefined4 *)(param_2 + 0x20));
  FUN_0168779c(*(undefined8 *)(param_1 + 0x6160),&local_38,*(undefined4 *)(param_2 + 0x28));
  return;
}


