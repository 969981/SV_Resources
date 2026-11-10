/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033f9ea0; name: _INIT_2103
 */


void _INIT_2103(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aef50 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aef58 = 3;
  DAT_048aef60 = 0x8b;
  DAT_048aef68 = PTR_LAB_047e6b98;
  DAT_048aef70 = PTR_LAB_047e6ba0;
  memset(&DAT_048aef78,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aef50;
  return;
}


