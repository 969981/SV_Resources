/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031497e0; name: _INIT_1013
 */


void _INIT_1013(void)

{
  if ((DAT_04878008 & 1) == 0) {
    DAT_04877ff8 = 0;
    DAT_04878000 = 0;
    DAT_04877fe8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877fe8;
    DAT_04877ff0 = &DAT_04671ef0;
    DAT_04878008 = 1;
  }
  return;
}


