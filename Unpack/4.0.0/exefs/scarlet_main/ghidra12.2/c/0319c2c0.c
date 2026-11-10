/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c2c0; name: _INIT_1526
 */


void _INIT_1526(void)

{
  if ((DAT_0487e628 & 1) == 0) {
    DAT_0487e618 = 0;
    DAT_0487e620 = 0;
    DAT_0487e608 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e608;
    DAT_0487e610 = &DAT_0469f9e8;
    DAT_0487e628 = 1;
  }
  return;
}


