/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0115c9f4; name: FUN_0115c9f4
 */


void FUN_0115c9f4(long param_1,long *param_2)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long *plVar16;
  bool bVar17;
  long *local_50;
  long *local_48;
  
  plVar16 = (long *)(param_1 + 0x2c0);
  do {
    lVar9 = *plVar16;
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar17) {
      *plVar16 = lVar9;
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x2c8);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar9) {
    bVar17 = true;
  }
  else {
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar16 != 0 || *(long *)(param_1 + 0x2c8) != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d0));
          while (*plVar16 == 0 && *(long *)(param_1 + 0x2c8) == 0) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar17) {
              *plVar16 = lVar9;
              *(undefined8 *)(param_1 + 0x2c8) = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0115ca4c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar17) {
        *plVar16 = lVar9;
        *(undefined8 *)(param_1 + 0x2c8) = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_0115ca4c:
    bVar17 = false;
  }
  lVar9 = *(long *)(param_1 + 0x2e0);
  if (lVar9 == *param_2) {
LAB_0115ca98:
    if (lVar9 == 0) goto LAB_0115cb04;
    lVar8 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0115cf88;
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar11;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      goto LAB_0115cb04;
    }
    if (sVar4 != -1) goto LAB_0115cb04;
LAB_0115cf90:
    pcVar12 = "count != 0";
    pcVar13 = "AddReference";
    pcVar14 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar15 = "Reference counter overflows.";
    goto LAB_0115cfb0;
  }
  if ((lVar9 != 0) && (*(long *)(param_1 + 0x2e8) != -1)) {
    FUN_00ed45e8(lVar9);
  }
  *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
  if (*param_2 != 0) {
    FUN_00ed155c(param_1,param_2);
    lVar9 = *param_2;
    goto LAB_0115ca98;
  }
  lVar9 = 0;
LAB_0115cb04:
  plVar10 = *(long **)(param_1 + 0x2e0);
  *(long *)(param_1 + 0x2e0) = lVar9;
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0115cd50;
  }
  if (!bVar17) {
    do {
      lVar9 = *plVar16;
      lVar8 = *(long *)(param_1 + 0x2c8);
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar17) {
        *plVar16 = lVar9;
        *(long *)(param_1 + 0x2c8) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar2 = *plVar16;
      lVar3 = *(long *)(param_1 + 0x2c8);
      if (lVar2 != lVar9 || lVar3 != lVar8) {
        bVar17 = false;
        ClearExclusiveLocal();
        goto joined_r0x0115cb50;
      }
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar17) {
        *plVar16 = 0;
        *(long *)(param_1 + 0x2c4) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar17 = true;
joined_r0x0115cb50:
    if (!bVar17) {
      do {
        lVar9 = *plVar16;
        lVar8 = *(long *)(param_1 + 0x2c8);
        if (lVar9 != lVar2 || lVar8 != lVar3) {
          bVar17 = false;
          ClearExclusiveLocal();
          lVar2 = lVar9;
          lVar3 = lVar8;
          goto joined_r0x0115cb50;
        }
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar17) {
          *plVar16 = 0;
          *(long *)(param_1 + 0x2c4) = lVar3;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar17 = true;
      lVar2 = lVar9;
      lVar3 = lVar8;
      goto joined_r0x0115cb50;
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2d0));
  }
  *(undefined1 *)(param_1 + 0x333) = 1;
  FUN_00c9e664(&local_50,param_1 + 0xe8);
  if ((local_50 != (long *)0x0) &&
     (plVar16 = *(long **)(local_48[9] + 0x460), plVar16 != (long *)0x0)) {
    lVar9 = plVar16[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0115cf88;
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_0115cf90;
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    lVar9 = *(long *)PTR_DAT_047d88d8;
    *(long *)PTR_DAT_047d88e0 = lVar9;
    plVar10 = *(long **)(lVar9 + 0xe8);
    if (plVar10 != (long *)0x0) {
      lVar8 = plVar10[6];
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0115cf88;
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar11;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
LAB_0115cc18:
        FUN_00e21f0c(plVar10);
        lVar8 = plVar10[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        else if (sVar4 == 0) goto LAB_0115cd50;
        goto LAB_0115cc44;
      }
      if (sVar4 != -1) goto LAB_0115cc18;
LAB_0115cf28:
      pcVar12 = "count != 0";
      pcVar13 = "AddReference";
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar15 = "Reference counter overflows.";
      goto LAB_0115cfb0;
    }
    FUN_00e21f0c(0);
LAB_0115cc44:
    plVar10 = *(long **)(lVar9 + 0xd0);
    if (plVar10 == (long *)0x0) {
      FUN_00e21f0c(0);
    }
    else {
      lVar9 = plVar10[6];
      if (*(long *)(lVar9 + 0x10) == 0) {
LAB_0115cf88:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar11;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) goto LAB_0115cf28;
      FUN_00e21f0c(plVar10);
      lVar9 = plVar10[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar4 == 0) goto LAB_0115cd50;
    }
    lVar9 = plVar16[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar4 == 0) {
LAB_0115cd50:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_48 != (long *)0x0) {
    plVar16 = local_48 + 5;
    do {
      lVar9 = *plVar16;
      iVar7 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar17) {
        *(int *)plVar16 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
      pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar13 = "DecrementReferenceInternal";
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar15 = "Reference counter underflows.";
LAB_0115cfb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar12,pcVar13,pcVar14,0x58,pcVar15);
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x60))();
  }
  if (*param_2 != 0) {
    FUN_00ea7e24(param_1);
  }
  return;
}


