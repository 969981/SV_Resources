/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03263ee0; name: _INIT_1811
 */


void _INIT_1811(void)

{
  if ((DAT_04889ac0 & 1) == 0) {
    DAT_04889ab0 = 0;
    DAT_04889ab8 = 0;
    DAT_04889aa0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889aa0;
    DAT_04889aa8 = &DAT_046c3258;
    DAT_04889ac0 = 1;
  }
  return;
}


