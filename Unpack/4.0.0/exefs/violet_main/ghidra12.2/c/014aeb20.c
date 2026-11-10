/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014aeb20; name: FUN_014aeb20
 */


bool FUN_014aeb20(long param_1,byte param_2)

{
  if (param_2 < 5) {
    return *(char *)(param_1 + (ulong)param_2 + 0x174) != '\0';
  }
  return false;
}


