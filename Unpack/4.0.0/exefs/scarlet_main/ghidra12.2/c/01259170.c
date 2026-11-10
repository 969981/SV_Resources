/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01259170; name: FUN_01259170
 */


void FUN_01259170(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *__s;
  char *__s_00;
  char acStack_b0 [128];
  char *local_18;
  
  __s = (char *)*param_2;
  sVar2 = strlen(__s);
  __s_00 = acStack_b0 + (0x80 - (sVar2 + 0x1a & 0xfffffffffffffff0));
  local_18 = __s_00;
  *__s_00 = '\0';
  sVar2 = strlen(__s_00);
  pcVar1 = __s_00 + sVar2;
  *(undefined8 *)pcVar1 = s_plan_area0_03c5e03f._0_8_;
  pcVar1[7] = 'e';
  pcVar1[8] = 'a';
  pcVar1[9] = '0';
  pcVar1[10] = '\0';
  strcat(__s_00,__s);
  FUN_00cf9768(param_1,&local_18);
  return;
}


