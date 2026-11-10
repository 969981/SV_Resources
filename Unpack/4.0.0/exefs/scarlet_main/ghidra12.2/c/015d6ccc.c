/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d6ccc; name: FUN_015d6ccc
 */


void FUN_015d6ccc(undefined8 param_1,long param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *__s;
  char acStack_b0 [128];
  undefined8 local_18;
  
  __s = acStack_b0 + (0x80 - (*(long *)(param_2 + 0x10) + 0x28U & 0xfffffffffffffff0));
  local_18 = __s;
  *__s = '\0';
  sVar2 = strlen(__s);
  pcVar1 = __s + sVar2;
  *(undefined8 *)pcVar1 = s_SYSTEM_CONTEXT_SHORTCUT__03c71df1._0_8_;
  *(undefined8 *)(pcVar1 + 8) = s_SYSTEM_CONTEXT_SHORTCUT__03c71df1._8_8_;
  *(undefined8 *)(pcVar1 + 0x10) = s_SYSTEM_CONTEXT_SHORTCUT__03c71df1._16_8_;
  pcVar1[0x18] = '\0';
  strcat(__s,*(char **)(param_2 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


