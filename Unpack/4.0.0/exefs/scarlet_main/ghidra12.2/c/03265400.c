/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03265400; name: _INIT_1879
 */


void _INIT_1879(void)

{
  if ((DAT_0488a540 & 1) == 0) {
    DAT_0488a530 = 0;
    DAT_0488a538 = 0;
    DAT_0488a520 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a520;
    DAT_0488a528 = &DAT_046c7b80;
    DAT_0488a540 = 1;
  }
  return;
}


