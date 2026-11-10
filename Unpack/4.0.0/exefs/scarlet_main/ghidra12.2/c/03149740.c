/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149740; name: _INIT_1011
 */


void _INIT_1011(void)

{
  if ((DAT_04877fb8 & 1) == 0) {
    DAT_04877fa8 = 0;
    DAT_04877fb0 = 0;
    DAT_04877f98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877f98;
    DAT_04877fa0 = &DAT_04671c20;
    DAT_04877fb8 = 1;
  }
  return;
}


