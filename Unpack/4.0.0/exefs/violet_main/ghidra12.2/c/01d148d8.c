/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d148d8; name: FUN_01d148d8
 */


void FUN_01d148d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_188 [360];
  
  puVar1 = PTR_LAB_047d7308;
  if (DAT_0482ccf8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d15024(auStack_188,param_2,puVar1,0);
  FUN_01d15070(param_1,auStack_188);
  FUN_01d08584(auStack_188);
  return;
}


