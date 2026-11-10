/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01100fc0; name: FUN_01100fc0
 */


void FUN_01100fc0(long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  bool bVar12;
  long *plVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *plStack_58;
  long *local_38;
  
  if (param_4 == (long *)0x0) {
    param_4 = *(long **)(param_2 + 8);
  }
  local_70 = *param_3;
  uStack_68 = param_3[1];
  local_60 = param_3[2];
  plVar5 = (long *)param_3[3];
  plStack_58 = plVar5;
  if (plVar5 == (long *)0x0) {
    FUN_01101478(&local_38,param_2,&local_70);
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_01101478(&local_38,param_2,&local_70);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  plVar5 = (long *)(param_2 + 0xb0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar5 == 0 && *(long *)(param_2 + 0xb8) == 0) {
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar12) {
      *plVar5 = lVar8;
      *(undefined8 *)(param_2 + 0xb8) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01101038;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xc0));
  do {
    if (*plVar5 != 0 || *(long *)(param_2 + 0xb8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xc0));
        while (*plVar5 == 0 && *(long *)(param_2 + 0xb8) == 0) {
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar12) {
            *plVar5 = lVar8;
            *(undefined8 *)(param_2 + 0xb8) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01101038;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar12) {
      *plVar5 = lVar8;
      *(undefined8 *)(param_2 + 0xb8) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01101038:
  plVar10 = local_38;
  if (local_38 == (long *)0x0) {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_4;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*param_4 + 0x10))(param_4,0xe0,8);
    if (lVar9 == 0) {
      (**(code **)(*param_4 + 0xe8))(param_4);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_01106688(lVar9,param_3);
    *(undefined4 *)(lVar9 + 0x18) = 0x800e0;
    *(long **)(lVar9 + 8) = param_4;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    lVar8 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar8 + 0x10) == 0) {
LAB_01101424:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar11;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_01101294;
    plVar10 = (long *)FUN_01105250(param_2 + 0x40,param_3);
    plVar13 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar13 != (long *)0x0) {
      lVar8 = plVar13[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar4 == 0) goto LAB_011013fc;
    }
    *plVar10 = lVar9;
    plVar10 = (long *)FUN_01105250(param_2 + 0x40,param_3);
    lVar8 = *plVar10;
    *param_1 = lVar8;
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_01101424;
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar11;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
LAB_01101294:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  else {
    local_38 = (long *)0x0;
    *param_1 = (long)plVar10;
  }
  do {
    lVar8 = *plVar5;
    lVar9 = *(long *)(param_2 + 0xb8);
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar12) {
      *plVar5 = lVar8;
      *(long *)(param_2 + 0xb8) = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar2 = *plVar5;
    lVar3 = *(long *)(param_2 + 0xb8);
    if (lVar2 != lVar8 || lVar3 != lVar9) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_011010d0;
    }
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar12) {
      *plVar5 = 0;
      *(long *)(param_2 + 0xb4) = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar12 = true;
LAB_011010d0:
  if (!bVar12) {
    do {
      lVar8 = *plVar5;
      lVar9 = *(long *)(param_2 + 0xb8);
      if (lVar8 != lVar2 || lVar9 != lVar3) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x011013bc;
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar12) {
        *plVar5 = 0;
        *(long *)(param_2 + 0xb4) = lVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar12 = true;
joined_r0x011013bc:
    if (!bVar12) {
      do {
        lVar2 = *plVar5;
        lVar3 = *(long *)(param_2 + 0xb8);
        if (lVar2 != lVar8 || lVar3 != lVar9) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar9 = lVar3;
          goto joined_r0x011013bc;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar12) {
          *plVar5 = 0;
          *(long *)(param_2 + 0xb4) = lVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
      lVar8 = lVar2;
      lVar9 = lVar3;
      goto joined_r0x011013bc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xc0));
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_011013fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


