/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0135d6cc; name: FUN_0135d6cc
 */


void FUN_0135d6cc(undefined8 param_1,undefined8 *param_2)

{
  undefined *__src;
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *__dest;
  char acStack_40 [8];
  undefined8 local_38;
  
  __src = PTR_s_data___047d8b68;
  sVar1 = strlen(PTR_s_data___047d8b68);
  sVar2 = strlen((char *)*param_2);
  __dest = acStack_40 + -(sVar1 + sVar2 + 0x20 & 0xfffffffffffffff0);
  local_38 = __dest;
  *__dest = '\0';
  pcVar3 = strcat(__dest,__src);
  sVar1 = strlen(pcVar3);
  pcVar3 = __dest + sVar1;
  pcVar3[0x10] = '\0';
  *(undefined8 *)pcVar3 = s_message_dat_JPN__03c7db5d._0_8_;
  *(undefined8 *)(pcVar3 + 8) = s_message_dat_JPN__03c7db5d._8_8_;
  strcat(__dest,(char *)*param_2);
  FUN_00cf9768(param_1,&local_38);
  return;
}


