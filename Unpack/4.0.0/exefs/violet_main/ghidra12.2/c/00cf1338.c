/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf1338; name: FUN_00cf1338
 */


void FUN_00cf1338(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  long *plVar15;
  long *plVar16;
  undefined8 local_48;
  
  plVar15 = (long *)(param_1 + 0xd0);
  lVar12 = *plVar15;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar12) {
    lVar7 = nn::os::GetCurrentThread();
LAB_00cf1374:
    if (*plVar15 == 0) goto code_r0x00cf137c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
    do {
      if (*plVar15 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
          while (*plVar15 == 0) {
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar14) {
              *plVar15 = lVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00cf1384;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar14) {
        *plVar15 = lVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00cf1384:
    bVar14 = false;
    goto LAB_00cf1388;
  }
  plVar15 = (long *)0x0;
  bVar14 = true;
LAB_00cf1388:
  plVar8 = *(long **)(param_1 + 0xe8);
  plVar16 = *(long **)(param_1 + 0xf0);
  if (plVar8 != plVar16) {
    plVar11 = plVar8;
    if (param_2 == 0) {
      plVar11 = (long *)*plVar8;
      if (plVar11 != (long *)0x0) {
        do {
          plVar10 = plVar8 + 2;
          if (((*plVar11 == 0) && (*(short *)((long)plVar11 + 0x1a) == 0)) ||
             (plVar8 = plVar16, plVar16 == plVar10)) break;
          plVar11 = (long *)*plVar10;
          plVar8 = plVar10;
        } while (plVar11 != (long *)0x0);
      }
    }
    else {
      do {
        plVar10 = (long *)*plVar11;
        if (((plVar10 != (long *)0x0) && (*plVar10 == param_2)) &&
           (plVar8 = plVar11, *(short *)((long)plVar10 + 0x1a) == 0)) break;
        plVar11 = plVar11 + 2;
        plVar8 = plVar16;
      } while (plVar16 != plVar11);
    }
  }
  plVar16 = *(long **)(param_1 + 0xf0);
  if (plVar16 == plVar8) goto LAB_00cf13a4;
  plVar11 = plVar8 + 2;
  plVar10 = plVar8;
  if (plVar11 == plVar16) {
LAB_00cf1504:
    do {
      plVar16 = plVar16 + -2;
      puVar9 = (undefined8 *)*plVar16;
      if (puVar9 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar9 + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar9 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar7 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar7;
            local_48 = *puVar9;
            FUN_00c44438(lVar7 + 0x8040,&local_48);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    } while (plVar16 != plVar10);
  }
  else {
    FUN_00c96b7c(plVar8,plVar11);
    plVar13 = plVar8 + 4;
    plVar10 = plVar11;
    if (plVar13 != plVar16) {
      FUN_00c96b7c(plVar11,plVar13);
      if (plVar8 + 6 == plVar16) {
        plVar10 = plVar13;
      }
      else {
        do {
          plVar10 = plVar13 + 2;
          FUN_00c96b7c(plVar13,plVar10);
          plVar8 = plVar13 + 4;
          plVar13 = plVar10;
        } while (plVar8 != plVar16);
      }
    }
    plVar16 = *(long **)(param_1 + 0xf0);
    if (plVar16 != plVar10) goto LAB_00cf1504;
  }
  *(long **)(param_1 + 0xf0) = plVar10;
LAB_00cf13a4:
  if (!bVar14) {
    *plVar15 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    return;
  }
  return;
code_r0x00cf137c:
  cVar5 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar14) {
    *plVar15 = lVar7;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00cf1384;
  goto LAB_00cf1374;
}


