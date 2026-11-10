/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bdd8c; name: FUN_019bdd8c
 */


void FUN_019bdd8c(long param_1,long param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_40 = 0;
  uStack_38 = 0;
  FUN_00c43ef0(&local_40);
  local_30 = *(undefined8 *)(param_2 + 0x10);
  local_28 = *(undefined1 *)(param_2 + 0x18);
  FUN_019bdde4(param_1 + 0x90,&local_40);
  FUN_019b7290(&local_40);
  return;
}


