/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f98c0; name: FUN_001f98c0
 */


bool FUN_001f98c0(long param_1)

{
  if (*(long *)(param_1 + 0xa8) == 0) {
    return false;
  }
  return (*(byte *)(param_1 + 0xe4) & 0xc) != 0;
}


