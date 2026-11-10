/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c2e3fc; name: FUN_01c2e3fc
 */


void FUN_01c2e3fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_28 [8];
  
  puVar1 = PTR_LAB_047d5dc0;
  if (DAT_048125a8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c0b43c(auStack_28,param_2);
  FUN_01c3054c(param_1,puVar1,0,auStack_28);
  FUN_01c0b508(auStack_28);
  return;
}


