/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c8cf0; name: _INIT_2090
 */


void _INIT_2090(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048ae990 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048ae998 = 2;
  DAT_048ae9a0 = 200;
  DAT_048ae9a8 = &LAB_033c8a20;
  DAT_048ae9b0 = &LAB_033c8a70;
  memset(&DAT_048ae9b8,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048ae990;
  return;
}


