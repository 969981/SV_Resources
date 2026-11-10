/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0115c010; name: FUN_0115c010
 */


undefined8 FUN_0115c010(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  bool bVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  plVar9 = (long *)(lVar17 + 0x110);
  lVar14 = *plVar9;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar14) {
    lVar8 = nn::os::GetCurrentThread();
LAB_0115c054:
    if (*plVar9 == 0) goto code_r0x0115c05c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x118));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x118));
          while (*plVar9 == 0) {
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar15) {
              *plVar9 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_0115c064;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar15) {
        *plVar9 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0115c064:
    bVar15 = false;
    goto LAB_0115c068;
  }
  bVar15 = true;
LAB_0115c068:
  plVar9 = (long *)FUN_01086030(*(undefined8 *)(lVar17 + 0x128),*(undefined8 *)(lVar17 + 0x130));
  if ((*(long **)(lVar17 + 0x130) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_01086030(*(undefined8 *)(lVar17 + 0x160),*(undefined8 *)(lVar17 + 0x168));
    if (*(long **)(lVar17 + 0x168) == plVar9) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + -0x20;
      }
    }
  }
  else {
    lVar8 = *plVar9 + -0x20;
  }
  if (!bVar15) {
    *(undefined8 *)(lVar17 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x118));
  }
  if ((lVar8 == 0) || (*(long *)(param_1 + 0x130) == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x30);
    FUN_00c9e664(&local_78,param_1 + 0xe8);
    if (local_70 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)local_70[9];
    }
    (**(code **)(*plVar9 + 0x18))(&local_50,plVar9);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    plVar3 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 5;
    }
    if ((long *)local_50[2] == plVar3) {
      FUN_00c9ea00(&local_68,&local_50);
    }
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_28 = *local_50;
          FUN_00c44438(lVar17 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) goto LAB_0115c2f8;
    }
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00c43ef0(&local_50,param_1 + 0x98);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    if (local_50[2] == param_1 + 0x28) {
      FUN_0115c6d0(&local_88,&local_50);
    }
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_28 = *puVar6;
          FUN_00c44438(lVar17 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) goto LAB_0115c2f8;
    }
    local_58 = (long *)FUN_0115cfb8(uVar16,&local_68,&local_88);
    local_58 = (long *)*local_58;
    if (local_58 != (long *)0x0) {
      lVar17 = local_58[6];
      if (*(long *)(lVar17 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar16;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
        pcVar10 = "count != 0";
        pcVar11 = "AddReference";
        pcVar12 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar13 = "Reference counter overflows.";
        goto LAB_0115c6a4;
      }
    }
    FUN_0115c9f4(lVar8,&local_58);
    if (local_58 != (long *)0x0) {
      lVar17 = local_58[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    puVar6 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_50 = (undefined8 *)*puVar6;
          FUN_00c44438(lVar17 + 0x8040,&local_50);
        }
      }
      else if (sVar4 == 0) goto LAB_0115c2f8;
    }
    puVar6 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_50 = (undefined8 *)*puVar6;
          FUN_00c44438(lVar17 + 0x8040,&local_50);
        }
      }
      else if (sVar4 == 0) {
LAB_0115c2f8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_70 != (long *)0x0) {
      plVar9 = local_70 + 5;
      do {
        lVar17 = *plVar9;
        iVar7 = (int)lVar17 + -1;
        cVar5 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar15) {
          *(int *)plVar9 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
      else if ((int)lVar17 == 0) {
        pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar11 = "DecrementReferenceInternal";
        pcVar12 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar13 = "Reference counter underflows.";
LAB_0115c6a4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar10,pcVar11,pcVar12,0x58,pcVar13);
      }
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x60))();
    }
    uVar16 = 1;
  }
  return uVar16;
code_r0x0115c05c:
  cVar5 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar15) {
    *plVar9 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0115c064;
  goto LAB_0115c054;
}


