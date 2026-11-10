/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bc1dc; name: FUN_027bc1dc
 */


void FUN_027bc1dc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  undefined4 local_24;
  
  *param_1 = &PTR_FUN_045e1740;
  param_1[4] = &PTR_LAB_045e1770;
  FUN_027bc370();
  lVar4 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar4 != 0) {
    FUN_027bc130(param_1 + 0xe);
  }
  if (param_1[8] != 0) {
    if (param_1[0xc] == 0) {
      param_1[8] = 0;
    }
    else {
      *(undefined1 *)(param_1[0xc] + 0x19) = 1;
      param_1[0xc] = 0;
      local_24 = 0;
      FUN_027bc454(DAT_0485f048,&local_24);
      lVar4 = param_1[8];
      param_1[8] = 0;
      if (lVar4 == 0) goto LAB_027bc260;
    }
    FUN_027bc084(param_1 + 9);
  }
LAB_027bc260:
  plVar6 = (long *)param_1[0x3f];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(char *)(param_1 + 0x3a) != '\0') {
    *(undefined1 *)(param_1 + 0x3a) = 0;
  }
  pcVar5 = (code *)param_1[0x2b];
  if (pcVar5 != (code *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    (*pcVar5)(param_1 + 0x2e);
  }
  pcVar5 = (code *)param_1[0x1b];
  if (pcVar5 != (code *)0x0) {
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    (*pcVar5)(param_1 + 0x1e);
  }
  FUN_027bc508(param_1 + 0x13);
  plVar6 = (long *)param_1[0x12];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar4 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar4 != 0) {
    FUN_027bc130(param_1 + 0xe);
  }
  lVar4 = param_1[8];
  param_1[8] = 0;
  if (lVar4 == 0) {
    return;
  }
  FUN_027bc084(param_1 + 9);
  return;
}


