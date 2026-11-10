/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322d59c; name: FUN_0322d59c
 */


void FUN_0322d59c(long param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  byte bVar15;
  
  uVar6 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar6) {
    uVar9 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x38) + uVar9 * 8) == param_2) {
        if (-1 < (int)uVar9) {
          return;
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar6 != uVar9);
  }
  lVar14 = (long)(int)uVar6;
  uVar9 = lVar14 + 1;
  if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) <= (int)uVar6) {
    FUN_0322e120((long *)(param_1 + 0x38),uVar9);
    uVar6 = *(uint *)(param_1 + 0x40);
  }
  *(long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar6 * 8) = param_2;
  lVar7 = *(long *)(param_1 + 0x38);
  *(int *)(param_1 + 0x40) = (int)uVar9;
  plVar13 = (long *)**(undefined8 **)(lVar7 + lVar14 * 8);
  if (plVar13 != (long *)0x0) {
    do {
      plVar5 = DAT_04885628;
      nn::os::LockMutex((MutexType *)&DAT_04885538);
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar2 = plVar5 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar6 = *(uint *)(plVar13 + 1);
      if (0 < (int)uVar6) {
        puVar11 = (undefined8 *)(*plVar13 + (ulong)(uVar6 - 1) * 0x10);
        uVar9 = (ulong)(uVar6 - 1);
        do {
          if ((long *)*puVar11 == plVar5) {
            if (-1 < (int)uVar9) {
              *(undefined1 *)(*plVar13 + (uVar9 & 0xffffffff) * 0x10 + 8) = 3;
              uVar6 = *(uint *)(plVar13 + 1);
              uVar9 = (ulong)uVar6;
              *(undefined1 *)(plVar13 + 10) = 0;
              if (0 < (int)uVar6) {
                uVar8 = uVar9 & 3;
                if (uVar9 - 1 < 3) {
                  bVar15 = 0;
                  uVar12 = 0;
                }
                else {
                  bVar15 = 0;
                  uVar12 = 0;
                  pbVar10 = (byte *)(*plVar13 + 0x28);
                  do {
                    if (bVar15 <= pbVar10[-0x20]) {
                      bVar15 = pbVar10[-0x20];
                    }
                    *(byte *)(plVar13 + 10) = bVar15;
                    if (bVar15 <= pbVar10[-0x10]) {
                      bVar15 = pbVar10[-0x10];
                    }
                    *(byte *)(plVar13 + 10) = bVar15;
                    if (bVar15 <= *pbVar10) {
                      bVar15 = *pbVar10;
                    }
                    *(byte *)(plVar13 + 10) = bVar15;
                    pbVar1 = pbVar10 + 0x10;
                    pbVar10 = pbVar10 + 0x40;
                    uVar12 = uVar12 + 4;
                    if (bVar15 <= *pbVar1) {
                      bVar15 = *pbVar1;
                    }
                    *(byte *)(plVar13 + 10) = bVar15;
                  } while ((uVar9 & 0xfffffffc) != uVar12);
                }
                if ((uVar6 & 3) != 0) {
                  pbVar10 = (byte *)(*plVar13 + uVar12 * 0x10 + 8);
                  do {
                    if (bVar15 <= *pbVar10) {
                      bVar15 = *pbVar10;
                    }
                    uVar8 = uVar8 - 1;
                    *(byte *)(plVar13 + 10) = bVar15;
                    pbVar10 = pbVar10 + 0x10;
                  } while (uVar8 != 0);
                }
              }
              goto LAB_0322d76c;
            }
            break;
          }
          puVar11 = puVar11 + -2;
          bVar4 = 0 < (long)uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar4);
      }
      lVar14 = (long)(int)uVar6;
      if ((int)(*(uint *)((long)plVar13 + 0xc) & 0x7fffffff) <= (int)uVar6) {
        FUN_0322e234(plVar13,lVar14 + 1);
        uVar6 = *(uint *)(plVar13 + 1);
      }
      lVar7 = *plVar13;
      *(long **)(lVar7 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar6 << 4)) =
           plVar5;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar2 = plVar5 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined1 *)(lVar7 + (long)(int)uVar6 * 0x10 + 8) = 3;
      bVar15 = *(byte *)(plVar13 + 10);
      if (bVar15 < 4) {
        bVar15 = 3;
      }
      *(int *)(plVar13 + 1) = (int)(lVar14 + 1);
      *(byte *)(plVar13 + 10) = bVar15;
LAB_0322d76c:
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar2 = plVar5 + 2;
        do {
          lVar14 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      nn::os::UnlockMutex((MutexType *)&DAT_04885538);
      plVar13 = (long *)plVar13[0xc];
    } while (plVar13 != (long *)0x0);
    lVar7 = *(long *)(param_1 + 0x38);
    uVar9 = (ulong)*(uint *)(param_1 + 0x40);
  }
  FUN_0322e07c(param_1 + 0x48,**(undefined8 **)(lVar7 + (long)((int)uVar9 + -1) * 8));
  return;
}


