/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ca010; name: _INIT_1573
 */


void _INIT_1573(void)

{
  if ((DAT_04883408 & 1) == 0) {
    DAT_048833f8 = 0;
    DAT_04883400 = 0;
    DAT_048833e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048833e8;
    DAT_048833f0 = &DAT_046a4360;
    DAT_04883408 = 1;
  }
  return;
}


