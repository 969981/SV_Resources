/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146fa0; name: _INIT_917
 */


void _INIT_917(void)

{
  if ((DAT_04877108 & 1) == 0) {
    DAT_048770f8 = 0;
    DAT_04877100 = 0;
    DAT_048770e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048770e8;
    DAT_048770f0 = &DAT_0466c078;
    DAT_04877108 = 1;
  }
  return;
}


