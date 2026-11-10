/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f8c0a8; name: FUN_00f8c0a8
 */


void FUN_00f8c0a8(long *param_1,undefined8 param_2,undefined4 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  short sVar14;
  undefined8 *puVar15;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  code *pcStack_b8;
  long local_b0 [3];
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  long *local_80;
  
  lVar13 = *param_1;
  if (lVar13 == 0) {
    return;
  }
  sVar14 = *(short *)(lVar13 + 0x1a);
  if (sVar14 == 0) {
    return;
  }
  puVar15 = *(undefined8 **)(lVar13 + 8);
  if (((*PTR_DAT_047dd5c8 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_047dd5c8), puVar6 = PTR_DAT_047dd5e0, iVar8 != 0)) {
    if (((*PTR_DAT_047dd5d8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047dd5d8), iVar8 != 0)) {
      uVar9 = FUN_0219eba8();
      *(undefined8 *)puVar6 = uVar9;
      __cxa_guard_release(PTR_DAT_047dd5d8);
    }
    *(undefined **)PTR_DAT_047dd5d0 = puVar6;
    __cxa_guard_release(PTR_DAT_047dd5c8);
  }
  if (puVar15 == (undefined8 *)0x0) {
    return;
  }
  psVar1 = (short *)(lVar13 + 0x1a);
  while (puVar15 != (undefined8 *)PTR_DAT_047dd5d0) {
    puVar15 = (undefined8 *)*puVar15;
    if (puVar15 == (undefined8 *)0x0) {
      return;
    }
  }
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar14) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00f8c154;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f8c154:
      bVar5 = false;
    }
    if (bVar5) {
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 == 0) {
        return;
      }
      lVar10 = param_1[2];
      local_f8 = 0;
      local_100 = (undefined8 *)0x0;
      FUN_00e9a898(&local_100,param_1 + 3);
      local_f0 = (undefined1)param_1[5];
      local_d8 = (long *)param_1[6];
      local_e8 = param_2;
      local_e0 = param_3;
      if (local_d8 == (long *)0x0) goto LAB_00f8c1e0;
      lVar11 = local_d8[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00f8c504;
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar14 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar9;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) goto LAB_00f8c524;
LAB_00f8c1e0:
      nn::os::LockMutex((MutexType *)(lVar13 + 0x3a8));
      local_c0 = (code *)0x0;
      pcStack_b8 = (code *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_b0[2] = 0;
      local_b0[1] = 0;
      local_b0[0] = lVar10;
      FUN_00e9a898(local_b0 + 1,&local_100);
      local_98 = local_f0;
      local_90 = local_e8;
      local_88 = local_e0;
      local_80 = local_d8;
      if (local_d8 != (long *)0x0) {
        lVar10 = local_d8[6];
        if (*(long *)(lVar10 + 0x10) == 0) {
LAB_00f8c504:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar14 == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar9;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar14 == -1) {
LAB_00f8c524:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      local_d0 = &LAB_0219f068;
      local_c8 = FUN_0219feec;
      local_c0 = FUN_00e9a79c;
      pcStack_b8 = FUN_00e27c0c;
      plVar12 = (long *)(lVar13 + -0x28);
      FUN_00dd17e4(lVar13 + 0x338,&local_d0);
      pcVar7 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (code *)0x0;
        pcStack_b8 = (code *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar7)(local_b0);
      }
      *(undefined8 *)(lVar13 + 0x3d0) = *(undefined8 *)(lVar13 + 0x380);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar13 + 0x3c8));
      nn::os::UnlockMutex((MutexType *)(lVar13 + 0x3a8));
      FUN_017aafec(plVar12);
      if (local_d8 != (long *)0x0) {
        lVar10 = local_d8[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*local_d8 + 0x50))();
        }
        else if (sVar14 == 0) goto LAB_00f8c334;
      }
      puVar15 = local_100;
      if (local_100 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_100 + 3);
        do {
          sVar14 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar14 == 1) {
          piVar2 = (int *)((long)local_100 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_d0 = (undefined1 *)*puVar15;
            FUN_00c44438(lVar10 + 0x8040,&local_d0);
          }
        }
        else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      lVar13 = *(long *)(lVar13 + 8);
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
        return;
      }
      if (sVar14 != 0) {
        return;
      }
LAB_00f8c334:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    sVar14 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
}


