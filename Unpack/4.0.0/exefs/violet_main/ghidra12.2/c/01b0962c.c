/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b0962c; name: FUN_01b0962c
 */


void FUN_01b0962c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_047d3ed0;
  if (DAT_048042e0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01b09d2c(param_2,puVar1,0);
  FUN_00e918c0(param_1);
  return;
}


