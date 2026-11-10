/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035000; name: _INIT_733
 */


void _INIT_733(void)

{
  if ((DAT_048722e8 & 1) == 0) {
    DAT_048722d8 = 0;
    DAT_048722e0 = 0;
    DAT_048722c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048722c8;
    DAT_048722d0 = &DAT_04646148;
    DAT_048722e8 = 1;
  }
  return;
}


