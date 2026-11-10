/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00283940; name: FUN_00283940
 */


void FUN_00283940(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *param_1 = (long)&PTR_LAB_0448d118;
                    /* try { // try from 0028395c to 0028396f has its CatchHandler @ 002839f8 */
  FUN_00343d90(param_1[6]);
  FUN_00358200(param_1[7]);
  free((void *)param_1[5]);
  puVar4 = PTR_DAT_047cc5b0;
  puVar7 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    FUN_0049e790(PTR_LAB_047cba48,puVar7);
  }
  plVar6 = (long *)param_1[3];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


