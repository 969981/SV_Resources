/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034a10; name: _INIT_714
 */


void _INIT_714(void)

{
  if ((DAT_04871ff0 & 1) == 0) {
    DAT_04871fe0 = 0;
    DAT_04871fe8 = 0;
    DAT_04871fd0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871fd0;
    DAT_04871fd8 = &DAT_04644fa8;
    DAT_04871ff0 = 1;
  }
  return;
}


