/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0257621c; name: FUN_0257621c
 */


void FUN_0257621c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_0257ee48;
  if (DAT_04851f20 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0257f1d8(auStack_30,param_2,puVar1,0);
  FUN_0257f250(param_1,auStack_30);
  FUN_025765b4(auStack_30);
  return;
}


