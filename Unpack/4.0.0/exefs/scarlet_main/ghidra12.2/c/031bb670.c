/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031bb670; name: _INIT_1559
 */


void _INIT_1559(void)

{
  if ((DAT_04882f38 & 1) == 0) {
    DAT_04882f28 = 0;
    DAT_04882f30 = 0;
    DAT_04882f18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04882f18;
    DAT_04882f20 = &DAT_046a2fb8;
    DAT_04882f38 = 1;
  }
  return;
}


