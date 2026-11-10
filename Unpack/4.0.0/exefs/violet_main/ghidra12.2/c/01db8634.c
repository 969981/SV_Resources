/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


