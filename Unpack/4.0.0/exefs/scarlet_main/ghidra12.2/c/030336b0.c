/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030336b0; name: _INIT_652
 */


void _INIT_652(void)

{
  if ((DAT_04871640 & 1) == 0) {
    DAT_04871630 = 0;
    DAT_04871638 = 0;
    DAT_04871620 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871620;
    DAT_04871628 = &DAT_046412e8;
    DAT_04871640 = 1;
  }
  return;
}


