/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b1dc9c; name: FUN_01b1dc9c
 */


void FUN_01b1dc9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_28;
  
  puVar1 = PTR_LAB_047d4150;
  if (DAT_048043b0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_28 = FUN_01b1e738(param_2);
  FUN_01b1e77c(param_1,puVar1,0,&local_28);
  return;
}


