/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


