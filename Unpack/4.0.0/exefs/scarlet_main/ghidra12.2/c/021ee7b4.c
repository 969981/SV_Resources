/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ee7b4; name: FUN_021ee7b4
 */


void FUN_021ee7b4(char *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,char *param_5)

{
  char *pcVar1;
  
  pcVar1 = strcat(param_1,param_3);
  pcVar1 = strcat(pcVar1,(char *)*param_4);
  strcat(pcVar1,param_5);
  return;
}


