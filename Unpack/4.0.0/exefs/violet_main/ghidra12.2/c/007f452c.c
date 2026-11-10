/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f452c; name: FUN_007f452c
 */


undefined1 FUN_007f452c(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_007f3d94(*(long *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x28));
  }
  return uVar1;
}


