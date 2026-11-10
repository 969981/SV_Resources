/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f2104; name: FUN_007f2104
 */


undefined8 FUN_007f2104(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_20 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_007eba90(auStack_20,param_3,param_4 + 0x30);
  return 1;
}


