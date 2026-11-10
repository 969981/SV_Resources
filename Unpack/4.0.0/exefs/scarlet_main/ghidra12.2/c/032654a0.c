/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032654a0; name: _INIT_1881
 */


void _INIT_1881(void)

{
  if ((DAT_0488a590 & 1) == 0) {
    DAT_0488a580 = 0;
    DAT_0488a588 = 0;
    DAT_0488a570 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a570;
    DAT_0488a578 = &DAT_046c7de8;
    DAT_0488a590 = 1;
  }
  return;
}


