/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036c70; name: _INIT_818
 */


void _INIT_818(void)

{
  if ((DAT_04873030 & 1) == 0) {
    DAT_04873020 = 0;
    DAT_04873028 = 0;
    DAT_04873010 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873010;
    DAT_04873018 = &DAT_0464b9b0;
    DAT_04873030 = 1;
  }
  return;
}


