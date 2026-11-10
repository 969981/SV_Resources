/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e821fc; name: FUN_01e821fc
 */


void FUN_01e821fc(undefined8 *param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  if (*(long *)(param_2 + 0x40) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_01e79c5c(auStack_30);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01e7a094(param_1,auStack_30);
    FUN_01e79e4c(auStack_30);
  }
  return;
}


