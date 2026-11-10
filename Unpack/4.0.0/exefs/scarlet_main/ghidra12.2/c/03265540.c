/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03265540; name: _INIT_1883
 */


void _INIT_1883(void)

{
  if ((DAT_0488a5e0 & 1) == 0) {
    DAT_0488a5d0 = 0;
    DAT_0488a5d8 = 0;
    DAT_0488a5c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a5c0;
    DAT_0488a5c8 = &DAT_046c8050;
    DAT_0488a5e0 = 1;
  }
  return;
}


