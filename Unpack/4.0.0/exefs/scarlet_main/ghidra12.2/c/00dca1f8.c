/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dca1f8; name: FUN_00dca1f8
 */


void FUN_00dca1f8(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  char *__s;
  size_t sVar2;
  long lVar3;
  long lVar4;
  char *__dest;
  char acStack_b0 [128];
  char *local_18;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar4 = 2;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x40) + 2;
  }
  __dest = acStack_b0 + (0x80 - (*(long *)(param_3 + 0x10) + lVar4 + 0xfU & 0xfffffffffffffff0));
  local_18 = __dest;
  *__dest = '\0';
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 0x38);
  }
  __s = strcat(__dest,(char *)*puVar1);
  sVar2 = strlen(__s);
  (__dest + sVar2)[0] = '.';
  (__dest + sVar2)[1] = '\0';
  strcat(__dest,*(char **)(param_3 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


