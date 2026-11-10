/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0263823c; name: FUN_0263823c
 */


void FUN_0263823c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_8 [8];
  
  puVar1 = PTR_LAB_047e0310;
  if (DAT_04855940 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_02639a18(auStack_8,param_2,puVar1,0);
  FUN_02639a90(param_1,auStack_8);
  FUN_02635d94(auStack_8);
  return;
}


