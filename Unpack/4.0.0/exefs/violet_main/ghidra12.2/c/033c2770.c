/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c2770; name: _INIT_2086
 */


void _INIT_2086(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048ae7d0 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048ae7d8 = 2;
  DAT_048ae7e0 = 0x66;
  DAT_048ae7e8 = &LAB_033c1d50;
  DAT_048ae7f0 = &LAB_033c1df0;
  memset(&DAT_048ae7f8,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048ae7d0;
  return;
}


