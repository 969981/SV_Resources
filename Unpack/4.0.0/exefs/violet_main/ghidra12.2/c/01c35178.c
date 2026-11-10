/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c35178; name: FUN_01c35178
 */


void FUN_01c35178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char local_30 [16];
  
  puVar1 = PTR_LAB_047d5f48;
  if (DAT_048125d0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c362d4(local_30,param_2,puVar1,0);
  FUN_01c36350(param_1,local_30);
  return;
}


