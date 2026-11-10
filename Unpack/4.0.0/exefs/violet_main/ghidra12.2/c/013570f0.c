/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013570f0; name: FUN_013570f0
 */


void FUN_013570f0(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__s;
  long lVar3;
  char *__s_00;
  long lVar4;
  char acStack_40 [8];
  char *local_38;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar3 = 5;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x40) + 5;
  }
  lVar3 = -(*(long *)(param_3 + 0x10) + lVar3 + 0xfU & 0xfffffffffffffff0);
  __s_00 = acStack_40 + lVar3;
  local_38 = __s_00;
  *__s_00 = '\0';
  sVar2 = strlen(__s_00);
  builtin_strncpy(acStack_40 + sVar2 + lVar3,"../",4);
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x38);
  }
  __s = strcat(__s_00,(char *)*puVar1);
  sVar2 = strlen(__s);
  (__s_00 + sVar2)[0] = '/';
  (__s_00 + sVar2)[1] = '\0';
  strcat(__s_00,*(char **)(param_3 + 8));
  FUN_00cf9768(param_1,&local_38);
  return;
}


