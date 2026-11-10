/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176870; name: _INIT_1318
 */


void _INIT_1318(void)

{
  if ((DAT_0487bc78 & 1) == 0) {
    DAT_0487bc68 = 0;
    DAT_0487bc70 = 0;
    DAT_0487bc58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bc58;
    DAT_0487bc60 = &DAT_0468c6e0;
    DAT_0487bc78 = 1;
  }
  return;
}


