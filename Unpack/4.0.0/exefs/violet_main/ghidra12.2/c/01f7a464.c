/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7a464; name: FUN_01f7a464
 */


void FUN_01f7a464(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_0455cde8;
  param_1[4] = &PTR_LAB_0455ce70;
  param_1[5] = &DAT_0455cec0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_01cfa274(param_1 + 0xd);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  plVar5 = (long *)param_1[0xb];
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
    }
  }
  FUN_01f7a4e8(param_1);
  return;
}


