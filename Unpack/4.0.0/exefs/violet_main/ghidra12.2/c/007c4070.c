/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c4070; name: _INIT_84
 */


void _INIT_84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d1098;
  puVar1 = PTR_DAT_047d1080;
  *(undefined **)PTR_DAT_047d1080 = PTR_DAT_047d1090 + 0x10;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1 = PTR_DAT_047d0898;
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_007c4104(puVar1,4,puVar1 + 0x10);
  puVar2 = PTR_DAT_047d1088;
  puVar1 = PTR_DAT_047d1088 + 0x10;
  *(undefined8 *)PTR_DAT_047d1088 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  FUN_007c4104(puVar2,4,puVar1);
  puVar1 = PTR_DAT_047d1068;
  FUN_007c9d80(PTR_DAT_047d1068);
  FUN_00100190(PTR_FUN_047d10a0,puVar1,&PTR_LOOP_04483000);
  *(undefined4 *)PTR_DAT_047d1060 = 0;
  return;
}


