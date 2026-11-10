/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02554a3c; name: FUN_02554a3c
 */


void FUN_02554a3c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  void *__src;
  undefined1 auStack_50 [48];
  
  pcVar1 = FUN_0255ed50;
  if (DAT_04850af8 == '\0') {
    pcVar1 = (code *)0x0;
  }
  __src = (void *)FUN_017869fc(param_2);
  memcpy(auStack_50,__src,0x30);
  FUN_0255ef2c(param_1,pcVar1,0,auStack_50);
  return;
}


