/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011aef38; name: FUN_011aef38
 */


void FUN_011aef38(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  size_t sVar4;
  byte *__src;
  char *__s;
  char acStack_40 [8];
  char *local_38;
  
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  lVar3 = -(uVar1 + 0x17 & 0xfffffffffffffff0);
  __s = acStack_40 + lVar3;
  local_38 = __s;
  *__s = '\0';
  sVar4 = strlen(__s);
  builtin_strncpy(acStack_40 + sVar4 + lVar3,"Action_",8);
  __src = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    __src = param_2 + 1;
  }
  strcat(__s,(char *)__src);
  FUN_00cf9768(param_1,&local_38);
  return;
}


