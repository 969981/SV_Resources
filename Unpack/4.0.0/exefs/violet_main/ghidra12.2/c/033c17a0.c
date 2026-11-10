/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c17a0; name: _INIT_2085
 */


void _INIT_2085(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048ae760 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048ae768 = 0x4000000003;
  DAT_048ae770 = 0;
  DAT_048ae778 = &LAB_033c0090;
  DAT_048ae780 = &LAB_033c0120;
  memset(&DAT_048ae788,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048ae760;
  return;
}


