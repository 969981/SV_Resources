/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e8000; name: _INIT_2097
 */


void _INIT_2097(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aeca8 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aecb0 = 3;
  DAT_048aecb8 = 0x6e;
  DAT_048aecc0 = PTR_LAB_047e6b28;
  DAT_048aecc8 = PTR_LAB_047e6b30;
  memset(&DAT_048aecd0,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aeca8;
  return;
}


