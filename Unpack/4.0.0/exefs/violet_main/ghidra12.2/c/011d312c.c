/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011d312c; name: FUN_011d312c
 */


long * FUN_011d312c(long *param_1,long *param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x130,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00ca1ea4(&local_58,param_3);
  FUN_00d1a240(plVar8,0x80008080);
  *plVar8 = (long)&DAT_04550878;
  plVar10 = plVar8 + 4;
  *plVar10 = (long)&PTR_LAB_045509b8;
  plVar8[5] = (long)&PTR_LAB_04550ae0;
  plVar8[6] = (long)&PTR_LAB_04550b38;
  plVar8[7] = (long)&PTR_LAB_04550b60;
  plVar8[0x24] = 0;
  plVar8[0x25] = 0;
  FUN_00ca1a48(plVar8 + 0x24,&local_58);
  puVar5 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
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
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_48 = *puVar5;
        FUN_00c44438(lVar12 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined4 *)(plVar8 + 3) = 0x80130;
  plVar8[1] = (long)param_2;
  plVar8[2] = (long)plVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar7 = plVar8[0x13];
  if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar7 + 0x1a);
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
    uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    *(undefined8 *)(lVar7 + 8) = uVar9;
    *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  (**(code **)(plVar8[4] + 0xe8))(plVar10,param_1);
  (**(code **)(plVar8[4] + 0x68))(plVar10);
  local_60 = plVar8;
  FUN_00df8c30(param_1 + 0x21,&local_60);
  if (local_60 != (long *)0x0) {
    lVar7 = local_60[0x13];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar10);
  plVar13 = param_1 + 0x88;
  lVar12 = *plVar13;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar12) {
    plVar13 = (long *)0x0;
    bVar11 = true;
LAB_011d32dc:
    if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(param_1,0,0);
    }
    else {
      (**(code **)(*plVar10 + 0xf8))(plVar10);
    }
    if (!bVar11) {
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
    }
    return plVar8;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar11) {
      *plVar13 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_011d32d8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
        while (*plVar13 == 0) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar11) {
            *plVar13 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_011d32d8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar11) {
      *plVar13 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_011d32d8:
  bVar11 = false;
  goto LAB_011d32dc;
}


