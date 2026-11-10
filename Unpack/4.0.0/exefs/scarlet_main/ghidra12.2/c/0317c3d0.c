/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317c3d0; name: _INIT_1463
 */


void _INIT_1463(void)

{
  if ((DAT_0487d320 & 1) == 0) {
    DAT_0487d310 = 0;
    DAT_0487d318 = 0;
    DAT_0487d300 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d300;
    DAT_0487d308 = &DAT_04695798;
    DAT_0487d320 = 1;
  }
  return;
}


