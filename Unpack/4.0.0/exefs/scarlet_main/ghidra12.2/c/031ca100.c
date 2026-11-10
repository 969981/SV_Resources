/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031ca100; name: _INIT_1576
 */


void _INIT_1576(void)

{
  if ((DAT_04883480 & 1) == 0) {
    DAT_04883470 = 0;
    DAT_04883478 = 0;
    DAT_04883460 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04883460;
    DAT_04883468 = &DAT_046a4680;
    DAT_04883480 = 1;
  }
  return;
}


