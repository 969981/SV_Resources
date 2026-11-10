/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318ea10; name: _INIT_1474
 */


void _INIT_1474(void)

{
  if ((DAT_0487d710 & 1) == 0) {
    DAT_0487d700 = 0;
    DAT_0487d708 = 0;
    DAT_0487d6f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d6f0;
    DAT_0487d6f8 = &DAT_046983a8;
    DAT_0487d710 = 1;
  }
  return;
}


