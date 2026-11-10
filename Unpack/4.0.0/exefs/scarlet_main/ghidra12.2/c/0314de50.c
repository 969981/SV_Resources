/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314de50; name: _INIT_1179
 */


void _INIT_1179(void)

{
  if ((DAT_048799f8 & 1) == 0) {
    DAT_048799e8 = 0;
    DAT_048799f0 = 0;
    DAT_048799d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048799d8;
    DAT_048799e0 = &DAT_0467bc20;
    DAT_048799f8 = 1;
  }
  return;
}


