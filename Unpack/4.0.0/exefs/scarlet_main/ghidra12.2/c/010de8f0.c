/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010de8f0; name: FUN_010de8f0
 */


void FUN_010de8f0(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__s;
  long lVar3;
  char *__s_00;
  long lVar4;
  char acStack_b0 [128];
  char *local_18;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar3 = 5;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x40) + 5;
  }
  lVar3 = 0x80 - (lVar3 + 0xfU & 0xfffffffffffffff0);
  __s_00 = acStack_b0 + lVar3;
  local_18 = __s_00;
  *__s_00 = '\0';
  sVar2 = strlen(__s_00);
  builtin_strncpy(acStack_b0 + sVar2 + lVar3,"../",4);
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x38);
  }
  __s = strcat(__s_00,(char *)*puVar1);
  sVar2 = strlen(__s);
  (__s_00 + sVar2)[0] = '/';
  (__s_00 + sVar2)[1] = '\0';
  FUN_00cf9768(param_1,&local_18);
  return;
}


