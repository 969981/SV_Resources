/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148ac0; name: _INIT_971
 */


void _INIT_971(void)

{
  if ((DAT_04877978 & 1) == 0) {
    DAT_04877968 = 0;
    DAT_04877970 = 0;
    DAT_04877958 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877958;
    DAT_04877960 = &DAT_0466f208;
    DAT_04877978 = 1;
  }
  return;
}


