/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015bd920; name: FUN_015bd920
 */


long FUN_015bd920(long *param_1,long param_2,long *param_3,long param_4)

{
  if (param_4 == param_2) {
    return 0;
  }
  return ((long)param_3 - (long)param_1 >> 3) * 0x1e +
         (param_4 - *param_3 >> 3) * -0xf0f0f0f0f0f0f0f +
         (param_2 - *param_1 >> 3) * 0xf0f0f0f0f0f0f0f;
}


