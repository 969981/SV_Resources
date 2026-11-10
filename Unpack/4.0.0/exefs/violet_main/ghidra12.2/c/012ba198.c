/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ba198; name: FUN_012ba198
 */


void FUN_012ba198(char *param_1,long *param_2,char *param_3)

{
  undefined8 *puVar1;
  char *__dest;
  
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x38);
  }
  __dest = strcat(param_1,(char *)*puVar1);
  strcat(__dest,param_3);
  return;
}


