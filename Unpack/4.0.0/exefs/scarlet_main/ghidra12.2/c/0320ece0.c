/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320ece0; name: _INIT_1653
 */


void _INIT_1653(void)

{
  if ((DAT_048850b0 & 1) == 0) {
    DAT_048850a0 = 0;
    DAT_048850a8 = 0;
    DAT_04885090 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885090;
    DAT_04885098 = &DAT_046a9680;
    DAT_048850b0 = 1;
  }
  return;
}


