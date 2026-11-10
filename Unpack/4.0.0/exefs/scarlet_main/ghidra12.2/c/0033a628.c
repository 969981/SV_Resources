/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033a628; name: FUN_0033a628
 */


void FUN_0033a628(long param_1,long param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  char **ppcVar1;
  char **ppcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  char **ppcVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  char **local_78;
  char *local_70;
  long local_68;
  undefined1 auStack_60 [8];
  char **local_58;
  
  pcVar10 = (char *)*param_4;
  plVar12 = (long *)(param_1 + 8);
  plVar13 = (long *)*plVar12;
  local_68 = param_2;
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar12;
    do {
      iVar5 = strcmp((char *)plVar13[4],pcVar10);
      if (iVar5 >= 0) {
        plVar11 = plVar13;
      }
      plVar13 = (long *)plVar13[iVar5 < 0];
    } while (plVar13 != (long *)0x0);
    if ((plVar11 != plVar12) && (iVar5 = strcmp(pcVar10,(char *)plVar11[4]), -1 < iVar5)) {
      lVar6 = plVar11[5];
      goto LAB_0033a704;
    }
  }
  local_70 = pcVar10;
  lVar6 = FUN_0033d408(&local_68,param_4,param_2 + 0x94);
  local_58 = &local_70;
                    /* try { // try from 0033a6c4 to 0033a6df has its CatchHandler @ 0033a83c */
  lVar7 = FUN_0033d898(param_1,&local_70,&DAT_03cd74f8,&local_58,auStack_60);
  puVar8 = *(undefined8 **)(lVar7 + 0x28);
  *(long *)(lVar7 + 0x28) = lVar6;
  if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 0033a6f8 to 0033a6fb has its CatchHandler @ 0033a838 */
    (**(code **)*puVar8)();
  }
LAB_0033a704:
  local_78 = (char **)*param_5;
  *param_5 = 0;
  ppcVar9 = local_78;
  if (*(int *)(lVar6 + 0x38) != param_3) {
                    /* try { // try from 0033a724 to 0033a72b has its CatchHandler @ 0033a7f0 */
    FUN_0033ca08(&local_78,lVar6 + 0x20);
    ppcVar9 = local_78;
  }
  local_78 = (char **)0x0;
  local_58 = ppcVar9;
  FUN_0033a4f8(lVar6 + 0x40,&local_58);
  ppcVar2 = local_58;
  ppcVar9 = local_78;
  if (local_58 != (char **)0x0) {
    ppcVar1 = local_58 + 1;
    do {
      pcVar10 = *ppcVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppcVar1,0x10);
      if (bVar4) {
        *ppcVar1 = pcVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pcVar10 + -1 == (char *)0x0) {
      (**(code **)*local_58)(local_58);
      FUN_0049e790(PTR_LAB_047cba48,ppcVar2);
      ppcVar9 = local_78;
    }
  }
  if (ppcVar9 != (char **)0x0) {
    ppcVar2 = ppcVar9 + 1;
    do {
      pcVar10 = *ppcVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppcVar2,0x10);
      if (bVar4) {
        *ppcVar2 = pcVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pcVar10 + -1 == (char *)0x0) {
      local_78 = ppcVar9;
      (**(code **)*ppcVar9)(ppcVar9);
      FUN_0049e790(PTR_LAB_047cba48,ppcVar9);
    }
  }
  return;
}


