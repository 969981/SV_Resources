/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030361d0; name: _INIT_790
 */


void _INIT_790(void)

{
  if ((DAT_04872bd0 & 1) == 0) {
    DAT_04872bc0 = 0;
    DAT_04872bc8 = 0;
    DAT_04872bb0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872bb0;
    DAT_04872bb8 = &DAT_04649d98;
    DAT_04872bd0 = 1;
  }
  return;
}


