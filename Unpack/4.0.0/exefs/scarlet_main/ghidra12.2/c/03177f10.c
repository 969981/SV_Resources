/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03177f10; name: _INIT_1346
 */


void _INIT_1346(void)

{
  if ((DAT_0487c0d8 & 1) == 0) {
    DAT_0487c0c8 = 0;
    DAT_0487c0d0 = 0;
    DAT_0487c0b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c0b8;
    DAT_0487c0c0 = &DAT_0468e180;
    DAT_0487c0d8 = 1;
  }
  return;
}


