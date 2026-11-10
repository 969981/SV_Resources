/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015701b0; name: FUN_015701b0
 */


void FUN_015701b0(undefined8 param_1,undefined8 *param_2)

{
  undefined *__src;
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack_40 [8];
  char *local_38;
  
  __src = PTR_s_data___047d8b68;
  sVar1 = strlen(PTR_s_data___047d8b68);
  sVar2 = strlen((char *)*param_2);
  pcVar3 = acStack_40 + -(sVar1 + sVar2 + 0x22 & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,__src);
  FUN_01570238(pcVar3,param_2);
  FUN_00cf9768(param_1,&local_38);
  return;
}


