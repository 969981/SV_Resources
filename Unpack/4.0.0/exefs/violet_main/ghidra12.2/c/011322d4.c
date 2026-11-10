/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011322d4; name: FUN_011322d4
 */


long FUN_011322d4(long param_1)

{
  if ((*(byte *)(param_1 + 0x1e8) & 1) == 0) {
    return 0;
  }
  return (long)*(uint **)(param_1 + 0x1f0) + (ulong)**(uint **)(param_1 + 0x1f0);
}


