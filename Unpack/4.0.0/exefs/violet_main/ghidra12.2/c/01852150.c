/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01852150; name: FUN_01852150
 */


undefined1 FUN_01852150(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  undefined4 local_18 [2];
  
  local_18[0] = param_2;
  uVar1 = FUN_01852184(*(undefined8 *)(param_1 + 0x28));
  FUN_0185218c(uVar1,local_20,local_18);
  return local_20[0];
}


