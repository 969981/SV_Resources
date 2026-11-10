/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c180; name: _INIT_1522
 */


void _INIT_1522(void)

{
  if ((DAT_0487e588 & 1) == 0) {
    DAT_0487e578 = 0;
    DAT_0487e580 = 0;
    DAT_0487e568 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e568;
    DAT_0487e570 = &DAT_0469f560;
    DAT_0487e588 = 1;
  }
  return;
}


