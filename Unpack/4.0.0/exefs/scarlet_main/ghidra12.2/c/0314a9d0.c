/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a9d0; name: _INIT_1058
 */


void _INIT_1058(void)

{
  if ((DAT_04878710 & 1) == 0) {
    DAT_04878700 = 0;
    DAT_04878708 = 0;
    DAT_048786f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048786f0;
    DAT_048786f8 = &DAT_04674b70;
    DAT_04878710 = 1;
  }
  return;
}


