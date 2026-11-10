/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03175ba0; name: _INIT_1277
 */


void _INIT_1277(void)

{
  if ((DAT_0487b610 & 1) == 0) {
    DAT_0487b600 = 0;
    DAT_0487b608 = 0;
    DAT_0487b5f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b5f0;
    DAT_0487b5f8 = &DAT_04689790;
    DAT_0487b610 = 1;
  }
  return;
}


