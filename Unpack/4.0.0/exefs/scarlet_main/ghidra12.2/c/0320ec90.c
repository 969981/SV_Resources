/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320ec90; name: _INIT_1652
 */


void _INIT_1652(void)

{
  if ((DAT_04885088 & 1) == 0) {
    DAT_04885078 = 0;
    DAT_04885080 = 0;
    DAT_04885068 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885068;
    DAT_04885070 = &DAT_046a9750;
    DAT_04885088 = 1;
  }
  return;
}


