/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320f050; name: _INIT_1664
 */


void _INIT_1664(void)

{
  if ((DAT_04885268 & 1) == 0) {
    DAT_04885258 = 0;
    DAT_04885260 = 0;
    DAT_04885248 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885248;
    DAT_04885250 = &DAT_046aa130;
    DAT_04885268 = 1;
  }
  return;
}


