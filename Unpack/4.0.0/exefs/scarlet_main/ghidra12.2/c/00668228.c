/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00668228; name: FUN_00668228
 */


undefined8 FUN_00668228(long param_1)

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
  
  *(undefined2 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x13d) = 0;
  *(long *)(param_1 + 0x158) = param_1 + 0xf8;
  *(long *)(param_1 + 0x160) = param_1;
  if (*(char *)(param_1 + 9) != '\0') {
    *(undefined1 *)(param_1 + 0x138) = 1;
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x18);
  }
  if ((*(long *)(param_1 + 0x30) == 0) && (*(long *)(param_1 + 0x40) == 0)) goto LAB_0066834c;
  *(undefined1 *)(param_1 + 0x139) = 1;
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
  *(long *)(param_1 + 0x188) = param_1 + 0x39;
  *(long **)(param_1 + 400) = (long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x180) = param_1 + 0x40;
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
  plVar7 = *(long **)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x198) = uVar5;
  *(long **)(param_1 + 0x1a0) = plVar2;
  if (plVar7 == (long *)0x0) {
LAB_006682f0:
    *(undefined8 *)(param_1 + 0x1a8) = uVar8;
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
    if (lVar6 != 0) goto LAB_006682f0;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    *(undefined8 *)(param_1 + 0x1a8) = uVar8;
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
LAB_0066834c:
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x70);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x1d8) = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x1e0) = param_1 + 0x92;
  }
  if (*(char *)(param_1 + 0x94) != '\0') {
    *(undefined1 *)(param_1 + 0x13c) = 1;
  }
  auVar9 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0xa8),*(undefined1 (*) [16])(param_1 + 0xa8),8,
                    1);
  *(long *)(param_1 + 0x1f8) = auVar9._8_8_;
  *(long *)(param_1 + 0x1f0) = auVar9._0_8_;
  lVar6 = *(long *)(*(long *)(param_1 + 0x158) + 0x20);
  if (lVar6 == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x158) + 0x28);
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
  plVar2 = (long *)(*(long *)(param_1 + 0x100) + 0x18);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar5 = FUN_00224e5c(param_1 + 0x130);
  return uVar5;
}


