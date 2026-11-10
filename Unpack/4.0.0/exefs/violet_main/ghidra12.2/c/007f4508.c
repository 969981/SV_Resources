/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f4508; name: FUN_007f4508
 */


undefined8 FUN_007f4508(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x28) == -3)) {
    return 0xffffffff;
  }
  uVar1 = FUN_007f3e4c();
  return uVar1;
}


