/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a0cbc; name: FUN_028a0cbc
 */


void FUN_028a0cbc(undefined1 *param_1,undefined8 param_2)

{
  char local_78 [8];
  undefined1 auStack_70 [80];
  
  local_78[0] = '\0';
  FUN_028a0d28(local_78,param_2);
  *param_1 = 0;
  if (local_78[0] != '\0') {
    FUN_028a0d28(param_1,auStack_70);
    if (local_78[0] != '\0') {
      FUN_019ab5b0(auStack_70);
    }
  }
  return;
}


