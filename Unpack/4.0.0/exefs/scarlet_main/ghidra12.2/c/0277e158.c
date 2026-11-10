/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277e158; name: FUN_0277e158
 */


long * FUN_0277e158(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  plVar1 = (long *)(param_1 + 0x110);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x118);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x118) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0277e194:
  while ((lVar8 != 0 && (lVar5 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x120));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x118);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x118) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar8 || *(long *)(param_1 + 0x118) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_0277e1c4;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x114) = lVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
LAB_0277e1c4:
  if (!bVar7) {
    lVar8 = lVar2;
    lVar9 = *(long *)(param_1 + 0x118);
    goto LAB_0277e194;
  }
  if (*(long *)(param_1 + 0xd8) != *(long *)(param_1 + 0xd0)) {
    uVar10 = 0;
    do {
      plVar6 = (long *)FUN_00dafa58(param_1,param_2,uVar10 & 0xffffffff);
      if (*plVar6 != 0) goto LAB_0277e24c;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)((*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 3) *
                             0x6db6db6db6db6db7));
  }
  if (((DAT_0485dc48 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0485dc48), iVar4 != 0)) {
    plVar6 = (long *)&DAT_0485dc40;
    FUN_00100190(&LAB_02bd86a8,&DAT_0485dc40,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0485dc48);
  }
  else {
    plVar6 = (long *)&DAT_0485dc40;
  }
LAB_0277e24c:
  do {
    lVar5 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x118);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x118) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x118);
    if (lVar9 != lVar5 || lVar2 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_0277e288;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x114) = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
LAB_0277e288:
  if (!bVar7) {
    do {
      lVar5 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x118);
      if (lVar5 != lVar9 || lVar8 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x0277e2f8;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x114) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
joined_r0x0277e2f8:
    if (!bVar7) {
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x118);
        if (lVar9 != lVar5 || lVar2 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar8 = lVar2;
          goto joined_r0x0277e2f8;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x114) = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
      lVar5 = lVar9;
      lVar8 = lVar2;
      goto joined_r0x0277e2f8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x120));
  return plVar6;
}


