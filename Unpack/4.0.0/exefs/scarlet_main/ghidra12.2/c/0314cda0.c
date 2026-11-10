/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314cda0; name: _INIT_1135
 */


void _INIT_1135(void)

{
  if ((DAT_04879318 & 1) == 0) {
    DAT_04879308 = 0;
    DAT_04879310 = 0;
    DAT_048792f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048792f8;
    DAT_04879300 = &DAT_04679148;
    DAT_04879318 = 1;
  }
  return;
}


