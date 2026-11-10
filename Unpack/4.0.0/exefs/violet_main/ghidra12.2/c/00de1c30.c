/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00de1c30; name: FUN_00de1c30
 */


void FUN_00de1c30(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  long *local_50;
  undefined1 auStack_48 [8];
  
  lVar6 = nn::os::GetCurrentThread();
  puVar5 = PTR_DAT_047d94d0;
  do {
    lVar9 = *(long *)puVar5;
    lVar10 = *(long *)(puVar5 + 8);
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar11) {
      *(long *)puVar5 = lVar9;
      *(long *)(puVar5 + 8) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar9 != 0 && (lVar6 != lVar9))) {
      nn::os::WaitLightEvent((LightEventType *)(puVar5 + 0x10));
      do {
        lVar9 = *(long *)puVar5;
        lVar10 = *(long *)(puVar5 + 8);
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar11) {
          *(long *)puVar5 = lVar9;
          *(long *)(puVar5 + 8) = lVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar2 = *(long *)puVar5;
      if (lVar2 != lVar9 || *(long *)(puVar5 + 8) != lVar10) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto LAB_00de1cb0;
      }
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar11) {
        *(long *)puVar5 = lVar9;
        *(long *)(puVar5 + 4) = lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar11 = true;
LAB_00de1cb0:
    lVar9 = lVar2;
    lVar10 = *(long *)(puVar5 + 8);
  } while (!bVar11);
  uVar7 = (**(code **)(*param_2 + 0x88))(param_2);
  plVar8 = (long *)FUN_00de22d8(auStack_48,uVar7,param_3,param_4);
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[6];
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00de1f0c;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar7;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_00de1eac;
  }
  *(undefined4 *)(plVar8 + 0x9f) = 0xffffffff;
  FUN_00df5bb4(plVar8);
  local_50 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[6];
    if (*(long *)(lVar6 + 0x10) == 0) {
LAB_00de1f0c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar7;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_00de1eac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,&local_50);
  if (local_50 != (long *)0x0) {
    lVar6 = local_50[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *param_1 = (long)plVar8;
  do {
    lVar6 = *(long *)puVar5;
    lVar9 = *(long *)(puVar5 + 8);
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar11) {
      *(long *)puVar5 = lVar6;
      *(long *)(puVar5 + 8) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar10 = *(long *)puVar5;
    lVar2 = *(long *)(puVar5 + 8);
    if (lVar10 != lVar6 || lVar2 != lVar9) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto joined_r0x00de1d94;
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar11) {
      *(long *)puVar5 = lVar6;
      *(long *)(puVar5 + 4) = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar11 = true;
joined_r0x00de1d94:
  do {
    if (bVar11) {
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 0x10));
      return;
    }
    do {
      lVar6 = *(long *)puVar5;
      lVar9 = *(long *)(puVar5 + 8);
      if (lVar6 != lVar10 || lVar9 != lVar2) {
        bVar11 = false;
        ClearExclusiveLocal();
        lVar10 = lVar6;
        lVar2 = lVar9;
        goto joined_r0x00de1d94;
      }
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar11) {
        *(long *)puVar5 = lVar10;
        *(long *)(puVar5 + 4) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar11 = true;
    lVar10 = lVar6;
    lVar2 = lVar9;
  } while( true );
}


