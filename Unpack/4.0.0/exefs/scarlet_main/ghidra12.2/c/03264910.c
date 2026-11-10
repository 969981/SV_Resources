/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264910; name: _INIT_1844
 */


void _INIT_1844(void)

{
  if ((DAT_04889fc8 & 1) == 0) {
    DAT_04889fb8 = 0;
    DAT_04889fc0 = 0;
    DAT_04889fa8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889fa8;
    DAT_04889fb0 = &DAT_046c54a0;
    DAT_04889fc8 = 1;
  }
  return;
}


