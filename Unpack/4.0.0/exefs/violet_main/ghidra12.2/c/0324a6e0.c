/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324a6e0; name: _INIT_1724
 */


void _INIT_1724(void)

{
  if ((DAT_04888358 & 1) == 0) {
    DAT_04888348 = 0;
    DAT_04888350 = 0;
    DAT_04888338 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888338;
    DAT_04888340 = &DAT_046b9f78;
    DAT_04888358 = 1;
  }
  return;
}


