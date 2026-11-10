/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088b070; name: _INIT_115
 */


void _INIT_115(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d1ff0;
  puVar1 = PTR_DAT_047d1fe0;
  if ((*PTR_DAT_047d1ff0 & 1) == 0) {
    FUN_00887ee8(PTR_DAT_047d1fe0);
    FUN_00100190(PTR_FUN_047d1ff8,puVar1,&PTR_LOOP_04483000);
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


