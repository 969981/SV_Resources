/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149920; name: _INIT_1017
 */


void _INIT_1017(void)

{
  if ((DAT_048780a8 & 1) == 0) {
    DAT_04878098 = 0;
    DAT_048780a0 = 0;
    DAT_04878088 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878088;
    DAT_04878090 = &DAT_04672438;
    DAT_048780a8 = 1;
  }
  return;
}


