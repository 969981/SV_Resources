/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032262c0; name: _INIT_1668
 */


void _INIT_1668(void)

{
  DAT_048852c0 = 0;
  FUN_00100190(&LAB_03225f14,&DAT_048852c0,&PTR_LOOP_04483000);
  DAT_048852c8 = "$hkError";
  DAT_048852d0 = &LAB_03225f20;
  DAT_048852d8 = &LAB_03226020;
  DAT_048852e0 = &DAT_048852c0;
  DAT_048852e8 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_048852c8;
  return;
}


