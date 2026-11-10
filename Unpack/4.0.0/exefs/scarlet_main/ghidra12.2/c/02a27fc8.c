/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a27fc8; name: FUN_02a27fc8
 */


void FUN_02a27fc8(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *__s;
  char *__dest;
  char acStack_b0 [128];
  char *local_18;
  
  sVar1 = strlen(param_2);
  __dest = acStack_b0 + (0x80 - (sVar1 + 0x18 & 0xfffffffffffffff0));
  local_18 = __dest;
  *__dest = '\0';
  __s = strcat(__dest,param_2);
  sVar1 = strlen(__s);
  *(undefined8 *)(__dest + sVar1) = s_lotvalue_03bdbe0b._0_8_;
  (__dest + sVar1)[8] = '\0';
  FUN_00cf9768(param_1,&local_18);
  return;
}


