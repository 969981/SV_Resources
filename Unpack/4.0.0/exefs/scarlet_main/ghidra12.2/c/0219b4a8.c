/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0219b4a8; name: FUN_0219b4a8
 */


void FUN_0219b4a8(char *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  char *pcVar3;
  
  sVar2 = strlen(param_1);
  uVar1 = CONCAT53(s_world_scene__03bf06b4._8_5_,s_world_scene__03bf06b4._5_3_);
  *(ulong *)(param_1 + sVar2) =
       CONCAT35(s_world_scene__03bf06b4._5_3_,s_world_scene__03bf06b4._0_5_);
  *(undefined8 *)(param_1 + sVar2 + 5) = uVar1;
  pcVar3 = strcat(param_1,(char *)*param_2);
  FUN_0219b550(pcVar3,param_3);
  return;
}


