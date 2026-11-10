/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c8f0; name: _INIT_1120
 */


void _INIT_1120(void)

{
  if ((DAT_048790c0 & 1) == 0) {
    DAT_048790b0 = 0;
    DAT_048790b8 = 0;
    DAT_048790a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048790a0;
    DAT_048790a8 = &DAT_04678138;
    DAT_048790c0 = 1;
  }
  return;
}


