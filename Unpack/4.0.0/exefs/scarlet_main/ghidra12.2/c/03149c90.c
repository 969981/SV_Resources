/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149c90; name: _INIT_1028
 */


void _INIT_1028(void)

{
  if ((DAT_04878260 & 1) == 0) {
    DAT_04878250 = 0;
    DAT_04878258 = 0;
    DAT_04878240 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878240;
    DAT_04878248 = &DAT_04672f58;
    DAT_04878260 = 1;
  }
  return;
}


