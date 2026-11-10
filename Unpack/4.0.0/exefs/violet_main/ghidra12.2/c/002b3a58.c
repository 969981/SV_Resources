/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b3a58; name: FUN_002b3a58
 */


void FUN_002b3a58(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *local_28;
  
  puVar6 = (undefined8 *)FUN_003443a0(param_1[3] + 0x78);
  if ((undefined *)*puVar6 != PTR_PTR_047cc608) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = param_1 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar7 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (plVar7 == (long *)0x0) {
    param_1[5] = 0;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
    }
  }
  else {
    lVar8 = *(long *)(param_1[2] + 0x18);
    lVar2 = *(long *)(param_1[2] + 0x20);
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar5 = PTR_DAT_047cc788;
    plVar7[2] = lVar8;
    plVar7[3] = lVar2;
    plVar7[4] = (long)param_1;
    *plVar7 = (long)(puVar5 + 0x10);
    plVar7[1] = 1;
    param_1[5] = (long)plVar7;
  }
  local_28 = (undefined8 *)param_1[5];
                    /* try { // try from 002b3b20 to 002b3b2f has its CatchHandler @ 002b3b8c */
  FUN_00321870(puVar6,0,&local_28);
  puVar6 = local_28;
  local_28 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 002b3b44 to 002b3b47 has its CatchHandler @ 002b3b88 */
    (**(code **)*puVar6)();
  }
  return;
}


