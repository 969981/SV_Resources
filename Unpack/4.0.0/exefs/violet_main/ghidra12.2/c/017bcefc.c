/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017bcefc; name: FUN_017bcefc
 */


void FUN_017bcefc(undefined8 param_1,long *param_2,long *param_3)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  char *__s;
  char acStack_40 [8];
  char *local_38;
  
  if (*param_2 == 0) {
    lVar2 = 4;
  }
  else {
    lVar2 = *(long *)(*param_2 + 0x40) + 4;
  }
  if (*param_3 == 0) {
    lVar3 = 7;
  }
  else {
    lVar3 = *(long *)(*param_3 + 0x40) + 7;
  }
  lVar2 = -(lVar2 + lVar3 + 0xfU & 0xfffffffffffffff0);
  __s = acStack_40 + lVar2;
  local_38 = __s;
  *__s = '\0';
  sVar1 = strlen(__s);
  builtin_strncpy(acStack_40 + sVar1 + lVar2,"../",4);
  FUN_017bcfb0(__s,param_2,param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


