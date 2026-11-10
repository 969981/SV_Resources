/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d720; name: _INIT_1156
 */


void _INIT_1156(void)

{
  if ((DAT_04879660 & 1) == 0) {
    DAT_04879650 = 0;
    DAT_04879658 = 0;
    DAT_04879640 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879640;
    DAT_04879648 = &DAT_0467a648;
    DAT_04879660 = 1;
  }
  return;
}


