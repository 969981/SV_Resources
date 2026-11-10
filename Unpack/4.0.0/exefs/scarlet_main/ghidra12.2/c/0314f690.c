/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f690; name: _INIT_1252
 */


void _INIT_1252(void)

{
  if ((DAT_0487a560 & 1) == 0) {
    DAT_0487a550 = 0;
    DAT_0487a558 = 0;
    DAT_0487a540 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a540;
    DAT_0487a548 = &DAT_04680380;
    DAT_0487a560 = 1;
  }
  return;
}


