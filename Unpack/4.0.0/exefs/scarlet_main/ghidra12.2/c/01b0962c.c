/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


