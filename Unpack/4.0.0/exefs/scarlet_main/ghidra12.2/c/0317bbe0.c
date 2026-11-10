/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317bbe0; name: _INIT_1447
 */


void _INIT_1447(void)

{
  if ((DAT_0487d0a0 & 1) == 0) {
    DAT_0487d090 = 0;
    DAT_0487d098 = 0;
    DAT_0487d080 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d080;
    DAT_0487d088 = &DAT_04694788;
    DAT_0487d0a0 = 1;
  }
  return;
}


