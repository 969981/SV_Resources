/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fffc0; name: FUN_015fffc0
 */


void FUN_015fffc0(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *__s;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *__dest;
  char acStack_40 [8];
  char *local_38;
  
  puVar2 = (undefined8 *)PTR_PTR_047d4508;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar5 = 2;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x40) + 2;
  }
  lVar6 = 0;
  if (*param_3 != 0) {
    lVar6 = *(long *)(*param_3 + 0x40);
  }
  __dest = acStack_40 + -(lVar6 + lVar5 + 0xfU & 0xfffffffffffffff0);
  local_38 = __dest;
  *__dest = '\0';
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x38);
  }
  __s = strcat(__dest,(char *)*puVar1);
  sVar3 = strlen(__s);
  (__dest + sVar3)[0] = '/';
  (__dest + sVar3)[1] = '\0';
  if (*param_3 != 0) {
    puVar2 = (undefined8 *)(*param_3 + 0x38);
  }
  strcat(__dest,(char *)*puVar2);
  FUN_00cf9768(param_1,&local_38);
  return;
}


