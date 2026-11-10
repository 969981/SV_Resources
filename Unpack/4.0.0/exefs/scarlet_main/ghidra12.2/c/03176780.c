/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176780; name: _INIT_1315
 */


void _INIT_1315(void)

{
  if ((DAT_0487bc00 & 1) == 0) {
    DAT_0487bbf0 = 0;
    DAT_0487bbf8 = 0;
    DAT_0487bbe0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bbe0;
    DAT_0487bbe8 = &DAT_0468c300;
    DAT_0487bc00 = 1;
  }
  return;
}


