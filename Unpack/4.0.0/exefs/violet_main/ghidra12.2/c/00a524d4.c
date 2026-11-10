/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a524d4; name: FUN_00a524d4
 */


void FUN_00a524d4(undefined8 param_1,long *param_2)

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
    lVar4 = 0x1e;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x40) + 0x1e;
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
  *(ulong *)(pcVar5 + 0x16) =
       CONCAT62(s__monsname_initial_to_sort_dat_03c3b7aa._24_6_,
                s__monsname_initial_to_sort_dat_03c3b7aa._22_2_);
  *(undefined8 *)pcVar5 = s__monsname_initial_to_sort_dat_03c3b7aa._0_8_;
  *(undefined8 *)(pcVar5 + 8) = s__monsname_initial_to_sort_dat_03c3b7aa._8_8_;
  *(ulong *)(pcVar5 + 0x10) =
       CONCAT26(s__monsname_initial_to_sort_dat_03c3b7aa._22_2_,
                s__monsname_initial_to_sort_dat_03c3b7aa._16_6_);
  FUN_00cf9768(param_1,&local_28);
  return;
}


