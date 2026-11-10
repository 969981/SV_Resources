/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c64c10; name: FUN_00c64c10
 */


void FUN_00c64c10(long *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  
  lVar4 = *param_1;
  lVar15 = *(long *)param_1[1];
  puVar1 = (uint *)(lVar15 + 0x140);
  do {
    uVar3 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar16 = (uint)((ulong)(*(long *)(lVar15 + 0x60) - *(long *)(lVar15 + 0x58)) >> 3);
  while( true ) {
    if (uVar16 <= uVar3) {
      puVar1 = (uint *)(lVar15 + 0x144);
      do {
        uVar3 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      while (uVar3 < uVar16) {
        FUN_00c64dd0(*(undefined8 *)(*(long *)(lVar15 + 0x58) + (ulong)uVar3 * 8));
        do {
          uVar3 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      puVar1 = (uint *)(lVar15 + 0x148);
      do {
        uVar3 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      while (uVar3 < uVar16) {
        FUN_00c64f10(*(undefined8 *)(*(long *)(lVar15 + 0x58) + (ulong)uVar3 * 8));
        do {
          uVar3 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      nn::os::LockMutex((MutexType *)(lVar4 + 0x100));
      piVar2 = (int *)(lVar4 + 0x120);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0xf0));
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x100));
      return;
    }
    lVar7 = *(long *)(*(long *)(lVar15 + 0x58) + (ulong)uVar3 * 8);
    lVar14 = *(long *)(lVar7 + 0xa0);
    uVar8 = *(long *)(lVar7 + 0xa8) - lVar14 >> 2;
    uVar10 = uVar8 >> 1;
    if (0x7f < uVar8 && uVar10 != 0) break;
LAB_00c64c78:
    do {
      uVar3 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar9 = 0;
  lVar11 = 8;
  do {
    lVar14 = **(long **)(*(long *)(lVar7 + 0x60) + (ulong)*(uint *)(lVar14 + lVar9 * 4) * 8);
    uVar8 = (ulong)*(uint *)(lVar14 + 0x240);
    lVar14 = *(long *)(lVar14 + 0x208);
    if (*(char *)(lVar14 + uVar8 * 0x18) == '\0') {
      pcVar13 = (char *)(*(long *)(lVar7 + 0x1a0) + (ulong)*(uint *)(lVar7 + 0x1d8) * 0x18);
      lVar14 = *(long *)(pcVar13 + 8);
      if (*pcVar13 != '\0' && lVar14 != 0) goto LAB_00c64cd0;
      uVar12 = 0;
    }
    else {
      lVar14 = *(long *)(lVar14 + uVar8 * 0x18 + 8);
      uVar12 = 0;
      if (lVar14 != 0) {
LAB_00c64cd0:
        uVar12 = *(undefined8 *)(lVar14 + 0xa0);
      }
    }
    *(undefined8 *)(*(long *)(lVar7 + 0xd8) + lVar11) = uVar12;
    if (uVar10 - 1 == lVar9) goto LAB_00c64c78;
    lVar14 = *(long *)(lVar7 + 0xa0);
    lVar9 = lVar9 + 1;
    lVar11 = lVar11 + 0x10;
  } while( true );
}


