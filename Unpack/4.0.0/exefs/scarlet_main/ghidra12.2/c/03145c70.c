/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145c70; name: _INIT_871
 */


void _INIT_871(void)

{
  if ((DAT_048769d8 & 1) == 0) {
    DAT_048769c8 = 0;
    DAT_048769d0 = 0;
    DAT_048769b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048769b8;
    DAT_048769c0 = &DAT_04669618;
    DAT_048769d8 = 1;
  }
  return;
}


