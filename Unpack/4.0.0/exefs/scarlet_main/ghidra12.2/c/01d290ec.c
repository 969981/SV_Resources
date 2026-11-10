/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d290ec; name: FUN_01d290ec
 */


void FUN_01d290ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_28 [8];
  
  puVar1 = &LAB_01d32a48;
  if (DAT_0482f050 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01d32b80(auStack_28,param_2);
  FUN_01d32c04(param_1,puVar1,0,auStack_28);
  FUN_01d32648(auStack_28);
  return;
}


