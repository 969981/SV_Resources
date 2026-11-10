/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01db8634; name: FUN_01db8634
 */


void FUN_01db8634(char *param_1,char *param_2,undefined8 *param_3,char *param_4)

{
  char *pcVar1;
  
  pcVar1 = strcat(param_1,param_2);
  pcVar1 = strcat(pcVar1,(char *)*param_3);
  strcat(pcVar1,param_4);
  return;
}


