/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3d060; name: FUN_02a3d060
 */


void FUN_02a3d060(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  bool bVar12;
  long lVar13;
  long *local_70;
  undefined8 uStack_68;
  long *local_60;
  long *local_58 [2];
  long local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar9 = *param_2;
  if (lVar9 == 0) {
    return;
  }
  if (*(short *)(lVar9 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar10 = *(short *)(lVar9 + 0x1a);
  do {
    sVar4 = *psVar1;
    if (sVar4 == sVar10) {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a3d0dc;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02a3d0dc:
      bVar12 = false;
    }
    if (bVar12) {
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        return;
      }
      if (((*PTR_DAT_047d4df8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      lVar8 = *(long *)PTR_DAT_047d4e00;
      *(long *)PTR_DAT_047d4e08 = lVar8;
      local_58[0] = *(long **)(lVar8 + 0x28);
      FUN_00de1c30(&local_60,lVar9 + 0x18,param_3,local_58);
      FUN_00cb84e8(local_60,param_4);
      plVar3 = local_60;
      lVar8 = *param_5;
      if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) goto LAB_02a3d154;
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar10 = *(short *)(lVar8 + 0x1a);
      break;
    }
    sVar10 = sVar4;
    if (sVar4 == 0) {
      return;
    }
  } while( true );
  while (sVar10 = sVar4, sVar4 != 0) {
    sVar4 = *psVar1;
    if (sVar4 == sVar10) {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a3d564;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02a3d564:
      bVar12 = false;
    }
    if (bVar12) {
      local_70 = (long *)0x0;
      if (*(long *)(lVar8 + 0x10) != 0) {
        local_70 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
      }
      goto LAB_02a3d158;
    }
  }
LAB_02a3d154:
  local_70 = (long *)0x0;
LAB_02a3d158:
  plVar11 = (long *)local_60[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar11;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x248,8);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar11 + 0xe8))(plVar11);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00d40df8(plVar7,&local_70);
  *(undefined4 *)(plVar7 + 3) = 0x80248;
  plVar7[1] = (long)plVar11;
  plVar7[2] = (long)plVar7;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  plVar11 = plVar7 + 4;
  (**(code **)(*plVar11 + 0xe8))(plVar11,plVar3);
  (**(code **)(*plVar11 + 0x68))(plVar11);
  local_58[0] = plVar7;
  FUN_00df8c30(plVar3 + 0x21,local_58);
  if (local_58[0] != (long *)0x0) {
    lVar8 = local_58[0][0x13];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_58[0] + 0x50))();
    }
    else if (sVar10 == 0) goto LAB_02a3d40c;
  }
  (**(code **)(*plVar3 + 0x100))(plVar3,plVar11);
  plVar7 = plVar3 + 0x88;
  lVar13 = *plVar7;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar13) {
    plVar7 = (long *)0x0;
    bVar12 = true;
  }
  else {
    lVar8 = nn::os::GetCurrentThread();
    do {
      if (*plVar7 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x89));
          while (*plVar7 == 0) {
            cVar5 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar12) {
              *plVar7 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02a3d26c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar12) {
        *plVar7 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02a3d26c:
    bVar12 = false;
  }
  if ((*(byte *)(plVar3 + 0x8b) >> 2 & 1) == 0) {
    FUN_00d37964(plVar3,0,0);
  }
  else {
    (**(code **)(*plVar11 + 0xf8))(plVar11);
  }
  if (!bVar12) {
    *plVar7 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
  }
  if (local_70 != (long *)0x0) {
    lVar8 = local_70[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar10 == 0) goto LAB_02a3d40c;
  }
  plVar11 = local_60;
  plVar7 = local_60 + 5;
  (**(code **)(*local_60 + 0x18))(local_58,local_60);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  plVar3 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar3 = plVar7;
  }
  if ((long *)local_58[0][2] == plVar3) {
    FUN_00cbc6dc(&local_70,local_58);
  }
  plVar3 = local_58[0];
  if (local_58[0] != (long *)0x0) {
    plVar11 = local_58[0] + 3;
    do {
      sVar10 = (short)*plVar11;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *(short *)plVar11 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_48 = *plVar3;
        FUN_00c44438(lVar8 + 0x8040,&local_48);
      }
    }
    else if (sVar10 == 0) goto LAB_02a3d6d4;
  }
  FUN_00ca1ea4(param_1,&local_70);
  plVar3 = local_70;
  if (local_70 != (long *)0x0) {
    plVar11 = local_70 + 3;
    do {
      sVar10 = (short)*plVar11;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *(short *)plVar11 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_58[0] = (long *)*plVar3;
        FUN_00c44438(lVar8 + 0x8040,local_58);
      }
    }
    else if (sVar10 == 0) {
LAB_02a3d6d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_60 != (long *)0x0) {
    lVar8 = local_60[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar10 == 0) {
LAB_02a3d40c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
  return;
}


