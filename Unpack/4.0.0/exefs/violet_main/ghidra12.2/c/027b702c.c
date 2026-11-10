/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b702c; name: FUN_027b702c
 */


void FUN_027b702c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  param_2 = (undefined8 *)*param_2;
  plVar6 = (long *)*param_2;
  plVar7 = *(long **)(*plVar6 + 0x238);
  plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x38,8);
  *plVar4 = (long)(PTR_DAT_047cf3b0 + 0x10);
  plVar4[1] = 0;
  puVar1 = PTR_DAT_047cf3b8;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar7;
  plVar4[4] = (long)(puVar1 + 0x10);
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar8 = *(long **)(*plVar6 + 0x238);
  plVar7 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
  puVar1 = PTR_DAT_047cf3c0 + 0x10;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar8;
  *plVar7 = (long)puVar1;
  plVar7[1] = 0;
  FUN_00674de0(plVar7 + 4,param_2 + 2,plVar6);
  plVar6 = (long *)plVar4[6];
  plVar4[5] = (long)(plVar7 + 4);
  plVar4[6] = (long)plVar7;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar4[4] = (long)(PTR_DAT_047cf3c8 + 0x10);
  *param_1 = plVar4 + 4;
  param_1[1] = plVar4;
  return;
}


