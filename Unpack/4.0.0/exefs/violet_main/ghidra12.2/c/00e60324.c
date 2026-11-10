/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e60324; name: FUN_00e60324
 */


void FUN_00e60324(long param_1)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  byte *pbVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  bool bVar19;
  long *plVar20;
  long local_68;
  
  plVar18 = (long *)(param_1 + 0x3c0);
  lVar15 = *plVar18;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar15) {
    plVar18 = (long *)0x0;
    bVar19 = true;
LAB_00e60378:
    plVar14 = (long *)PTR_DAT_047d3918;
    plVar13 = (long *)PTR_DAT_047d3910;
    pbVar7 = PTR_DAT_047d3908;
    plVar20 = *(long **)(param_1 + 0x3d8);
    plVar17 = *(long **)(param_1 + 0x3e0);
    if (plVar20 != plVar17) {
      do {
        lVar10 = *plVar20;
        if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
          psVar3 = (short *)(lVar10 + 0x1a);
          sVar12 = *(short *)(lVar10 + 0x1a);
LAB_00e6052c:
          sVar4 = *psVar3;
          if (sVar4 == sVar12) {
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar5) {
              *psVar3 = sVar12 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_00e60564;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00e60564:
            bVar5 = false;
          }
          if (!bVar5) goto code_r0x00e6056c;
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 != 0) {
            lVar15 = lVar10 + -0x28;
            local_68 = param_1;
            FUN_010ca1a8(lVar15,&local_68);
            plVar16 = *(long **)(lVar10 + 0x360);
            *(undefined8 *)(lVar10 + 0x360) = 0;
            if (plVar16 != (long *)0x0) {
              plVar1 = plVar16 + 3;
              do {
                sVar12 = (short)*plVar1;
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *(short *)plVar1 = sVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar12 == 1) {
                piVar2 = (int *)((long)plVar16 + 0x1c);
                do {
                  iVar9 = *piVar2;
                  cVar6 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar9 != -1) {
                  if (((*pbVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar7), iVar9 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,plVar13,&PTR_LOOP_04483000);
                    __cxa_guard_release(pbVar7);
                  }
                  lVar11 = *plVar13;
                  *plVar14 = lVar11;
                  local_68 = *plVar16;
                  FUN_00c44438(lVar11 + 0x8040,&local_68);
                }
              }
              else if (sVar12 == 0) goto LAB_00e60490;
            }
            *(undefined8 *)(lVar10 + 0x368) = 0;
            (**(code **)(*(long *)(lVar10 + -0x28) + 0xf8))(lVar15);
            (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))(lVar15);
          }
        }
LAB_00e60428:
        puVar8 = PTR_LAB_047d3de8;
        plVar20 = plVar20 + 2;
      } while (plVar20 != plVar17);
      plVar20 = *(long **)(param_1 + 0x3d8);
      plVar17 = *(long **)(param_1 + 0x3e0);
      while (plVar17 != plVar20) {
        plVar17 = plVar17 + -2;
        plVar16 = (long *)*plVar17;
        if (plVar16 != (long *)0x0) {
          plVar1 = plVar16 + 3;
          do {
            sVar12 = (short)*plVar1;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(short *)plVar1 = sVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar12 == 1) {
            piVar2 = (int *)((long)plVar16 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*pbVar7 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), plVar13 = (long *)PTR_DAT_047d3910,
                 plVar14 = (long *)PTR_DAT_047d3918, iVar9 != 0)) {
                FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
                plVar13 = (long *)PTR_DAT_047d3910;
                plVar14 = (long *)PTR_DAT_047d3918;
              }
              lVar10 = *plVar13;
              *plVar14 = lVar10;
              local_68 = *plVar16;
              FUN_00c44438(lVar10 + 0x8040,&local_68);
              pbVar7 = PTR_DAT_047d3908;
              plVar13 = (long *)PTR_DAT_047d3910;
            }
          }
          else if (sVar12 == 0) {
LAB_00e60490:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
    }
    *(long **)(param_1 + 0x3e0) = plVar20;
    if (!bVar19) {
      *plVar18 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
    }
    return;
  }
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar18 == 0) {
    cVar6 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar19) {
      *plVar18 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00e60374;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
  do {
    if (*plVar18 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
        while (*plVar18 == 0) {
          cVar6 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar19) {
            *plVar18 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00e60374;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar19) {
      *plVar18 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00e60374:
  bVar19 = false;
  goto LAB_00e60378;
code_r0x00e6056c:
  sVar12 = sVar4;
  if (sVar4 == 0) goto LAB_00e60428;
  goto LAB_00e6052c;
}


