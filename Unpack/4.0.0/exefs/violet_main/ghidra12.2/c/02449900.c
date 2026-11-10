/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02449900; name: FUN_02449900
 */


uint FUN_02449900(long *param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  short sVar15;
  uint unaff_w21;
  long *plVar16;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  ulong local_60 [2];
  long *local_50;
  char local_48;
  long local_28;
  
  if ((((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) || (lVar12 = *param_1, lVar12 == 0))
     || (*(short *)(lVar12 + 0x1a) == 0)) {
LAB_02449938:
    uVar7 = 0;
LAB_0244993c:
    return uVar7 & 0xff | (unaff_w21 & 0xff) << 8;
  }
  psVar1 = (short *)(lVar12 + 0x1a);
  sVar15 = *(short *)(lVar12 + 0x1a);
LAB_02449974:
  sVar5 = *psVar1;
  if (sVar5 == sVar15) {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar15 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_02449998;
    bVar13 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02449998:
    bVar13 = false;
  }
  if (!bVar13) {
    uVar7 = 0;
    sVar15 = sVar5;
    if (sVar5 == 0) goto LAB_0244993c;
    goto LAB_02449974;
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  unaff_w21 = 0;
  if (lVar12 == 0) goto LAB_02449938;
  plVar11 = (long *)(lVar12 + 0x58);
  plVar16 = (long *)(lVar12 + -0x28);
  local_48 = '\0';
  do {
    lVar10 = *plVar11;
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar13) {
      *plVar11 = lVar10;
      *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)(lVar12 + 0x60);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_50 = plVar11;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar10) {
    local_60[0] = CONCAT71(local_60[0]._1_7_,1);
    local_68 = plVar11;
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar9 = *plVar11;
      lVar14 = *(long *)(lVar12 + 0x60);
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar13) {
        *plVar11 = lVar9;
        *(long *)(lVar12 + 0x60) = lVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      while ((lVar9 != 0 && (lVar10 != lVar9))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x68));
        do {
          lVar9 = *plVar11;
          lVar14 = *(long *)(lVar12 + 0x60);
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar13) {
            *plVar11 = lVar9;
            *(long *)(lVar12 + 0x60) = lVar14;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      do {
        lVar4 = *plVar11;
        if (lVar4 != lVar9 || *(long *)(lVar12 + 0x60) != lVar14) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto LAB_02449a3c;
        }
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar13) {
          *plVar11 = lVar9;
          *(long *)(lVar12 + 0x5c) = lVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar13 = true;
LAB_02449a3c:
      lVar9 = lVar4;
      lVar14 = *(long *)(lVar12 + 0x60);
    } while (!bVar13);
    if (local_48 != '\0') {
      do {
        lVar10 = *local_50;
        lVar9 = local_50[1];
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(local_50,0x10);
        if (bVar13) {
          *local_50 = lVar10;
          local_50[1] = lVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar14 = *local_50;
        lVar4 = local_50[1];
        if (lVar14 != lVar10 || lVar4 != lVar9) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto LAB_02449a90;
        }
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(local_50,0x10);
        if (bVar13) {
          *local_50 = lVar10;
          *(long *)((long)local_50 + 4) = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar13 = true;
LAB_02449a90:
      if (!bVar13) {
        do {
          lVar10 = *local_50;
          lVar9 = local_50[1];
          if (lVar10 != lVar14 || lVar9 != lVar4) {
            bVar13 = false;
            ClearExclusiveLocal();
            goto joined_r0x02449d28;
          }
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(local_50,0x10);
          if (bVar13) {
            *local_50 = lVar14;
            *(long *)((long)local_50 + 4) = lVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar13 = true;
joined_r0x02449d28:
        if (!bVar13) {
          do {
            lVar14 = *local_50;
            lVar4 = local_50[1];
            if (lVar14 != lVar10 || lVar4 != lVar9) {
              bVar13 = false;
              ClearExclusiveLocal();
              lVar10 = lVar14;
              lVar9 = lVar4;
              goto joined_r0x02449d28;
            }
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(local_50,0x10);
            if (bVar13) {
              *local_50 = lVar10;
              *(long *)((long)local_50 + 4) = lVar9 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar13 = true;
          lVar10 = lVar14;
          lVar9 = lVar4;
          goto joined_r0x02449d28;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(local_50 + 2));
    }
    local_50 = local_68;
    local_68 = (long *)0x0;
    local_48 = (char)local_60[0];
    local_60[0] = local_60[0] & 0xffffffffffffff00;
    FUN_00f08b20(&local_68);
  }
  plVar11 = *(long **)(lVar12 + 0x188);
  if (plVar11 == (long *)0x0) {
    local_78 = (long *)0x0;
    uStack_70 = 0;
  }
  else {
    (**(code **)(*plVar11 + 0x18))(&local_68);
    local_78 = (long *)0x0;
    uStack_70 = 0;
    if ((long *)local_68[2] == plVar11 + 5) {
      FUN_00cbc6dc(&local_78,&local_68);
    }
    plVar11 = local_68;
    if (local_68 != (long *)0x0) {
      plVar2 = local_68 + 3;
      do {
        sVar15 = (short)*plVar2;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *(short *)plVar2 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        piVar3 = (int *)((long)local_68 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *plVar11;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar15 == 0) goto LAB_02449be0;
    }
  }
  local_68 = (long *)CONCAT71(local_68._1_7_,2);
  local_60[0] = 0;
  local_60[1] = 0;
  FUN_00ca1ea4(local_60,&local_78);
  uVar7 = FUN_00f6a414(plVar16,param_1 + 2,&local_68);
  FUN_00cecfd8(&local_68);
  plVar11 = local_78;
  if (local_78 != (long *)0x0) {
    plVar2 = local_78 + 3;
    do {
      sVar15 = (short)*plVar2;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *(short *)plVar2 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *plVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
      }
    }
    else if (sVar15 == 0) {
LAB_02449be0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00f08b20(&local_50);
  lVar12 = *(long *)(lVar12 + 8);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar15 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  unaff_w21 = uVar7 >> 8 & 0xff;
  if (sVar15 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16);
  }
  else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_0244993c;
}


