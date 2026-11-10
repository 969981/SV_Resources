/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c260dc; name: FUN_01c260dc
 */


void FUN_01c260dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_LAB_047d5d28;
  if (DAT_04812580 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c28e10(auStack_30,param_2,puVar1,0);
  FUN_01c28e90(param_1,auStack_30);
  FUN_01c1749c(auStack_30);
  return;
}


