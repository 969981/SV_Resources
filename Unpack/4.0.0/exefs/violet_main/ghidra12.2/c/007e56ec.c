/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e56ec; name: FUN_007e56ec
 */


void FUN_007e56ec(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_007935cc(param_1 + 8);
  memset(*(void **)(param_1 + 0x18),0,(ulong)*(uint *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x5e8) = 0xffff;
  *(undefined2 *)(param_1 + 0x5ec) = 0;
  memset((void *)(param_1 + 0x5f0),0,4);
  *(undefined1 *)(param_1 + 0x5f4) = 0;
  return;
}


