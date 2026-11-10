/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011f610; name: FUN_0011f610
 */


void FUN_0011f610(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + -2) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x0011f62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + -0x10))(param_1 - (ulong)*(byte *)(param_1 + -1));
    return;
  }
  free((void *)(param_1 - (ulong)*(byte *)(param_1 + -1)));
  return;
}


