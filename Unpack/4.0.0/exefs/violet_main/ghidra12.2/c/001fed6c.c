/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fed6c; name: FUN_001fed6c
 */


void FUN_001fed6c(long *param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar6 = *param_2;
  *param_1 = lVar6;
  lVar7 = param_2[1];
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *param_1;
  }
  plVar8 = *(long **)(lVar6 + 0x238);
  plVar4 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x80,8);
  plVar4[2] = 0;
  plVar9 = plVar4 + 1;
  *plVar9 = 0;
  puVar1 = PTR_DAT_047cbb10;
  plVar4[3] = (long)plVar8;
  plVar8 = plVar4 + 4;
  *plVar4 = (long)(puVar1 + 0x10);
  FUN_006c4254(plVar8);
  plVar4[4] = (long)(PTR_DAT_047cbb18 + 0x10);
  nn::os::InitializeEvent(plVar4 + 6,0,0);
  plVar4[4] = (long)(PTR_DAT_047cbb20 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0xb),false,0);
  *(undefined1 *)((long)plVar4 + 0x79) = 0;
  param_1[2] = (long)plVar8;
  param_1[3] = (long)plVar4;
  if (plVar4 == (long *)0x0) {
    lVar7 = 0;
    lVar6 = 0x20;
  }
  else {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = param_1[2];
    lVar7 = param_1[3];
  }
  param_1[6] = (long)plVar8;
  param_1[7] = (long)plVar4;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar4 = *(long **)(*param_1 + 0x238);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  plVar9 = *(long **)(*param_1 + 0x238);
  lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,0x30,0x10);
  *(undefined8 *)(lVar5 + 0x20) = 0;
  plVar8 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x30,8);
  puVar1 = PTR_DAT_047cbb28 + 0x10;
  plVar8[2] = lVar6;
  plVar8[3] = lVar7;
  plVar8[4] = 0;
  plVar8[5] = 0;
  *plVar8 = (long)puVar1;
  plVar8[1] = (long)plVar4;
  *(long **)(lVar5 + 0x20) = plVar8;
  param_1[8] = lVar5;
  param_1[9] = (long)plVar9;
  return;
}


