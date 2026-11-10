/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9dba8; name: FUN_01d9dba8
 */


void FUN_01d9dba8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long lVar13;
  long *local_38;
  
  plVar12 = (long *)*param_2;
  *param_2 = 0;
  local_38 = plVar12;
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 5;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar10 = *param_1;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01d9dcbc;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01d9dcbc:
        bVar5 = false;
      }
      puVar7 = PTR_DAT_047d38f8;
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          lVar13 = *(long *)PTR_DAT_047d38f8;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 != lVar13) {
            uVar9 = nn::os::GetCurrentThread();
            goto LAB_01d9dd5c;
          }
          FUN_01665c38(*(undefined8 *)(lVar10 + 0x48),param_1[2],&local_38);
          goto LAB_01d9dd08;
        }
        break;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
LAB_01d9dbf4:
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01d9dde8;
  }
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 5;
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01d9dc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x10))(plVar12);
      return;
    }
    if ((int)lVar10 == 0) {
LAB_01d9dde8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_01d9dd5c:
  if (*(long *)puVar7 == 0) goto code_r0x01d9dd64;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
  do {
    if (*(long *)puVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
        while (*(long *)puVar7 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar5) {
            *(undefined8 *)puVar7 = uVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01d9dd6c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar5) {
      *(undefined8 *)puVar7 = uVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01d9dd6c:
  FUN_01665c38(*(undefined8 *)(lVar10 + 0x48),param_1[2],&local_38);
  *(undefined8 *)puVar7 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
LAB_01d9dd08:
  lVar8 = *(long *)(lVar10 + 8);
  psVar2 = (short *)(lVar8 + 0x1a);
  do {
    sVar11 = *psVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar5) {
      *psVar2 = sVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar11 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
  }
  else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_01d9dbf4;
code_r0x01d9dd64:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
  if (bVar5) {
    *(undefined8 *)puVar7 = uVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01d9dd6c;
  goto LAB_01d9dd5c;
}


