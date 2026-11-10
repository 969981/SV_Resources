/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017bcfb0; name: FUN_017bcfb0
 */


void FUN_017bcfb0(char *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *__s;
  size_t sVar2;
  
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x38);
  }
  __s = strcat(param_1,(char *)*puVar1);
  sVar2 = strlen(__s);
  (param_1 + sVar2)[0] = '/';
  (param_1 + sVar2)[1] = '\0';
  FUN_017bd180(param_1,param_3);
  return;
}


