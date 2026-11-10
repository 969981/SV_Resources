/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031e10; name: _INIT_573
 */


void _INIT_573(void)

{
  if ((DAT_048709f8 & 1) == 0) {
    DAT_048709e8 = 0;
    DAT_048709f0 = 0;
    DAT_048709d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048709d8;
    DAT_048709e0 = &DAT_0463c8f8;
    DAT_048709f8 = 1;
  }
  return;
}


