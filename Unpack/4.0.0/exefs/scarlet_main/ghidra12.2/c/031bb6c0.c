/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031bb6c0; name: _INIT_1560
 */


void _INIT_1560(void)

{
  if ((DAT_04882f60 & 1) == 0) {
    DAT_04882f50 = 0;
    DAT_04882f58 = 0;
    DAT_04882f40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04882f40;
    DAT_04882f48 = &DAT_046a30b0;
    DAT_04882f60 = 1;
  }
  return;
}


