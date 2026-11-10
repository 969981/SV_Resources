/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030337f0; name: _INIT_656
 */


void _INIT_656(void)

{
  if ((DAT_048716e0 & 1) == 0) {
    DAT_048716d0 = 0;
    DAT_048716d8 = 0;
    DAT_048716c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048716c0;
    DAT_048716c8 = &DAT_046415c8;
    DAT_048716e0 = 1;
  }
  return;
}


