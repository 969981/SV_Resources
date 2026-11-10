/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f5684; name: FUN_014f5684
 */


void FUN_014f5684(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  lVar9 = *(long *)(param_2 + 8);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_014f56f8;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014f56f8:
        bVar14 = false;
      }
      if (bVar14) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          if ((*(long *)(param_2 + 0x3c8) != 0) &&
             (*(short *)(*(long *)(param_2 + 0x3c8) + 0x1a) != 0)) goto LAB_014f5738;
          plVar6 = (long *)(lVar9 + 0xe8);
          lVar11 = *plVar6;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 != lVar11) {
            lVar8 = nn::os::GetCurrentThread();
            goto LAB_014f5774;
          }
          bVar14 = true;
          goto LAB_014f5788;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  return;
joined_r0x014f5a08:
  if (plVar6 == (long *)0x0) {
    *param_1 = 0;
LAB_014f5a50:
    lVar8 = puVar13[1];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    goto LAB_014f5744;
  }
  if (plVar6 == (long *)PTR_DAT_047d52e8) {
    *param_1 = plVar12;
    lVar8 = puVar13[1];
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar10 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    goto LAB_014f5a50;
  }
  plVar6 = (long *)*plVar6;
  goto joined_r0x014f5a08;
LAB_014f5774:
  if (*plVar6 == 0) {
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar14) {
      *plVar6 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_014f5784;
    goto LAB_014f5774;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
        while (*plVar6 == 0) {
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar14) {
            *plVar6 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_014f5784;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar14) {
      *plVar6 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_014f5784:
  bVar14 = false;
LAB_014f5788:
  lVar8 = FUN_01f84580(lVar9 + 0x100);
  if (lVar8 == 0) {
    lVar8 = FUN_01f84580(lVar9 + 0x138);
  }
  if (!bVar14) {
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
  }
  if (lVar8 != 0) {
    plVar12 = *(long **)(lVar8 + 0x338);
    (**(code **)(*plVar12 + 0x18))(local_58,plVar12);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    plVar6 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plVar6 = plVar12 + 5;
    }
    if ((long *)local_58[0][2] == plVar6) {
      FUN_00cfd544(&local_68,local_58);
    }
    puVar13 = local_58[0];
    if (local_58[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58[0] + 3);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        piVar2 = (int *)((long)local_58[0] + 0x1c);
        do {
          iVar5 = *piVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_48 = *puVar13;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar10 == 0) goto LAB_014f58a0;
    }
    FUN_01f8472c((long *)(param_2 + 0x3c8),&local_68);
    puVar13 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar5 = *piVar2;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_58[0] = (undefined8 *)*puVar13;
          FUN_00c44438(lVar8 + 0x8040,local_58);
        }
      }
      else if (sVar10 == 0) {
LAB_014f58a0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_014f5738:
  lVar8 = *(long *)(param_2 + 0x3c8);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar10 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_014f59c4;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014f59c4:
        bVar14 = false;
      }
      if (bVar14) {
        puVar13 = *(undefined8 **)(lVar8 + 0x10);
        if (puVar13 != (undefined8 *)0x0) {
          plVar12 = puVar13 + -5;
          plVar6 = (long *)(**(code **)*puVar13)(puVar13);
          if (((*PTR_DAT_047d52e0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d52e0), iVar5 != 0)) {
            uVar7 = FUN_00ff17b4();
            *(undefined8 *)PTR_DAT_047d52e8 = uVar7;
            __cxa_guard_release(PTR_DAT_047d52e0);
          }
          goto joined_r0x014f5a08;
        }
        break;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
LAB_014f5744:
  (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
  return;
}


