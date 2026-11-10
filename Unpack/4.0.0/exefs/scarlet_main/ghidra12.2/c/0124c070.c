/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124c070; name: FUN_0124c070
 */


undefined * FUN_0124c070(uint param_1)

{
  if (param_1 < 0xe) {
    return (&PTR_LAB_045f11d0)[*(long *)(&DAT_03d69ef0 + (long)(int)param_1 * 8) * 2];
  }
  return (undefined *)0x0;
}


