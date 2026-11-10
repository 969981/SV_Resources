/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033760c0; name: _INIT_2060
 */


void _INIT_2060(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_047d1bf8;
  DAT_0488dd12 = 1;
  DAT_0488dcc0 = &DAT_0488dcd0;
  DAT_0488dcc8 = 0x8000000400000000;
  DAT_0488dd20 = *(undefined8 *)PTR_DAT_047e3450;
  *(undefined ***)PTR_DAT_047e3450 = &DAT_0488dcc0;
  DAT_0488dd10 = 0;
  DAT_0488dd18 = "base.s11n.indexedBundle";
  FUN_00100190(puVar1,&DAT_0488dcc0,&PTR_LOOP_04483000);
  return;
}


