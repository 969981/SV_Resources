/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013eab2c; name: FUN_013eab2c
 */


void FUN_013eab2c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long *local_38;
  
  plVar7 = (long *)*param_3;
  plVar12 = *(long **)*param_4;
  if (plVar12 != (long *)0x0) {
    lVar8 = plVar12[6];
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_013eaf00;
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar6;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_013eaf20;
  }
  plVar9 = (long *)plVar7[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x180,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar9 + 0xe8))(plVar9);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  local_38 = plVar12;
  FUN_013eaf7c(plVar5,&local_38,param_1);
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_013eadac;
  }
  *(undefined4 *)(plVar5 + 3) = 0x100180;
  plVar5[1] = (long)plVar9;
  plVar5[2] = (long)plVar5;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  lVar8 = plVar5[0x13];
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_013eaf00:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar6;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
LAB_013eaf20:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar12 = plVar5 + 4;
  (**(code **)(*plVar12 + 0xe8))(plVar12,plVar7);
  (**(code **)(*plVar12 + 0x68))(plVar12);
  local_38 = plVar5;
  FUN_00df8c30(plVar7 + 0x21,&local_38);
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0x13];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_013eadac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar7 + 0x100))(plVar7,plVar12);
  plVar9 = plVar7 + 0x88;
  lVar11 = *plVar9;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar11) {
    plVar9 = (long *)0x0;
    bVar10 = true;
LAB_013eacd0:
    if ((*(byte *)(plVar7 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar7,0,0);
    }
    else {
      (**(code **)(*plVar12 + 0xf8))(plVar12);
    }
    if (!bVar10) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    }
    plVar5[0x1e] = plVar7[0x6d];
    plVar5[0x1f] = plVar7[0x6e];
    plVar5[0x20] = plVar7[0x6f];
    plVar7 = (long *)plVar7[0x70];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar12 = (long *)plVar5[0x21];
    plVar5[0x21] = (long)plVar7;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    *(undefined1 *)(plVar5 + 0x2e) = *(undefined1 *)(param_1 + 0x14);
    return;
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_013eaccc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x89));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x89));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar10) {
            *plVar9 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_013eaccc;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_013eaccc:
  bVar10 = false;
  goto LAB_013eacd0;
}


