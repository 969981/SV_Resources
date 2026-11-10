/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036e00; name: _INIT_823
 */


void _INIT_823(void)

{
  if ((DAT_048730f8 & 1) == 0) {
    DAT_048730e8 = 0;
    DAT_048730f0 = 0;
    DAT_048730d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048730d8;
    DAT_048730e0 = &DAT_0464be28;
    DAT_048730f8 = 1;
  }
  return;
}


