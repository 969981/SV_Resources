/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146f50; name: _INIT_916
 */


void _INIT_916(void)

{
  if ((DAT_048770e0 & 1) == 0) {
    DAT_048770d0 = 0;
    DAT_048770d8 = 0;
    DAT_048770c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048770c0;
    DAT_048770c8 = &DAT_0466bf58;
    DAT_048770e0 = 1;
  }
  return;
}


