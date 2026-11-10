/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068f230; name: _INIT_60
 */


void _INIT_60(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047cf648;
  PTR_DAT_047cf648[4] = 0;
  puVar1[9] = 0;
  FUN_00100190(PTR_LAB_047cee88,puVar1,&PTR_LOOP_04483000);
  puVar1 = PTR_DAT_047cf650;
  *(undefined **)PTR_DAT_047cf650 = PTR_LAB_047cf658;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_0052d9a0();
  return;
}


