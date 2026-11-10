/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271ac10; name: FUN_0271ac10
 */


long FUN_0271ac10(long param_1)

{
  return (*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 5) * -0x5555555555555555;
}


