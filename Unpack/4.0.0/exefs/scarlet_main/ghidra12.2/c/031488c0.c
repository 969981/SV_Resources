/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031488c0; name: _INIT_965
 */


void _INIT_965(void)

{
  if ((DAT_04877888 & 1) == 0) {
    DAT_04877878 = 0;
    DAT_04877880 = 0;
    DAT_04877868 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877868;
    DAT_04877870 = &DAT_0466ecf8;
    DAT_04877888 = 1;
  }
  return;
}


