/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d5845c; name: FUN_01d5845c
 */


void FUN_01d5845c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_01d59754;
  if (DAT_048310e8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01d599ec(auStack_30,param_2,puVar1,0);
  FUN_01d59a60(param_1,auStack_30);
  FUN_01d587ec(auStack_30);
  return;
}


