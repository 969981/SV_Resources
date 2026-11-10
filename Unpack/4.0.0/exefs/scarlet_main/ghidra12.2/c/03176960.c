/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176960; name: _INIT_1321
 */


void _INIT_1321(void)

{
  if ((DAT_0487bcf0 & 1) == 0) {
    DAT_0487bce0 = 0;
    DAT_0487bce8 = 0;
    DAT_0487bcd0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bcd0;
    DAT_0487bcd8 = &DAT_0468c9b0;
    DAT_0487bcf0 = 1;
  }
  return;
}


