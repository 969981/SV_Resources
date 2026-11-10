/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a8700; name: _INIT_1548
 */


void _INIT_1548(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_047e58b8;
  DAT_0487e998 = *(undefined8 *)PTR_DAT_047e58b8;
  *(undefined ***)PTR_DAT_047e58b8 = &DAT_0487e990;
  DAT_0487e990 = PTR_DAT_047e58d0 + 0x10;
  FUN_00100190(&LAB_031a8470,&DAT_0487e990,&PTR_LOOP_04483000);
  DAT_0487e9a8 = *(undefined8 *)puVar1;
  *(undefined ***)puVar1 = &DAT_0487e9a0;
  DAT_0487e9a0 = PTR_DAT_047e58d8 + 0x10;
  FUN_00100190(&LAB_031a8470,&DAT_0487e9a0,&PTR_LOOP_04483000);
  DAT_0487e9b8 = *(undefined8 *)puVar1;
  *(undefined ***)puVar1 = &DAT_0487e9b0;
  DAT_0487e9b0 = PTR_DAT_047e58e0 + 0x10;
  FUN_00100190(&LAB_031a8470,&DAT_0487e9b0,&PTR_LOOP_04483000);
  puVar2 = PTR_DAT_047e58e8;
  DAT_0487e9c8 = *(undefined8 *)puVar1;
  *(undefined ***)puVar1 = &DAT_0487e9c0;
  DAT_0487e9c0 = puVar2 + 0x10;
  FUN_00100190(&LAB_031a8470,&DAT_0487e9c0,&PTR_LOOP_04483000);
  return;
}


