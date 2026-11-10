/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012459a4; name: FUN_012459a4
 */


undefined1 FUN_012459a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  undefined8 local_18;
  
  local_18 = param_2;
  uVar1 = FUN_012459d8(*(undefined8 *)(param_1 + 0x18));
  FUN_012459e0(uVar1,local_20,&local_18);
  return local_20[0];
}


