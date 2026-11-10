/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ff2d0; name: _INIT_2106
 */


void _INIT_2106(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048af0a0 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048af0a8 = 3;
  DAT_048af0b0 = 0x6a;
  DAT_048af0b8 = &LAB_033fed70;
  DAT_048af0c0 = &LAB_033fedd0;
  memset(&DAT_048af0c8,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048af0a0;
  return;
}


