/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033405a0; name: _INIT_2044
 */


void _INIT_2044(void)

{
  if ((DAT_0488d6d0 & 1) == 0) {
    DAT_0488d6c0 = 0;
    DAT_0488d6c8 = 0;
    DAT_0488d6b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488d6b0;
    DAT_0488d6b8 = &DAT_047ac980;
    DAT_0488d6d0 = 1;
  }
  return;
}


