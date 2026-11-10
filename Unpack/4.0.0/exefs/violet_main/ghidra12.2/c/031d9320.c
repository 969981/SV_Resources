/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d9320; name: _INIT_1605
 */


void _INIT_1605(void)

{
  DAT_04884290 = 0;
  DAT_04884240 = &DAT_04884250;
  DAT_04884248 = 0x8000000400000000;
  DAT_04884292 = 1;
  DAT_048842a0 = *(undefined8 *)PTR_DAT_047e3450;
  DAT_04884298 = "base.reflect.cloner";
  *(undefined ***)PTR_DAT_047e3450 = &DAT_04884240;
  FUN_00100190(PTR_LAB_047d1bf8,&DAT_04884240,&PTR_LOOP_04483000);
  DAT_048842a8 = &PTR_LAB_046a5838;
  return;
}


