/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d6c44; name: FUN_015d6c44
 */


void FUN_015d6c44(undefined8 param_1,long param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *__s;
  char acStack_b0 [128];
  undefined8 local_18;
  
  __s = acStack_b0 + (0x80 - (*(long *)(param_2 + 0x10) + 0x25U & 0xfffffffffffffff0));
  local_18 = __s;
  *__s = '\0';
  sVar2 = strlen(__s);
  pcVar1 = __s + sVar2;
  *(undefined8 *)pcVar1 = s_SYSTEM_CONTEXT_PANEL__03c3cb8c._0_8_;
  *(ulong *)(pcVar1 + 8) =
       CONCAT26(s_SYSTEM_CONTEXT_PANEL__03c3cb8c._14_2_,s_SYSTEM_CONTEXT_PANEL__03c3cb8c._8_6_);
  *(ulong *)(pcVar1 + 0xe) =
       CONCAT62(s_SYSTEM_CONTEXT_PANEL__03c3cb8c._16_6_,s_SYSTEM_CONTEXT_PANEL__03c3cb8c._14_2_);
  strcat(__s,*(char **)(param_2 + 8));
  FUN_00cf9768(param_1,&local_18);
  return;
}


