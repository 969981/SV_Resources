/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033840; name: _INIT_657
 */


void _INIT_657(void)

{
  if ((DAT_04871708 & 1) == 0) {
    DAT_048716f8 = 0;
    DAT_04871700 = 0;
    DAT_048716e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048716e8;
    DAT_048716f0 = &DAT_04641680;
    DAT_04871708 = 1;
  }
  return;
}


