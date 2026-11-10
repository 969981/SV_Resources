/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148e30; name: _INIT_982
 */


void _INIT_982(void)

{
  if ((DAT_04877b30 & 1) == 0) {
    DAT_04877b20 = 0;
    DAT_04877b28 = 0;
    DAT_04877b10 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877b10;
    DAT_04877b18 = &DAT_0466ff98;
    DAT_04877b30 = 1;
  }
  return;
}


