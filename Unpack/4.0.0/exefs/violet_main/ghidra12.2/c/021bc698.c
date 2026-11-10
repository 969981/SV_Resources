/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021bc698; name: FUN_021bc698
 */


void FUN_021bc698(char *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,char *param_5)

{
  char *pcVar1;
  
  pcVar1 = strcat(param_1,param_3);
  pcVar1 = strcat(pcVar1,(char *)*param_4);
  strcat(pcVar1,param_5);
  return;
}


