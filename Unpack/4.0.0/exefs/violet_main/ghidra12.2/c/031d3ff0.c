/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d3ff0; name: _INIT_1595
 */


void _INIT_1595(void)

{
  undefined *puVar1;
  
  DAT_04884098 = 0;
  DAT_04884088 = 1;
  DAT_04884090 = 0;
  DAT_048840a8 = 1;
  DAT_048840b0 = 0;
  DAT_048840b4 = 0xffffffff;
  DAT_04884078 = &DAT_046a5520;
  DAT_04884080 = 0;
  FUN_00100190(PTR_LAB_047e49b0,&DAT_04884078,&PTR_LOOP_04483000);
  DAT_048840b8 = &DAT_04884078;
  FUN_00100190(&LAB_031d39d8,&DAT_048840b8,&PTR_LOOP_04483000);
  puVar1 = PTR_DAT_047e4880;
  DAT_048840d0 = 0;
  DAT_048840d8 = &DAT_048840b8;
  DAT_048840c0 = "$hkMonitorStreamStatics";
  DAT_048840c8 = 0;
  DAT_048840e0 = *(undefined8 *)PTR_DAT_047e3f18;
  *(char ***)PTR_DAT_047e3f18 = &DAT_048840c0;
  DAT_048840e8 = *(int *)(puVar1 + 4);
  *(int *)(puVar1 + 4) = DAT_048840e8 + 1;
  return;
}


