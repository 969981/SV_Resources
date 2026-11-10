/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297ec30; name: FUN_0297ec30
 */


void FUN_0297ec30(undefined8 param_1,undefined4 param_2,uint param_3)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_02943244(&local_58,2,0x48);
  FUN_0294325c(&local_58,param_2);
  FUN_0294e2a0(&local_58);
  FUN_0297ebcc(param_1,param_2,param_3 & 1,&local_58);
  return;
}


