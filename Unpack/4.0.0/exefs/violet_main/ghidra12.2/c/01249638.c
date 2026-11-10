/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01249638; name: FUN_01249638
 */


void FUN_01249638(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong local_40;
  undefined4 local_38;
  
  FUN_010ab500(&local_40);
  local_40 = local_40 & 0xfffffffffffffff0 | 7;
  local_38 = *param_3;
  FUN_012461b4(param_1,param_2,&local_40,*(undefined1 *)(param_3 + 0x22));
  return;
}


