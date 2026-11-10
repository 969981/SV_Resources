/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029acfb0; name: FUN_029acfb0
 */


int FUN_029acfb0(char *param_1,int param_2,ulong param_3)

{
  char *__format;
  int iVar1;
  
  __format = "%u.bnk";
  if (param_2 != 0) {
    __format = "%u.wem";
  }
  iVar1 = snprintf(param_1,0xf,__format,param_3 & 0xffffffff);
  return iVar1;
}


