/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275bc1c; name: FUN_0275bc1c
 */


void FUN_0275bc1c(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  void *__dest;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  FUN_00df0ef4();
  plVar1 = (long *)(param_1 + 0x2e0);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x2e8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x2e8) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0275bc50:
  while ((lVar8 != 0 && (lVar5 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f0));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x2e8);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x2e8) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar8 || *(long *)(param_1 + 0x2e8) != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_0275bc80;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x2e4) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_0275bc80:
  if (!bVar6) {
    lVar8 = lVar2;
    lVar9 = *(long *)(param_1 + 0x2e8);
    goto LAB_0275bc50;
  }
  uVar10 = *(ulong *)(param_1 + 0x168);
  uVar7 = (uint)(uVar10 >> 0x20);
  if ((uVar7 < (uint)((ulong)(*(long *)(DAT_0485a0e0 + 0xe0) - *(long *)(DAT_0485a0e0 + 0xd8)) >> 2)
      ) && (uVar3 = *(uint *)(*(long *)(DAT_0485a0e0 + 0xd8) + (uVar10 >> 0x20) * 4),
           -1 < (int)uVar3)) {
    __dest = *(void **)(*(long *)(DAT_0485a0e0 + 0x38) + (ulong)uVar3 * 0x20);
    if (((uVar10 & 0xff) == 0) || (*(char *)((long)__dest + 0xd0) == '\0')) {
      if (*(char *)((long)__dest + 0xd0) != '\0' || (uVar10 & 0xff) != 0) goto LAB_0275bcc0;
    }
    else if (*(uint *)((long)__dest + 0xd4) != uVar7) goto LAB_0275bcc0;
    memcpy(__dest,(void *)(param_1 + 0x170),0xd0);
  }
LAB_0275bcc0:
  do {
    lVar5 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x2e8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x2e8) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x2e8);
    if (lVar9 != lVar5 || lVar2 != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_0275bcfc;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x2e4) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_0275bcfc:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x2e8);
      if (lVar5 != lVar9 || lVar8 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x0275bd5c;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x2e4) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x0275bd5c:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x2e8);
        if (lVar9 != lVar5 || lVar2 != lVar8) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar8 = lVar2;
          goto joined_r0x0275bd5c;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x2e4) = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar9;
      lVar8 = lVar2;
      goto joined_r0x0275bd5c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f0));
  return;
}


