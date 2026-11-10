/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bf7d8c; name: FUN_01bf7d8c
 */


void FUN_01bf7d8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_LAB_047d59e8;
  if (DAT_04810740 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01bf861c(auStack_30,param_2,puVar1,0);
  FUN_01bf8690(param_1,auStack_30);
  FUN_01bf6cb4(auStack_30);
  return;
}


