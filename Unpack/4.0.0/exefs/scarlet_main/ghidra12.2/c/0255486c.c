/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0255486c; name: FUN_0255486c
 */


void FUN_0255486c(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  
  puVar1 = &LAB_0255e8ec;
  if (DAT_04850af0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0255eb18(auStack_80,param_2,puVar1,0);
  *param_1 = 1;
  memcpy(auStack_50,auStack_80,0x30);
  FUN_00f6b19c(param_1 + 8,auStack_50);
  return;
}


