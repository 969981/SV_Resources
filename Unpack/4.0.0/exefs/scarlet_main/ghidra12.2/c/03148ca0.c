/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148ca0; name: _INIT_977
 */


void _INIT_977(void)

{
  if ((DAT_04877a68 & 1) == 0) {
    DAT_04877a58 = 0;
    DAT_04877a60 = 0;
    DAT_04877a48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877a48;
    DAT_04877a50 = &DAT_0466fa58;
    DAT_04877a68 = 1;
  }
  return;
}


