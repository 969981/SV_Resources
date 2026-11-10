/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d4340; name: _INIT_1596
 */


void _INIT_1596(void)

{
  DAT_048840f0 = 0;
  FUN_00100190(&LAB_031d40c4,&DAT_048840f0,&PTR_LOOP_04483000);
  DAT_048840f8 = "$hkReferencedObjectLock";
  DAT_04884100 = &LAB_031d40d0;
  DAT_04884108 = &LAB_031d41d0;
  DAT_04884110 = &DAT_048840f0;
  DAT_04884118 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_048840f8;
  return;
}


