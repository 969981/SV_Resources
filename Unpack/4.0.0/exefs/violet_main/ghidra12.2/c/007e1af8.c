/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e1af8; name: FUN_007e1af8
 */


void FUN_007e1af8(long param_1)

{
  undefined1 auStack_50 [64];
  
  FUN_007f43ec();
  FUN_007e5190(auStack_50);
  FUN_007e51d8(param_1 + 0x90,auStack_50);
  FUN_007e51d0(auStack_50);
  *(undefined1 *)(param_1 + 0x35a) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0xffff;
  return;
}


