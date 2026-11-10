/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176a00; name: _INIT_1323
 */


void _INIT_1323(void)

{
  if ((DAT_0487bd40 & 1) == 0) {
    DAT_0487bd30 = 0;
    DAT_0487bd38 = 0;
    DAT_0487bd20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bd20;
    DAT_0487bd28 = &DAT_0468cb90;
    DAT_0487bd40 = 1;
  }
  return;
}


