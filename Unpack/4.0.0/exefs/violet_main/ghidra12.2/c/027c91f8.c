/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027c91f8; name: FUN_027c91f8
 */


void FUN_027c91f8(long *param_1,long param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\0') {
    *param_1 = 0;
    return;
  }
  *param_1 = param_2 + 0x1d0;
  return;
}


