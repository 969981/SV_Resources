/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034dd0; name: _INIT_726
 */


void _INIT_726(void)

{
  if ((DAT_048721d0 & 1) == 0) {
    DAT_048721c0 = 0;
    DAT_048721c8 = 0;
    DAT_048721b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048721b0;
    DAT_048721b8 = &DAT_04645b48;
    DAT_048721d0 = 1;
  }
  return;
}


