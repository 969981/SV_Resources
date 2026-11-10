/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4f724; name: FUN_00c4f724
 */


void FUN_00c4f724(long *param_1)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  
  lVar3 = *param_1;
  lVar12 = *(long *)param_1[1];
  uVar9 = *(long *)(lVar12 + 0x28) - *(long *)(lVar12 + 0x20);
  puVar1 = (uint *)(lVar12 + 0x140);
  do {
    uVar7 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar7 + 4;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar13 = (uint)(uVar9 >> 4);
  if (uVar7 < uVar13) {
    do {
      if ((uVar7 < 0xfffffffc) && (uVar7 < uVar13)) {
        uVar8 = (ulong)uVar7;
        lVar14 = uVar8 << 4;
        do {
          uVar8 = uVar8 + 1;
          lVar6 = *(long *)(*(long *)(lVar12 + 0x20) + lVar14);
          if (*(char *)(lVar6 + 0x288) != '\0') {
            uVar10 = (ulong)*(uint *)(*(long *)(lVar6 + 0x58) + 0x240);
            lVar11 = *(long *)(*(long *)(lVar6 + 0x58) + 0x208);
            if (((*(char *)(lVar11 + uVar10 * 0x18) != '\0') ||
                (*(char *)(lVar11 + uVar10 * 0x18 + 0x10) != '\0')) ||
               (*(char *)(lVar6 + 0x289) != '\0')) {
              FUN_00c4f868(lVar12,*(undefined8 *)
                                   (*(long *)(lVar6 + 0x60) +
                                   (ulong)*(uint *)(*(long *)(lVar12 + 0x20) + lVar14 + 8) * 8));
            }
          }
        } while ((uVar8 < uVar7 + 4) && (lVar14 = lVar14 + 0x10, uVar8 < (uVar9 >> 4 & 0xffffffff)))
        ;
      }
      do {
        uVar7 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar7 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    } while (uVar7 < uVar13);
  }
  nn::os::LockMutex((MutexType *)(lVar3 + 0x100));
  piVar2 = (int *)(lVar3 + 0x120);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = *piVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar3 + 0xf0));
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x100));
  return;
}


