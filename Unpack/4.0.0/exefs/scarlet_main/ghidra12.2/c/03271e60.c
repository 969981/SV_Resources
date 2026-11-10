/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03271e60; name: FUN_03271e60
 */


void FUN_03271e60(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_047e6198;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = (long)(puVar3 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar6;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 8) != 0)) {
    plVar4 = (long *)(lVar6 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3 = PTR_DAT_047e61b8;
  param_1[4] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  lVar6 = *(long *)(param_2 + 0x28);
  param_1[5] = lVar6;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 8) != 0)) {
    plVar4 = (long *)(lVar6 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  puVar3 = PTR_DAT_047d1a08;
  local_38 = 0x40;
  plVar4 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(plVar4,"NodeStorage");
  }
  FUN_03267fa8(plVar4,*(undefined8 *)(param_2 + 0x20));
  plVar5 = (long *)param_1[4];
  if (((plVar5 != plVar4) && (param_1[4] = (long)plVar4, plVar5 != (long *)0x0)) && (plVar5[1] != 0)
     ) {
    plVar4 = plVar5 + 2;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  return;
}


