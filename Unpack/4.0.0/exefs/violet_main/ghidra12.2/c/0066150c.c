/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0066150c; name: FUN_0066150c
 */


undefined8 FUN_0066150c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  *(undefined2 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x145) = 0;
  *(long *)(param_1 + 0x160) = param_1 + 0x100;
  *(long *)(param_1 + 0x168) = param_1;
  if (*(char *)(param_1 + 9) != '\0') {
    *(undefined1 *)(param_1 + 0x140) = 1;
    *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x18);
  }
  if ((*(long *)(param_1 + 0x30) == 0) && (*(long *)(param_1 + 0x40) == 0)) goto LAB_00661630;
  *(undefined1 *)(param_1 + 0x141) = 1;
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 400) = param_1 + 0x39;
  *(long **)(param_1 + 0x198) = (long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x188) = param_1 + 0x40;
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a0) = uVar5;
  *(long **)(param_1 + 0x1a8) = plVar2;
  if (plVar7 == (long *)0x0) {
LAB_006615d4:
    *(undefined8 *)(param_1 + 0x1b0) = uVar8;
  }
  else {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_006615d4;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    *(undefined8 *)(param_1 + 0x1b0) = uVar8;
  }
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2 + 1;
    do {
      lVar6 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_00661630:
  if (*(char *)(param_1 + 0x69) != '\0') {
    *(undefined1 *)(param_1 + 0x144) = 1;
  }
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x88);
    *(long *)(param_1 + 0x1e8) = param_1 + 0x9a;
  }
  auVar9 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0xb0),*(undefined1 (*) [16])(param_1 + 0xb0),8,
                    1);
  *(long *)(param_1 + 0x200) = auVar9._8_8_;
  *(long *)(param_1 + 0x1f8) = auVar9._0_8_;
  lVar6 = *(long *)(*(long *)(param_1 + 0x160) + 0x20);
  if (lVar6 == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x160) + 0x28);
    if (lVar6 == 0) {
      return 1;
    }
    if (*(long *)(lVar6 + 0x28) == *(long *)(lVar6 + 0x20)) {
      return 1;
    }
  }
  else if (*(long *)(lVar6 + 0x28) == *(long *)(lVar6 + 0x20)) {
    return 1;
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x108) + 0x18);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar5 = FUN_00224e5c(param_1 + 0x138);
  return uVar5;
}


