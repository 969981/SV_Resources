/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01258f38; name: FUN_01258f38
 */


void FUN_01258f38(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  char *__s;
  char acStack_50 [4];
  char acStack_4c [4];
  char *local_48;
  
  pcVar5 = (char *)*param_2;
  sVar2 = strlen(pcVar5);
  sVar3 = strlen((char *)*param_3);
  sVar4 = strlen((char *)*param_4);
  lVar1 = -(sVar2 + sVar3 + sVar4 + 0x17 & 0xfffffffffffffff0);
  __s = acStack_50 + lVar1;
  local_48 = __s;
  *__s = '\0';
  sVar2 = strlen(__s);
  builtin_strncpy(acStack_50 + sVar2 + lVar1,"ter_",5);
  sVar2 = strlen(__s);
  (__s + sVar2)[0] = '0';
  (__s + sVar2)[1] = '\0';
  pcVar5 = strcat(__s,pcVar5);
  sVar2 = strlen(pcVar5);
  (__s + sVar2)[0] = '_';
  (__s + sVar2)[1] = '\0';
  sVar2 = strlen(__s);
  (__s + sVar2)[0] = '0';
  (__s + sVar2)[1] = '\0';
  pcVar5 = strcat(__s,(char *)*param_3);
  strcat(pcVar5,(char *)*param_4);
  FUN_00cf9768(param_1,&local_48);
  return;
}


