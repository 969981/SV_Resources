/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147dd0; name: _INIT_941
 */


void _INIT_941(void)

{
  if ((DAT_048774c8 & 1) == 0) {
    DAT_048774b8 = 0;
    DAT_048774c0 = 0;
    DAT_048774a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048774a8;
    DAT_048774b0 = &DAT_0466d678;
    DAT_048774c8 = 1;
  }
  return;
}


