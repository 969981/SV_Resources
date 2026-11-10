/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


