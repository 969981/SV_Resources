/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01401c64; name: FUN_01401c64
 */


void FUN_01401c64(long *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  long lVar16;
  short sVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60;
  long *local_58 [2];
  long local_48;
  
  FUN_00c9e664(&local_68,param_2 + 0xe8);
  uVar19 = *param_3;
  if (local_60 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    plVar20 = (long *)local_60[9];
  }
  (**(code **)(*plVar20 + 0x18))(local_58,plVar20);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  plVar18 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar18 = plVar20 + 5;
  }
  if ((long *)local_58[0][2] == plVar18) {
    FUN_00c9ea00(&local_78,local_58);
  }
  plVar20 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar18 = local_58[0] + 3;
    do {
      sVar17 = (short)*plVar18;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar15) {
        *(short *)plVar18 = sVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar17 == 1) {
      piVar1 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_48 = *plVar20;
        FUN_00c44438(lVar16 + 0x8040,&local_48);
      }
    }
    else if (sVar17 == 0) goto LAB_01401da0;
  }
  FUN_01402210(param_1,uVar19,&local_78);
  puVar8 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78 + 3);
    do {
      sVar17 = *psVar2;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar17 == 1) {
      piVar1 = (int *)((long)local_78 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar15) {
          *piVar1 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_58[0] = (long *)*puVar8;
        FUN_00c44438(lVar16 + 0x8040,local_58);
      }
    }
    else if (sVar17 == 0) {
LAB_01401da0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar16 = *param_1;
  if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar16 + 0x1a);
    sVar17 = *(short *)(lVar16 + 0x1a);
    do {
      sVar6 = *psVar2;
      if (sVar6 == sVar17) {
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar15) {
          *psVar2 = sVar17 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_01401ed4;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01401ed4:
        bVar15 = false;
      }
      if (bVar15) {
        lVar16 = *(long *)(lVar16 + 0x10);
        if (lVar16 != 0) {
          plVar18 = (long *)(lVar16 + -0x28);
          plVar20 = (long *)(param_2 + 0x280);
          lVar10 = nn::os::GetCurrentThread();
          goto LAB_01401f00;
        }
        break;
      }
      sVar17 = sVar6;
    } while (sVar6 != 0);
  }
LAB_01401d0c:
  if (local_60 != (long *)0x0) {
    plVar20 = local_60 + 5;
    do {
      lVar16 = *plVar20;
      iVar9 = (int)lVar16 + -1;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar15) {
        *(int *)plVar20 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar16 == 0) {
      pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar12 = "DecrementReferenceInternal";
      pcVar13 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar14 = "Reference counter underflows.";
LAB_01402158:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar11,pcVar12,pcVar13,0x58,pcVar14);
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x60))();
  }
  return;
LAB_01401f00:
  if (*plVar20 == 0 && *(long *)(param_2 + 0x288) == 0) goto code_r0x01401f0c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
  do {
    if (*plVar20 != 0 || *(long *)(param_2 + 0x288) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x290));
        while (*plVar20 == 0 && *(long *)(param_2 + 0x288) == 0) {
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar15) {
            *plVar20 = lVar10;
            *(undefined8 *)(param_2 + 0x288) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_01401f14;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar15) {
      *plVar20 = lVar10;
      *(undefined8 *)(param_2 + 0x288) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_01401f14:
  lVar10 = *(long *)(lVar16 + 8);
  local_58[0] = plVar18;
  if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar2 = (short *)(lVar10 + 0x1a);
  do {
    sVar17 = *psVar2;
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar15) {
      *psVar2 = sVar17 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar17 == 0) {
    uVar19 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    *(undefined8 *)(lVar10 + 8) = uVar19;
    *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
  }
  else if (sVar17 == -1) {
    pcVar11 = "count != 0";
    pcVar12 = "AddReference";
    pcVar13 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar14 = "Reference counter overflows.";
    goto LAB_01402158;
  }
  FUN_0220f500(param_2 + 0x120,local_58);
  if (local_58[0] != (long *)0x0) {
    lVar10 = local_58[0][6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar17 = *psVar2;
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar15) {
        *psVar2 = sVar17 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_58[0] + 0x50))();
    }
    else if (sVar17 == 0) goto LAB_01402048;
  }
  *(undefined1 *)(param_2 + 0x274) = 1;
  do {
    lVar10 = *plVar20;
    lVar5 = *(long *)(param_2 + 0x288);
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar15) {
      *plVar20 = lVar10;
      *(long *)(param_2 + 0x288) = lVar5;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar20;
    lVar4 = *(long *)(param_2 + 0x288);
    if (lVar3 != lVar10 || lVar4 != lVar5) {
      bVar15 = false;
      ClearExclusiveLocal();
      goto LAB_01402018;
    }
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar15) {
      *plVar20 = 0;
      *(long *)(param_2 + 0x284) = lVar5;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar15 = true;
LAB_01402018:
  if (!bVar15) {
    do {
      lVar10 = *plVar20;
      lVar5 = *(long *)(param_2 + 0x288);
      if (lVar10 != lVar3 || lVar5 != lVar4) {
        bVar15 = false;
        ClearExclusiveLocal();
        goto joined_r0x0140218c;
      }
      cVar7 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar15) {
        *plVar20 = 0;
        *(long *)(param_2 + 0x284) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar15 = true;
joined_r0x0140218c:
    if (!bVar15) {
      do {
        lVar3 = *plVar20;
        lVar4 = *(long *)(param_2 + 0x288);
        if (lVar3 != lVar10 || lVar4 != lVar5) {
          bVar15 = false;
          ClearExclusiveLocal();
          lVar10 = lVar3;
          lVar5 = lVar4;
          goto joined_r0x0140218c;
        }
        cVar7 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar15) {
          *plVar20 = 0;
          *(long *)(param_2 + 0x284) = lVar5;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar15 = true;
      lVar10 = lVar3;
      lVar5 = lVar4;
      goto joined_r0x0140218c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x290));
  lVar16 = *(long *)(lVar16 + 8);
  psVar2 = (short *)(lVar16 + 0x1a);
  do {
    sVar17 = *psVar2;
    cVar7 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar15) {
      *psVar2 = sVar17 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar17 == 1) {
    *(undefined8 *)(lVar16 + 0x10) = 0;
    (**(code **)(*plVar18 + 0x50))(plVar18);
  }
  else if (sVar17 == 0) {
LAB_01402048:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_01401d0c;
code_r0x01401f0c:
  cVar7 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar15) {
    *plVar20 = lVar10;
    *(undefined8 *)(param_2 + 0x288) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01401f14;
  goto LAB_01401f00;
}


