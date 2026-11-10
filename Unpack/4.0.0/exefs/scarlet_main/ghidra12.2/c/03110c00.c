/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03110c00; name: FUN_03110c00
 */


short FUN_03110c00(long param_1,long param_2,short param_3)

{
  short *psVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  short sVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_047d1a08;
  local_48 = 0x30;
  plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar7,"FireEventsTask");
  }
  plVar10 = plVar7 + 2;
  *plVar10 = 1;
  *plVar7 = (long)&PTR_LAB_0464e8e0;
  plVar7[1] = 0xffffffff;
  plVar7[4] = (long)&PTR_LAB_0464e920;
  plVar7[5] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar2 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  sVar6 = FUN_0323f360(param_1,plVar7,0x40);
  if ((param_3 != -1) && (sVar6 != -1)) {
    iVar8 = *(int *)(param_1 + 0x330);
    lVar9 = (long)iVar8;
    if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar8) {
      FUN_02e7f7cc(param_1 + 0x328,PTR_PTR_047d1a50,lVar9 + 1);
      iVar8 = *(int *)(param_1 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_1 + 0x328) + (long)iVar8 * 4);
    *(int *)(param_1 + 0x330) = (int)(lVar9 + 1);
    *psVar1 = param_3;
    psVar1[1] = sVar6;
  }
  if (plVar7[1] != 0) {
    do {
      lVar9 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  return sVar6;
}


