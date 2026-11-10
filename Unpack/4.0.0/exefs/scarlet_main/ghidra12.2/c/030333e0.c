/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030333e0; name: _INIT_643
 */


void _INIT_643(void)

{
  if ((DAT_048714d8 & 1) == 0) {
    DAT_048714c8 = 0;
    DAT_048714d0 = 0;
    DAT_048714b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048714b8;
    DAT_048714c0 = &DAT_04640b10;
    DAT_048714d8 = 1;
  }
  return;
}


