/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148c00; name: _INIT_975
 */


void _INIT_975(void)

{
  if ((DAT_04877a18 & 1) == 0) {
    DAT_04877a08 = 0;
    DAT_04877a10 = 0;
    DAT_048779f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048779f8;
    DAT_04877a00 = &DAT_0466f768;
    DAT_04877a18 = 1;
  }
  return;
}


