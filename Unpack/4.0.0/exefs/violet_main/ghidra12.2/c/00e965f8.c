/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e965f8; name: FUN_00e965f8
 */


undefined8 FUN_00e965f8(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x718));
  for (lVar11 = *(long *)(param_1 + 0x6e8); lVar11 != param_1 + 0x6e0;
      lVar11 = *(long *)(lVar11 + 8)) {
    lVar8 = *(long *)(lVar11 + 0x10);
    plVar7 = (long *)(param_1 + (long)*(int *)(lVar8 + 0x2c) * 0x50 +
                      (long)*(int *)(lVar8 + 0x30) * 8 + 0x30);
    plVar9 = (long *)*plVar7;
    if ((plVar9 != (long *)0x0) && (plVar9[0xc] == *(long *)(lVar8 + 0x60))) {
      lVar8 = *(long *)(param_1 + (long)*(int *)(lVar8 + 0x2c) * 0x50 +
                        (long)*(int *)(lVar8 + 0x30) * 8 + 0x350);
      if (lVar8 == 0) {
        *plVar7 = 0;
      }
      else {
        piVar1 = (int *)(lVar8 + 0x28);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 == -1) goto LAB_00e96934;
        plVar9 = (long *)*plVar7;
        *plVar7 = lVar8;
        if (plVar9 == (long *)0x0) goto LAB_00e96874;
      }
      plVar7 = plVar9 + 5;
      do {
        lVar8 = *plVar7;
        iVar3 = (int)lVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar6) {
          *(int *)plVar7 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar8 == 0) goto LAB_00e9695c;
    }
LAB_00e96874:
    FUN_00e96bb8((long *)(lVar11 + 0x10));
    FUN_00db2500(lVar11 + 0x18);
  }
  FUN_00e96984(param_1 + 0x6e0);
  lVar8 = *(long *)(param_1 + 0x6b0);
  lVar11 = param_1 + 0x6a8;
  if (lVar11 == lVar8) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      lVar10 = *(long *)(lVar8 + 0x10);
      plVar7 = (long *)(param_1 + (long)*(int *)(lVar10 + 0x2c) * 0x50 +
                        (long)*(int *)(lVar10 + 0x30) * 8 + 0x30);
      plVar9 = (long *)*plVar7;
      if ((plVar9 == (long *)0x0) || ((char)plVar9[0xb] != '\0')) {
        if (lVar10 != 0) {
          piVar1 = (int *)(lVar10 + 0x28);
          do {
            iVar3 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 == -1) goto LAB_00e96934;
          plVar9 = (long *)*plVar7;
        }
        *plVar7 = lVar10;
        if (plVar9 != (long *)0x0) {
          plVar7 = plVar9 + 5;
          do {
            lVar10 = *plVar7;
            iVar3 = (int)lVar10 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar6) {
              *(int *)plVar7 = iVar3;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
          else if ((int)lVar10 == 0) goto LAB_00e9695c;
        }
        lVar8 = FUN_00e96ab8(lVar11,lVar8);
        uVar12 = 1;
      }
      else {
        lVar8 = *(long *)(lVar8 + 8);
      }
    } while (lVar11 != lVar8);
  }
  lVar11 = *(long *)(param_1 + 0x678);
  do {
    while( true ) {
      if (param_1 + 0x670 == lVar11) {
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x718));
        return uVar12;
      }
      lVar10 = *(long *)(lVar11 + 0x10);
      iVar3 = *(int *)(lVar10 + 0x2c);
      iVar4 = *(int *)(lVar10 + 0x30);
      lVar8 = param_1 + (long)iVar3 * 0x50 + (long)iVar4 * 8;
      if (*(long *)(lVar8 + 0x350) == 0) break;
      lVar11 = *(long *)(lVar11 + 8);
    }
    plVar9 = (long *)(lVar8 + 0x350);
    if (lVar10 == 0) {
      *plVar9 = 0;
    }
    else {
      piVar1 = (int *)(lVar10 + 0x28);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 == -1) {
LAB_00e96934:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar7 = (long *)*plVar9;
      *plVar9 = lVar10;
      if (plVar7 != (long *)0x0) {
        plVar9 = plVar7 + 5;
        do {
          lVar8 = *plVar9;
          iVar2 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *(int *)plVar9 = iVar2;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
LAB_00e9695c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    plVar9 = (long *)(param_1 + (long)iVar3 * 0x50 + (long)iVar4 * 8 + 0x30);
    if (*plVar9 == 0) {
      lVar8 = *(long *)(lVar11 + 0x10);
      if (lVar8 == 0) {
        *plVar9 = 0;
      }
      else {
        piVar1 = (int *)(lVar8 + 0x28);
        do {
          iVar3 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 == -1) goto LAB_00e96934;
        plVar7 = (long *)*plVar9;
        *plVar9 = lVar8;
        if (plVar7 != (long *)0x0) {
          plVar9 = plVar7 + 5;
          do {
            lVar8 = *plVar9;
            iVar3 = (int)lVar8 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *(int *)plVar9 = iVar3;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          else if ((int)lVar8 == 0) goto LAB_00e9695c;
        }
      }
    }
    lVar11 = FUN_00e96ab8(param_1 + 0x670,lVar11);
    uVar12 = 1;
  } while( true );
}


