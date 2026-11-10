/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022cb17c; name: FUN_022cb17c
 */


void FUN_022cb17c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_022cc8f4;
  if (DAT_048463b0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_022ccb94(auStack_30,param_2,puVar1,0);
  FUN_022ccc10(param_1,auStack_30);
  FUN_022cb50c(auStack_30);
  return;
}


