/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035280; name: _INIT_741
 */


void _INIT_741(void)

{
  if ((DAT_04872428 & 1) == 0) {
    DAT_04872418 = 0;
    DAT_04872420 = 0;
    DAT_04872408 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872408;
    DAT_04872410 = &DAT_046467e8;
    DAT_04872428 = 1;
  }
  return;
}


