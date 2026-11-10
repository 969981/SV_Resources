/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f9be64; name: FUN_00f9be64
 */


void FUN_00f9be64(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  char cStack_41;
  char *local_28;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar7 + 0x40);
  }
  pcVar8 = (char *)((long)register0x00000008 +
                   (-0x40 - (lVar9 + *(long *)(param_3 + 0x10) + 0x15U & 0xfffffffffffffff0)));
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar7 != 0) {
    puVar1 = (undefined8 *)(lVar7 + 0x38);
  }
  local_28 = pcVar8;
  strcpy(pcVar8,(char *)*puVar1);
  if (pcVar8[lVar9 + -1] == '/') {
    pcVar8[lVar9 + -1] = '\0';
  }
  else {
    pcVar3 = strrchr(pcVar8,0x2f);
    if (pcVar3 == (char *)0x0) {
      *pcVar8 = '\0';
    }
    else {
      *pcVar3 = '\0';
    }
  }
  pcVar8 = *(char **)(param_3 + 8);
  cVar2 = *pcVar8;
  pcVar3 = local_28;
  while( true ) {
    local_28 = pcVar3;
    if (cVar2 != '.') {
      sVar4 = strlen(pcVar3);
      (pcVar3 + sVar4)[0] = '/';
      (pcVar3 + sVar4)[1] = '\0';
      strcat(local_28,pcVar8);
      FUN_00f9cff8(param_1,&local_28,(int)param_2[5]);
      return;
    }
    cVar2 = pcVar8[1];
    if (cVar2 == '.') {
      pcVar3 = strrchr(pcVar3,0x2f);
      if (pcVar3 == (char *)0x0) break;
      *pcVar3 = '\0';
      cVar2 = pcVar8[2];
      lVar7 = 2;
    }
    else {
      lVar7 = 1;
    }
    if (cVar2 != '/') break;
    pcVar8 = pcVar8 + 1 + lVar7;
    cVar2 = *pcVar8;
    pcVar3 = local_28;
  }
  plVar5 = (long *)FUN_00da5204();
  plVar6 = (long *)*plVar5;
  *param_1 = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  param_1[1] = plVar5[1];
  param_1[2] = plVar5[2];
  param_1[3] = plVar5[3];
  plVar6 = (long *)plVar5[4];
  param_1[4] = (long)plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  *(int *)(param_1 + 5) = (int)plVar5[5];
  return;
}


