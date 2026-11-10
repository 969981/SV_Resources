/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ed574; name: FUN_001ed574
 */


void FUN_001ed574(byte *param_1,long param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (&DAT_03cc1218)[*param_1];
    param_1 = param_1 + 1;
  }
  return;
}


