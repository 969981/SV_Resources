/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320edd0; name: _INIT_1656
 */


void _INIT_1656(void)

{
  if ((DAT_04885128 & 1) == 0) {
    DAT_04885118 = 0;
    DAT_04885120 = 0;
    DAT_04885108 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885108;
    DAT_04885110 = &DAT_046a9ae0;
    DAT_04885128 = 1;
  }
  return;
}


