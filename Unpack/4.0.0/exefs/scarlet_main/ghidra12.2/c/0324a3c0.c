/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a3c0; name: _INIT_1714
 */


void _INIT_1714(void)

{
  if ((DAT_048881c8 & 1) == 0) {
    DAT_048881b8 = 0;
    DAT_048881c0 = 0;
    DAT_048881a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048881a8;
    DAT_048881b0 = &DAT_046b9690;
    DAT_048881c8 = 1;
  }
  return;
}


