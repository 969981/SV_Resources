/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b24cd0; name: FUN_02b24cd0
 */


void FUN_02b24cd0(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  short sVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  bool bVar15;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  lVar9 = *param_2;
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
LAB_02b24cf0:
    *param_1 = 0;
    return;
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar10 = *(short *)(lVar9 + 0x1a);
LAB_02b24d1c:
  sVar3 = *psVar1;
  if (sVar3 == sVar10) {
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_02b24d44;
    bVar15 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02b24d44:
    bVar15 = false;
  }
  if (!bVar15) {
    sVar10 = sVar3;
    if (sVar3 == 0) goto LAB_02b24cf0;
    goto LAB_02b24d1c;
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if (lVar9 == 0) goto LAB_02b24cf0;
  plVar12 = (long *)(lVar9 + 0xe8);
  lVar11 = *plVar12;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar11) {
    bVar15 = true;
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
          while (*plVar12 == 0) {
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar15) {
              *plVar12 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02b24d94;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar15) {
        *plVar12 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02b24d94:
    bVar15 = false;
  }
  lVar7 = FUN_02b25748(lVar9 + 0x100);
  if (lVar7 == 0) {
    lVar7 = FUN_02b25748(lVar9 + 0x138);
  }
  plVar12 = (long *)(lVar9 + -0x28);
  if (!bVar15) {
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
  }
  if (lVar7 != 0) {
    plVar13 = *(long **)(lVar7 + 0x338);
    (**(code **)(*plVar13 + 0x18))(local_50,plVar13);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    plVar14 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 5;
    }
    if ((long *)local_50[0][2] == plVar14) {
      FUN_00cfd544(&local_60,local_50);
    }
    puVar5 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        piVar2 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_28 = *puVar5;
          FUN_00c44438(lVar9 + 0x8040,&local_28);
        }
      }
      else if (sVar10 == 0) goto LAB_02b25104;
    }
    puVar5 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      if (*(short *)((long)local_60 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_60 + 0x1a);
        sVar10 = *(short *)((long)local_60 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar10) {
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar15) {
              *psVar1 = sVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_02b24f24;
            bVar15 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02b24f24:
            bVar15 = false;
          }
          if (bVar15) {
            plVar14 = (long *)0x0;
            if (local_60[2] != 0) {
              plVar14 = (long *)(local_60[2] + -0x28);
            }
            goto LAB_02b24f4c;
          }
          sVar10 = sVar3;
          if (sVar3 == 0) break;
        } while( true );
      }
      plVar14 = (long *)0x0;
LAB_02b24f4c:
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_50[0] = (undefined8 *)*puVar5;
          FUN_00c44438(lVar9 + 0x8040,local_50);
        }
      }
      else if (sVar10 == 0) {
LAB_02b25104:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar14 != (long *)0x0) {
        plVar13 = (long *)(**(code **)plVar14[5])(plVar14 + 5);
        if (((*PTR_DAT_047d5358 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d5358), iVar6 != 0)) {
          uVar8 = FUN_00ff17b4();
          *(undefined8 *)PTR_DAT_047d5360 = uVar8;
          __cxa_guard_release(PTR_DAT_047d5358);
        }
        do {
          if (plVar13 == (long *)0x0) {
            *param_1 = 0;
LAB_02b24ff4:
            lVar9 = plVar14[6];
            psVar1 = (short *)(lVar9 + 0x1a);
            do {
              sVar10 = *psVar1;
              cVar4 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar15) {
                *psVar1 = sVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar10 == 1) {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*plVar14 + 0x50))(plVar14);
            }
            else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            (**(code **)(*plVar12 + 0x60))(plVar12);
            return;
          }
          if (plVar13 == (long *)PTR_DAT_047d5360) {
            *param_1 = plVar14;
            lVar9 = plVar14[6];
            if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar9 + 0x1a);
            do {
              sVar10 = *psVar1;
              cVar4 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar15) {
                *psVar1 = sVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar10 == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
              *(undefined8 *)(lVar9 + 8) = uVar8;
              *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
            }
            else if (sVar10 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            goto LAB_02b24ff4;
          }
          plVar13 = (long *)*plVar13;
        } while( true );
      }
    }
  }
  (**(code **)(*plVar12 + 0x60))(plVar12);
  goto LAB_02b24cf0;
}


