/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264dc0; name: _INIT_1859
 */


void _INIT_1859(void)

{
  if ((DAT_0488a220 & 1) == 0) {
    DAT_0488a210 = 0;
    DAT_0488a218 = 0;
    DAT_0488a200 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a200;
    DAT_0488a208 = &DAT_046c6270;
    DAT_0488a220 = 1;
  }
  return;
}


