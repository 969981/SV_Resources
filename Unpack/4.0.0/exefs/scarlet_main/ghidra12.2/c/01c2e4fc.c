/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c2e4fc; name: FUN_01c2e4fc
 */


void FUN_01c2e4fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_8 [8];
  
  puVar1 = PTR_FUN_047d5dc8;
  if (DAT_048125b0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c30584(auStack_8,param_2,puVar1,0);
  FUN_01c305e0(param_1,auStack_8);
  FUN_01c0b508(auStack_8);
  return;
}


