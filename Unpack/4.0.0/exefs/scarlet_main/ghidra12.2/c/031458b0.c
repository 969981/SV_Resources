/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031458b0; name: _INIT_859
 */


void _INIT_859(void)

{
  if ((DAT_048767f8 & 1) == 0) {
    DAT_048767e8 = 0;
    DAT_048767f0 = 0;
    DAT_048767d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048767d8;
    DAT_048767e0 = &DAT_04668b18;
    DAT_048767f8 = 1;
  }
  return;
}


