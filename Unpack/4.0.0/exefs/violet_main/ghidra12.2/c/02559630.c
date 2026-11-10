/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02559630; name: FUN_02559630
 */


undefined8 FUN_02559630(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  long *plVar1;
  MutexType *pMVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  long lVar8;
  char cVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  bool bVar13;
  undefined8 uVar14;
  long *local_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  plVar1 = (long *)(param_3 + 0x280);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_3 + 0x288) == 0) {
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar12;
      *(undefined8 *)(param_3 + 0x288) = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_0255966c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x290));
  do {
    if (*plVar1 != 0 || *(long *)(param_3 + 0x288) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x290));
        while (*plVar1 == 0 && *(long *)(param_3 + 0x288) == 0) {
          cVar9 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar12;
            *(undefined8 *)(param_3 + 0x288) = 0;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_0255966c;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar12;
      *(undefined8 *)(param_3 + 0x288) = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_0255966c:
  FUN_00f72bac(&local_58,param_3,*(undefined4 *)(param_3 + 0x270));
  plVar10 = local_58;
  if (local_58 == (long *)0x0) {
    uVar14 = 0;
  }
  else {
    if (*(int *)((long)local_58 + 0x74) == 2) {
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar12 = *(long *)PTR_DAT_047d8c08;
      *(long *)PTR_DAT_047d8c10 = lVar12;
      pMVar2 = (MutexType *)(*(long *)(lVar12 + 0x70) + 0x120);
      nn::os::LockMutex(pMVar2);
      plVar7 = (long *)plVar10[0x1a];
      uStack_38 = param_1._8_8_ & 0xffffffff;
      uStack_48 = param_2._8_8_ & 0xffffffff;
      local_50 = param_2._0_8_;
      uStack_40 = param_1._0_8_;
      (**(code **)(*plVar7 + 400))(plVar7,plVar10[0x1b],&uStack_40,&local_50,0);
      nn::os::UnlockMutex(pMVar2);
      uVar14 = 1;
      if (local_58 == (long *)0x0) goto LAB_0255971c;
    }
    else {
      uVar14 = 0;
    }
    lVar12 = local_58[6];
    psVar3 = (short *)(lVar12 + 0x1a);
    do {
      sVar6 = *psVar3;
      cVar9 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar13) {
        *psVar3 = sVar6 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))(local_58);
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_0255971c:
  do {
    lVar12 = *plVar1;
    lVar8 = *(long *)(param_3 + 0x288);
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar12;
      *(long *)(param_3 + 0x288) = lVar8;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  do {
    lVar4 = *plVar1;
    lVar5 = *(long *)(param_3 + 0x288);
    if (lVar4 != lVar12 || lVar5 != lVar8) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_025597a4;
    }
    cVar9 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = 0;
      *(long *)(param_3 + 0x284) = lVar8;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  bVar13 = true;
LAB_025597a4:
  if (!bVar13) {
    do {
      lVar12 = *plVar1;
      lVar8 = *(long *)(param_3 + 0x288);
      if (lVar12 != lVar4 || lVar8 != lVar5) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x025598a0;
      }
      cVar9 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = 0;
        *(long *)(param_3 + 0x284) = lVar5;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar13 = true;
joined_r0x025598a0:
    if (!bVar13) {
      do {
        lVar4 = *plVar1;
        lVar5 = *(long *)(param_3 + 0x288);
        if (lVar4 != lVar12 || lVar5 != lVar8) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar12 = lVar4;
          lVar8 = lVar5;
          goto joined_r0x025598a0;
        }
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = 0;
          *(long *)(param_3 + 0x284) = lVar8;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      bVar13 = true;
      lVar12 = lVar4;
      lVar8 = lVar5;
      goto joined_r0x025598a0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_3 + 0x290));
  return uVar14;
}


