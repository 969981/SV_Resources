/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ead0; name: _INIT_1219
 */


void _INIT_1219(void)

{
  if ((DAT_0487a038 & 1) == 0) {
    DAT_0487a028 = 0;
    DAT_0487a030 = 0;
    DAT_0487a018 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a018;
    DAT_0487a020 = &DAT_0467e4c0;
    DAT_0487a038 = 1;
  }
  return;
}


