/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d7580; name: _INIT_1600
 */


void _INIT_1600(void)

{
  DAT_048841e0 = 0;
  DAT_04884190 = &DAT_048841a0;
  DAT_04884198 = 0x8000000400000000;
  DAT_048841e2 = 1;
  DAT_048841f0 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_048841e8 = "base.reflect.attributes";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04884190;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_04884190,&PTR_LOOP_04483000);
  DAT_04884200 = 1;
  DAT_048841f8 = &PTR_LAB_046a5628;
  DAT_04884208 = &PTR_LAB_046a55d0;
  DAT_04884210 = PTR_PTR_047d1a50;
  return;
}


