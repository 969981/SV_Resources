/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02438b08; name: FUN_02438b08
 */


void FUN_02438b08(long param_1,undefined4 param_2)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  short sVar15;
  undefined8 *puVar16;
  long *local_38;
  
  lVar12 = *(long *)(param_1 + 0x18);
  if ((lVar12 != 0) && (sVar15 = *(short *)(lVar12 + 0x1a), sVar15 != 0)) {
    puVar16 = *(undefined8 **)(lVar12 + 8);
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar8 != 0)) {
      uVar11 = FUN_01cd650c();
      *(undefined8 *)PTR_DAT_047d6c50 = uVar11;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    if (puVar16 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        if (puVar16 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_02438b80;
        puVar16 = (undefined8 *)*puVar16;
      } while (puVar16 != (undefined8 *)0x0);
    }
  }
  return;
code_r0x02438bf4:
  cVar7 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar14) {
    *plVar2 = lVar10;
    *(undefined8 *)(lVar12 + 0x60) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_02438bfc;
  goto LAB_02438be8;
LAB_02438b80:
  sVar5 = *psVar1;
  if (sVar5 == sVar15) {
    cVar7 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar15 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 != '\0') goto LAB_02438ba4;
    bVar14 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02438ba4:
    bVar14 = false;
  }
  if (!bVar14) {
    sVar15 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_02438b80;
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    return;
  }
  plVar13 = (long *)(lVar12 + -0x28);
  plVar2 = (long *)(lVar12 + 0x58);
  do {
    lVar10 = *plVar2;
    cVar7 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar14) {
      *plVar2 = lVar10;
      *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)(lVar12 + 0x60);
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar10) {
    lVar10 = nn::os::GetCurrentThread();
LAB_02438be8:
    if (*plVar2 == 0 && *(long *)(lVar12 + 0x60) == 0) goto code_r0x02438bf4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x68));
    do {
      if (*plVar2 != 0 || *(long *)(lVar12 + 0x60) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x68));
          while (*plVar2 == 0 && *(long *)(lVar12 + 0x60) == 0) {
            cVar7 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar14) {
              *plVar2 = lVar10;
              *(undefined8 *)(lVar12 + 0x60) = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_02438bfc;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *plVar2 = lVar10;
        *(undefined8 *)(lVar12 + 0x60) = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_02438bfc:
    bVar14 = false;
    goto LAB_02438c00;
  }
  bVar14 = true;
LAB_02438c00:
  FUN_00c65924(plVar13);
  FUN_01cdace0(&local_38,plVar13);
  FUN_023994a4(param_1,local_38,param_2);
  FUN_00f0893c(plVar13);
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar15 == 0) goto LAB_02438cf0;
  }
  if (!bVar14) {
    do {
      lVar10 = *plVar2;
      lVar9 = *(long *)(lVar12 + 0x60);
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *plVar2 = lVar10;
        *(long *)(lVar12 + 0x60) = lVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar3 = *plVar2;
      lVar4 = *(long *)(lVar12 + 0x60);
      if (lVar3 != lVar10 || lVar4 != lVar9) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_02438cc0;
      }
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar14) {
        *plVar2 = 0;
        *(long *)(lVar12 + 0x5c) = lVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar14 = true;
LAB_02438cc0:
    if (!bVar14) {
      do {
        lVar10 = *plVar2;
        lVar9 = *(long *)(lVar12 + 0x60);
        if (lVar10 != lVar3 || lVar9 != lVar4) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto joined_r0x02438ddc;
        }
        cVar7 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar14) {
          *plVar2 = 0;
          *(long *)(lVar12 + 0x5c) = lVar4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar14 = true;
joined_r0x02438ddc:
      if (!bVar14) {
        do {
          lVar3 = *plVar2;
          lVar4 = *(long *)(lVar12 + 0x60);
          if (lVar3 != lVar10 || lVar4 != lVar9) {
            bVar14 = false;
            ClearExclusiveLocal();
            lVar10 = lVar3;
            lVar9 = lVar4;
            goto joined_r0x02438ddc;
          }
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar14) {
            *plVar2 = 0;
            *(long *)(lVar12 + 0x5c) = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar14 = true;
        lVar10 = lVar3;
        lVar9 = lVar4;
        goto joined_r0x02438ddc;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x68));
  }
  lVar12 = *(long *)(lVar12 + 8);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar7 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar15 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
    return;
  }
  if (sVar15 != 0) {
    return;
  }
LAB_02438cf0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


