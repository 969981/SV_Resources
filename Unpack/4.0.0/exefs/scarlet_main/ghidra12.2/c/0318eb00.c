/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318eb00; name: _INIT_1477
 */


void _INIT_1477(void)

{
  if ((DAT_0487d788 & 1) == 0) {
    DAT_0487d778 = 0;
    DAT_0487d780 = 0;
    DAT_0487d768 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d768;
    DAT_0487d770 = &DAT_046986a0;
    DAT_0487d788 = 1;
  }
  return;
}


