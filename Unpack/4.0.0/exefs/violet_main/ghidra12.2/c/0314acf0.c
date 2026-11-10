/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314acf0; name: _INIT_1068
 */


void _INIT_1068(void)

{
  if ((DAT_048788a0 & 1) == 0) {
    DAT_04878890 = 0;
    DAT_04878898 = 0;
    DAT_04878880 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878880;
    DAT_04878888 = &DAT_04675380;
    DAT_048788a0 = 1;
  }
  return;
}


