/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318e920; name: _INIT_1471
 */


void _INIT_1471(void)

{
  if ((DAT_0487d698 & 1) == 0) {
    DAT_0487d688 = 0;
    DAT_0487d690 = 0;
    DAT_0487d678 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d678;
    DAT_0487d680 = &DAT_04698050;
    DAT_0487d698 = 1;
  }
  return;
}


