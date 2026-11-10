/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b500; name: _INIT_1083
 */


void _INIT_1083(void)

{
  if ((DAT_04878af8 & 1) == 0) {
    DAT_04878ae8 = 0;
    DAT_04878af0 = 0;
    DAT_04878ad8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878ad8;
    DAT_04878ae0 = &DAT_04676118;
    DAT_04878af8 = 1;
  }
  return;
}


