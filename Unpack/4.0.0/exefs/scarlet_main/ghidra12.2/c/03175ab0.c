/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03175ab0; name: _INIT_1274
 */


void _INIT_1274(void)

{
  if ((DAT_0487b598 & 1) == 0) {
    DAT_0487b588 = 0;
    DAT_0487b590 = 0;
    DAT_0487b578 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b578;
    DAT_0487b580 = &DAT_04689428;
    DAT_0487b598 = 1;
  }
  return;
}


