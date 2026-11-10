/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


