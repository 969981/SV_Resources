/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02552c98; name: FUN_02552c98
 */


void FUN_02552c98(undefined1 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  pcVar1 = FUN_0255b770;
  if (DAT_04850ac8 == '\0') {
    pcVar1 = (code *)0x0;
  }
  FUN_0255b994(auStack_a0,param_2,pcVar1,0);
  *param_1 = 1;
  memcpy(auStack_60,auStack_a0,0x40);
  FUN_0255ba2c(param_1 + 8,auStack_60);
  return;
}


