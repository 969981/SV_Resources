/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e2b0; name: _INIT_1193
 */


void _INIT_1193(void)

{
  if ((DAT_04879c28 & 1) == 0) {
    DAT_04879c18 = 0;
    DAT_04879c20 = 0;
    DAT_04879c08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879c08;
    DAT_04879c10 = &DAT_0467ca00;
    DAT_04879c28 = 1;
  }
  return;
}


