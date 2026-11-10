/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007bfcf0; name: _INIT_83
 */


void _INIT_83(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_FUN_047d0ff0;
  puVar3 = PTR_DAT_047d0fe8;
  puVar1 = PTR_DAT_047d0fe8 + 8;
  puVar2 = PTR_DAT_047d0fd8 + 0x10;
  *(undefined4 *)(PTR_DAT_047d0fe8 + 0x18) = 0;
  *(undefined **)puVar3 = puVar2;
  *(undefined **)(puVar3 + 8) = puVar1;
  *(undefined **)(puVar3 + 0x10) = puVar1;
  FUN_00100190(puVar4,puVar3,&PTR_LOOP_04483000);
  return;
}


