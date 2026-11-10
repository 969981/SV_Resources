/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188cc74; name: FUN_0188cc74
 */


void FUN_0188cc74(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_68;
  
  if (((long *)param_1[3])[1] == *(long *)param_1[3]) {
    return;
  }
  plVar16 = (long *)param_1[1];
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar16;
    lVar11 = plVar16[1];
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar10;
      plVar16[1] = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0188cce4:
  while ((lVar10 != 0 && (lVar7 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(plVar16 + 2));
    do {
      lVar10 = *plVar16;
      lVar11 = plVar16[1];
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar8) {
        *plVar16 = lVar10;
        plVar16[1] = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar16;
    if (lVar3 != lVar10 || plVar16[1] != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0188cd14;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar10;
      *(long *)((long)plVar16 + 4) = lVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_0188cd14:
  if (!bVar8) {
    lVar10 = lVar3;
    lVar11 = plVar16[1];
    goto LAB_0188cce4;
  }
  plVar17 = (long *)*param_1;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0188cd44;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar17 + 1));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar17 + 1));
        while (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0188cd44;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0188cd44:
  plVar9 = (long *)param_1[3];
  plVar12 = plVar9 + 1;
  lVar7 = *plVar12;
  if (lVar7 != *plVar9) {
    uVar13 = 0;
    do {
      uVar15 = *(undefined8 *)(*plVar9 + uVar13 * 8);
      lVar7 = FUN_017c6cf0(param_1[2],uVar15);
      puVar14 = *(undefined8 **)(lVar7 + 8);
      *(undefined8 *)(lVar7 + 8) = 0;
      if (puVar14 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar14 + 3);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)puVar14 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_68 = *puVar14;
            FUN_00c44438(lVar10 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      *(undefined8 *)(lVar7 + 0x10) = 0;
      lVar7 = FUN_017c6cf0(param_1[2],uVar15);
      *(undefined1 *)(lVar7 + 0x18) = 1;
      FUN_0188d00c(param_1[2],uVar15);
      plVar9 = (long *)param_1[3];
      uVar13 = uVar13 + 1;
      plVar12 = plVar9 + 1;
      lVar7 = *plVar9;
    } while (uVar13 < (ulong)(*plVar12 - lVar7 >> 3));
  }
  *plVar12 = lVar7;
  *plVar17 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
  do {
    lVar7 = *plVar16;
    lVar10 = plVar16[1];
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar7;
      plVar16[1] = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar11 = *plVar16;
    lVar3 = plVar16[1];
    if (lVar11 != lVar7 || lVar3 != lVar10) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0188cdec;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar8) {
      *plVar16 = lVar7;
      *(long *)((long)plVar16 + 4) = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_0188cdec:
  if (!bVar8) {
    do {
      lVar7 = *plVar16;
      lVar10 = plVar16[1];
      if (lVar7 != lVar11 || lVar10 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x0188cf58;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar8) {
        *plVar16 = lVar11;
        *(long *)((long)plVar16 + 4) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x0188cf58:
    if (!bVar8) {
      do {
        lVar11 = *plVar16;
        lVar3 = plVar16[1];
        if (lVar11 != lVar7 || lVar3 != lVar10) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar11;
          lVar10 = lVar3;
          goto joined_r0x0188cf58;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *plVar16 = lVar7;
          *(long *)((long)plVar16 + 4) = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar11;
      lVar10 = lVar3;
      goto joined_r0x0188cf58;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(plVar16 + 2));
  return;
}


