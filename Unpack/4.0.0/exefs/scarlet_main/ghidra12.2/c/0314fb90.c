/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314fb90; name: _INIT_1268
 */


void _INIT_1268(void)

{
  if ((DAT_0487a7e0 & 1) == 0) {
    DAT_0487a7d0 = 0;
    DAT_0487a7d8 = 0;
    DAT_0487a7c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a7c0;
    DAT_0487a7c8 = &DAT_04681160;
    DAT_0487a7e0 = 1;
  }
  return;
}


