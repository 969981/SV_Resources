/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017bc840; name: FUN_017bc840
 */


void FUN_017bc840(char *param_1,undefined8 *param_2,char *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  size_t sVar2;
  char *pcVar3;
  
  *param_1 = '\0';
  sVar2 = strlen(param_1);
  uVar1 = CONCAT62(s_______demo_pc_03c049b1._8_6_,s_______demo_pc_03c049b1._6_2_);
  *(ulong *)(param_1 + sVar2) =
       CONCAT26(s_______demo_pc_03c049b1._6_2_,s_______demo_pc_03c049b1._0_6_);
  *(undefined8 *)(param_1 + sVar2 + 6) = uVar1;
  pcVar3 = strcat(param_1,(char *)*param_2);
  sVar2 = strlen(pcVar3);
  (param_1 + sVar2)[0] = '/';
  (param_1 + sVar2)[1] = '\0';
  pcVar3 = strcat(param_1,param_3);
  sVar2 = strlen(pcVar3);
  (param_1 + sVar2)[0] = '_';
  (param_1 + sVar2)[1] = '\0';
  pcVar3 = strcat(param_1,(char *)*param_4);
  strcat(pcVar3,(char *)*param_5);
  return;
}


