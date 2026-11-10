/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a5242c; name: FUN_00a5242c
 */


void FUN_00a5242c(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  char *__s;
  size_t sVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char acStack_30 [8];
  undefined8 local_28;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar4 = 0x19;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x40) + 0x19;
  }
  pcVar5 = acStack_30 + -(lVar4 + 0xfU & 0xfffffffffffffff0);
  local_28 = pcVar5;
  *pcVar5 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 0x38);
  }
  __s = strcat(pcVar5,(char *)*puVar1);
  sVar2 = strlen(__s);
  pcVar5 = pcVar5 + sVar2;
  pcVar5[0x18] = '\0';
  *(undefined8 *)pcVar5 = s__monsname_sort_table_dat_03ca622b._0_8_;
  *(undefined8 *)(pcVar5 + 8) = s__monsname_sort_table_dat_03ca622b._8_8_;
  *(undefined8 *)(pcVar5 + 0x10) = s__monsname_sort_table_dat_03ca622b._16_8_;
  FUN_00cf9768(param_1,&local_28);
  return;
}


