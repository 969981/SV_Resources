/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118f5d4; name: FUN_0118f5d4
 */


void FUN_0118f5d4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  short sVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long local_78;
  long *local_70;
  long *local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x428));
  puVar6 = PTR_LAB_047d4118;
  puVar5 = PTR_DAT_047d3e30;
  puVar4 = PTR_DAT_047d3e28;
  plVar10 = *(long **)(param_1 + 0x3e0);
  if (plVar10 != *(long **)(param_1 + 1000)) {
    do {
      if ((*plVar10 == 0) || (*(short *)(*plVar10 + 0x1a) == 0)) {
        plVar10 = (long *)FUN_0118f8f8(param_1 + 0x3e0);
      }
      else {
        lVar14 = *plVar10;
        if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar14 + 0x1a);
          sVar11 = *(short *)(lVar14 + 0x1a);
          do {
            sVar2 = *psVar1;
            if (sVar2 == sVar11) {
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar12) {
                *psVar1 = sVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_0118f7f4;
              bVar12 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_0118f7f4:
              bVar12 = false;
            }
            if (bVar12) {
              lVar14 = *(long *)(lVar14 + 0x10);
              if (lVar14 != 0) {
                plVar15 = (long *)(lVar14 + -0x28);
                if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
                  FUN_00100190(puVar6,puVar5,&PTR_LOOP_04483000);
                  __cxa_guard_release(puVar4);
                }
                uVar9 = FUN_015255c0(plVar15,puVar5);
                if ((uVar9 & 1) == 0) {
                  *(undefined1 *)(plVar10 + 2) = 0;
                }
                lVar14 = *(long *)(lVar14 + 0x70);
                psVar1 = (short *)(lVar14 + 0x1a);
                do {
                  sVar11 = *psVar1;
                  cVar3 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar12) {
                    *psVar1 = sVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (sVar11 == 1) {
                  *(undefined8 *)(lVar14 + 0x10) = 0;
                  (**(code **)(*plVar15 + 0x50))(plVar15);
                }
                else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
              }
              break;
            }
            sVar11 = sVar2;
          } while (sVar2 != 0);
        }
        plVar10 = plVar10 + 3;
      }
    } while (plVar10 != *(long **)(param_1 + 1000));
  }
  FUN_00c9e664(&local_70,param_1 + 0xe8);
  if (local_68 == (long *)0x0) {
    lVar14 = 0;
  }
  else {
    lVar14 = local_68[9];
  }
  plVar10 = (long *)(lVar14 + 0x110);
  lVar13 = *plVar10;
  local_78 = param_1;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar13) {
    bVar12 = true;
LAB_0118f6c8:
    FUN_0118f9c0(*(undefined8 *)(lVar14 + 0x128),*(undefined8 *)(lVar14 + 0x130),&local_78);
    FUN_0118f9c0(*(undefined8 *)(lVar14 + 0x160),*(undefined8 *)(lVar14 + 0x168),&local_78);
    if (!bVar12) {
      *(undefined8 *)(lVar14 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x118));
    }
    if (local_68 != (long *)0x0) {
      plVar10 = local_68 + 5;
      do {
        lVar14 = *plVar10;
        iVar7 = (int)lVar14 + -1;
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar12) {
          *(int *)plVar10 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      else if ((int)lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x60))();
    }
    *(undefined1 *)(param_1 + 0x748) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x428));
    return;
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar12) {
      *plVar10 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0118f6c4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x118));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x118));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar12) {
            *plVar10 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0118f6c4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar12) {
      *plVar10 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0118f6c4:
  bVar12 = false;
  goto LAB_0118f6c8;
}


