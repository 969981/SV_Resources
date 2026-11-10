/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03468d28; name: FUN_03468d28
 */


undefined1  [16] FUN_03468d28(long param_1,uint param_2,long *param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  uVar2 = *(uint *)(param_1 + 0x98);
  if (uVar2 != 0) {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = param_2 / uVar2;
    }
    for (plVar14 = *(long **)(*(long *)(param_1 + 0x90) + (ulong)(param_2 - uVar4 * uVar2) * 8);
        plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      if (*(uint *)(plVar14 + 1) == param_2) {
        iVar11 = *(int *)(plVar14 + 6) + 1;
        lVar13 = plVar14[2];
        *(int *)(plVar14 + 6) = iVar11;
        if (lVar13 == 0) {
          uVar8 = (ulong)*(uint *)(plVar14 + 5);
          if (*(uint *)(plVar14 + 5) == 0) {
            uVar12 = 0xffffffff00000000;
LAB_03468e94:
            uVar12 = uVar12 & 0xffffffff00000000;
            *(int *)(plVar14 + 6) = iVar11 + -1;
            if ((iVar11 + -1 == 0) && (plVar14[2] != 0)) {
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(*(undefined4 *)((long)plVar14 + 0x1c));
              lVar13 = 0;
              plVar14[2] = 0;
              plVar14[3] = 0xffffffff00000000;
            }
            else {
              lVar13 = 0;
            }
          }
          else {
            plVar9 = (long *)plVar14[4];
            lVar13 = 0;
            bVar5 = false;
            iVar11 = -1;
            uVar12 = 0xffffffff00000000;
            plVar10 = plVar9;
            do {
              plVar6 = plVar9;
              while (((lVar7 = plVar6[2], lVar7 != 0 && (*(char *)(lVar7 + 0x30) != '\0')) ||
                     ((int)plVar6[1] <= iVar11))) {
                plVar6 = plVar6 + 3;
                if (plVar10 + uVar8 * 3 == plVar6) {
                  if (bVar5) {
                    lVar7 = *param_3;
                    goto LAB_03468e6c;
                  }
                  iVar11 = *(int *)(plVar14 + 6);
                  goto LAB_03468e94;
                }
              }
              *param_3 = lVar7;
              plVar10 = (long *)plVar14[4];
              uVar8 = (ulong)*(uint *)(plVar14 + 5);
              plVar9 = plVar6 + 3;
              lVar13 = *plVar6;
              uVar12 = plVar6[1];
              bVar5 = true;
              iVar11 = (int)uVar12;
            } while (plVar10 + uVar8 * 3 + -3 != plVar6);
LAB_03468e6c:
            if (lVar7 != 0) {
              piVar1 = (int *)(lVar7 + 0x60);
              do {
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
        }
        else {
          uVar12 = plVar14[3];
        }
        goto LAB_03468d98;
      }
    }
  }
  lVar13 = 0;
  uVar12 = 0xffffffff00000000;
LAB_03468d98:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
  auVar15._8_8_ = uVar12;
  auVar15._0_8_ = lVar13;
  return auVar15;
}


