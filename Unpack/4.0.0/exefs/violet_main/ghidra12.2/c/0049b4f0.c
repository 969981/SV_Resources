/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049b4f0; name: FUN_0049b4f0
 */


int FUN_0049b4f0(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,(long)(int)sVar2);
  if (((iVar1 == 0) && (param_1[(int)sVar2] != '\0')) && (param_1[(int)sVar2] != '.')) {
    return 1;
  }
  return iVar1;
}


