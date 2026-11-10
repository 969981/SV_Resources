/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b1e860; name: FUN_01b1e860
 */


void FUN_01b1e860(undefined1 *param_1,long param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 == 0) {
    local_40 = 0;
    uStack_38 = 0;
  }
  else {
    FUN_01b1e8e4(&local_40);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_01b1ea4c(param_1 + 8,&local_40);
  if (param_2 == 0) {
    FUN_01af51b0(&local_40);
  }
  else {
    FUN_01af51b0(&local_40);
  }
  return;
}


