/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d400; name: _INIT_1146
 */


void _INIT_1146(void)

{
  if ((DAT_048794d0 & 1) == 0) {
    DAT_048794c0 = 0;
    DAT_048794c8 = 0;
    DAT_048794b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048794b0;
    DAT_048794b8 = &DAT_04679c08;
    DAT_048794d0 = 1;
  }
  return;
}


