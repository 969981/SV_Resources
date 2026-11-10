/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03241f70; name: _INIT_1685
 */


void _INIT_1685(void)

{
  if ((DAT_048858a0 & 1) == 0) {
    DAT_04885890 = 0;
    DAT_04885898 = 0;
    DAT_04885880 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885880;
    DAT_04885888 = &DAT_046ab990;
    DAT_048858a0 = 1;
  }
  return;
}


