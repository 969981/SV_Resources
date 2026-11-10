/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030353c0; name: _INIT_745
 */


void _INIT_745(void)

{
  if ((DAT_048724c8 & 1) == 0) {
    DAT_048724b8 = 0;
    DAT_048724c0 = 0;
    DAT_048724a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048724a8;
    DAT_048724b0 = &DAT_04646c00;
    DAT_048724c8 = 1;
  }
  return;
}


