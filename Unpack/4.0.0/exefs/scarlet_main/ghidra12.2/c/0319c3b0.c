/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c3b0; name: _INIT_1529
 */


void _INIT_1529(void)

{
  if ((DAT_0487e6a0 & 1) == 0) {
    DAT_0487e690 = 0;
    DAT_0487e698 = 0;
    DAT_0487e680 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e680;
    DAT_0487e688 = &DAT_0469fdb8;
    DAT_0487e6a0 = 1;
  }
  return;
}


