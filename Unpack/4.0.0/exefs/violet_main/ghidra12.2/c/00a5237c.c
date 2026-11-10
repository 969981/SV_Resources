/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a5237c; name: FUN_00a5237c
 */


void FUN_00a5237c(undefined8 param_1,long *param_2)

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
    lVar4 = 0x1c;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x40) + 0x1c;
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
  *(undefined8 *)(pcVar5 + 0x10) = s__monsname_initial_index_dat_03c98769._16_8_;
  pcVar5[0x18] = 'd';
  pcVar5[0x19] = 'a';
  pcVar5[0x1a] = 't';
  pcVar5[0x1b] = '\0';
  *(undefined8 *)pcVar5 = s__monsname_initial_index_dat_03c98769._0_8_;
  *(undefined8 *)(pcVar5 + 8) = s__monsname_initial_index_dat_03c98769._8_8_;
  FUN_00cf9768(param_1,&local_28);
  return;
}


