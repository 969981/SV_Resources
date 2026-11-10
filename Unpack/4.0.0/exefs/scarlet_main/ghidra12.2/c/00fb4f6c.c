/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb4f6c; name: FUN_00fb4f6c
 */


void FUN_00fb4f6c(long param_1)

{
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  local_c8 = *(undefined8 *)(param_1 + 0xce8);
  local_c0 = *(undefined8 *)(param_1 + 0xcf0);
  uStack_b8 = *(undefined8 *)(param_1 + 0xcf8);
  FUN_00fb9f24(auStack_b0,param_1 + 0xd00);
  FUN_00fb9f24(auStack_70,param_1 + 0xd40);
  FUN_00fb4dd0(&local_e0,&local_c8);
  local_f8 = local_e0;
  uStack_f0 = uStack_d8;
  local_e8 = local_d0;
  FUN_00fba490(param_1 + 0xd88,&local_f8);
  FUN_00db239c(auStack_70);
  FUN_00db239c(auStack_b0);
  return;
}


