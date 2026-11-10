/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031760a0; name: _INIT_1293
 */


void _INIT_1293(void)

{
  if ((DAT_0487b890 & 1) == 0) {
    DAT_0487b880 = 0;
    DAT_0487b888 = 0;
    DAT_0487b870 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b870;
    DAT_0487b878 = &DAT_0468aa20;
    DAT_0487b890 = 1;
  }
  return;
}


