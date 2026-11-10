/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b8a0; name: _INIT_1088
 */


void _INIT_1088(void)

{
  if ((DAT_04878bc0 & 1) == 0) {
    DAT_04878bb0 = 0;
    DAT_04878bb8 = 0;
    DAT_04878ba0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878ba0;
    DAT_04878ba8 = &DAT_04676550;
    DAT_04878bc0 = 1;
  }
  return;
}


