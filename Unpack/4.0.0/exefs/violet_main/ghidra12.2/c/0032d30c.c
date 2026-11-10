/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032d30c; name: FUN_0032d30c
 */


void FUN_0032d30c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  *param_1 = (long)(PTR_DAT_047ccc28 + 0x10);
                    /* try { // try from 0032d32c to 0032d32f has its CatchHandler @ 0032d3a8 */
  FUN_00358200(param_1[4]);
  puVar6 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_0049e790(PTR_LAB_047cba48,puVar6);
  }
  plVar5 = (long *)param_1[3];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


