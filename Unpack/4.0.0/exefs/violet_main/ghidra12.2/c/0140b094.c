/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0140b094; name: FUN_0140b094
 */


void FUN_0140b094(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  lVar10 = *param_2;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0140b108;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0140b108:
        bVar14 = false;
      }
      if (bVar14) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          plVar8 = (long *)(lVar10 + 0xe8);
          lVar12 = *plVar8;
          lVar7 = nn::os::GetCurrentThread();
          if (lVar7 != lVar12) {
            lVar7 = nn::os::GetCurrentThread();
            goto LAB_0140b148;
          }
          bVar14 = true;
          goto LAB_0140b15c;
        }
        break;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
LAB_0140b0b4:
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_0140b148:
  if (*plVar8 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar14) {
              *plVar8 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0140b158;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar14) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_0140b158:
    bVar14 = false;
LAB_0140b15c:
    plVar8 = (long *)FUN_01faeae4(lVar10 + 0x100);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)FUN_01faeae4(lVar10 + 0x138);
    }
    plVar13 = (long *)(lVar10 + -0x28);
    if (!bVar14) {
      *(undefined8 *)(lVar10 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
    }
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0x13];
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar9;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_00c43ef0(&local_50,plVar8 + 0x13);
      *param_1 = 0;
      param_1[1] = 0;
      if ((long *)local_50[2] == plVar8 + 5) {
        FUN_00d94688(param_1,&local_50);
      }
      puVar5 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_50 + 3);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar2 = (int *)((long)local_50 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_28 = *puVar5;
            FUN_00c44438(lVar10 + 0x8040,&local_28);
          }
        }
        else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      lVar10 = plVar8[0x13];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      (**(code **)(*plVar13 + 0x60))(plVar13);
      return;
    }
    (**(code **)(*plVar13 + 0x60))(plVar13);
    goto LAB_0140b0b4;
  }
  cVar4 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar14) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0140b158;
  goto LAB_0140b148;
}


