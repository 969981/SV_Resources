/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0160e65c; name: FUN_0160e65c
 */


void FUN_0160e65c(void)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0x439f0e192b3cd960;
  pcStack_28 = "ti_EnvSoundComponent";
  local_20 = 0x14;
  local_18 = (long *)0x0;
  FUN_0160e6b8(&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


