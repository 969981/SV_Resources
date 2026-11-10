/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d630; name: _INIT_1153
 */


void _INIT_1153(void)

{
  if ((DAT_048795e8 & 1) == 0) {
    DAT_048795d8 = 0;
    DAT_048795e0 = 0;
    DAT_048795c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048795c8;
    DAT_048795d0 = &DAT_0467a2a0;
    DAT_048795e8 = 1;
  }
  return;
}


