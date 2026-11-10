/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c78d0; name: FUN_015c78d0
 */


undefined1 FUN_015c78d0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_20 [2];
  undefined1 local_18 [8];
  
  local_20[0] = param_2;
  uVar1 = FUN_0126ebb4(*(undefined8 *)(param_1 + 0x28));
  FUN_0126ebbc(uVar1,local_18,local_20);
  return local_18[0];
}


