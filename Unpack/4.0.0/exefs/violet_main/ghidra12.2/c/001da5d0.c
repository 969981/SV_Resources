/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001da5d0; name: FUN_001da5d0
 */


bool FUN_001da5d0(long param_1,long param_2)

{
  if (*(long **)(param_2 + 0x4a8) == (long *)0x0) {
    return false;
  }
  return **(long **)(param_2 + 0x4a8) == param_1;
}


