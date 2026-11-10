/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088b0d0; name: _INIT_116
 */


void _INIT_116(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d2000;
  puVar1 = PTR_DAT_047d1fe8;
  if ((*PTR_DAT_047d2000 & 1) == 0) {
    FUN_00887ee8(PTR_DAT_047d1fe8);
    *(undefined **)puVar1 = PTR_DAT_047d2008 + 0x10;
    FUN_00100190(PTR_FUN_047d2010,puVar1,&PTR_LOOP_04483000);
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


