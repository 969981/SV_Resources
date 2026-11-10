/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f4b0; name: _INIT_1246
 */


void _INIT_1246(void)

{
  if ((DAT_0487a470 & 1) == 0) {
    DAT_0487a460 = 0;
    DAT_0487a468 = 0;
    DAT_0487a450 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a450;
    DAT_0487a458 = &DAT_0467ffc0;
    DAT_0487a470 = 1;
  }
  return;
}


