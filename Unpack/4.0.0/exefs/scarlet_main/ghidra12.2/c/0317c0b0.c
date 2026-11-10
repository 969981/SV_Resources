/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317c0b0; name: _INIT_1453
 */


void _INIT_1453(void)

{
  if ((DAT_0487d190 & 1) == 0) {
    DAT_0487d180 = 0;
    DAT_0487d188 = 0;
    DAT_0487d170 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d170;
    DAT_0487d178 = &DAT_04694cc0;
    DAT_0487d190 = 1;
  }
  return;
}


