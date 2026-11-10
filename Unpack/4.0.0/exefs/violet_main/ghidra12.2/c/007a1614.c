/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a1614; name: FUN_007a1614
 */


bool FUN_007a1614(long param_1)

{
  if (*(int *)(param_1 + 0x1148) == 8) {
    return *(int *)(param_1 + 0x1118) - 2U < 3;
  }
  return false;
}


