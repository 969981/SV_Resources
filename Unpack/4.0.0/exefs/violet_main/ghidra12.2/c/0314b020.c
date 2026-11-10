/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314b020; name: _INIT_1073
 */


void _INIT_1073(void)

{
  if ((DAT_04878968 & 1) == 0) {
    DAT_04878958 = 0;
    DAT_04878960 = 0;
    DAT_04878948 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878948;
    DAT_04878950 = &DAT_04675828;
    DAT_04878968 = 1;
  }
  return;
}


