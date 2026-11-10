/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ffcd0; name: _INIT_2107
 */


void _INIT_2107(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048af110 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048af118 = 3;
  DAT_048af120 = 0x6c;
  DAT_048af128 = PTR_LAB_047e6bd0;
  DAT_048af130 = PTR_LAB_047e6bd8;
  memset(&DAT_048af138,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048af110;
  return;
}


