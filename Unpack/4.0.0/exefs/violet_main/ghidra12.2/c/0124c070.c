/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124c070; name: FUN_0124c070
 */


undefined * FUN_0124c070(uint param_1)

{
  if (param_1 < 0xe) {
    return (&PTR_LAB_045f11d0)[*(long *)(&DAT_03d69ef0 + (long)(int)param_1 * 8) * 2];
  }
  return (undefined *)0x0;
}


