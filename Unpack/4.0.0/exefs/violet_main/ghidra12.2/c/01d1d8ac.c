/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d1d8ac; name: FUN_01d1d8ac
 */


void FUN_01d1d8ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char local_30 [16];
  
  puVar1 = PTR_FUN_047d73b0;
  if (DAT_0482cfc0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d1e540(local_30,param_2,puVar1,0);
  FUN_01d1e5c0(param_1,local_30);
  return;
}


