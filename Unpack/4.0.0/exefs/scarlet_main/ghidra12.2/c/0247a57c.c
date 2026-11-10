/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0247a57c; name: FUN_0247a57c
 */


void FUN_0247a57c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_0247bc54;
  if (DAT_0484c198 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0247bef4(auStack_30,param_2,puVar1,0);
  FUN_0247bf70(param_1,auStack_30);
  FUN_0247a914(auStack_30);
  return;
}


