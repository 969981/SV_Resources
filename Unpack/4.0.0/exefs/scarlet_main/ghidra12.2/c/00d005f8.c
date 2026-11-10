/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d005f8; name: FUN_00d005f8
 */


void FUN_00d005f8(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  MutexType *pMVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *local_110;
  long *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [12];
  char local_b8;
  long *local_b0 [4];
  long *local_90;
  long *local_80;
  long local_78;
  long lStack_70;
  long local_68;
  long *local_60;
  undefined4 local_58;
  
  if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
    return;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x88) != 0)) {
    puVar11 = (undefined8 *)(*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x88) + 0x28))();
    if (((DAT_04863438 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&DAT_04863438), puVar8 = PTR_DAT_047dd5e0, iVar9 != 0)) {
      if (((*PTR_DAT_047dd5d8 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd5d8), iVar9 != 0)) {
        uVar12 = FUN_0219eba8();
        *(undefined8 *)puVar8 = uVar12;
        __cxa_guard_release(PTR_DAT_047dd5d8);
      }
      DAT_04863430 = puVar8;
      __cxa_guard_release(&DAT_04863438);
    }
    for (; puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
      if ((undefined **)puVar11 == &DAT_04863430) {
        plVar1 = param_2 + 0x2c;
        goto LAB_00d00798;
      }
    }
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x88);
  }
  if (lVar10 == param_1) {
    plVar1 = param_2 + 0x2c;
    do {
      if ((int)*plVar1 != 0) {
        ClearExclusiveLocal();
        if ((int)*plVar1 != 1) {
          return;
        }
        plVar2 = param_2 + 0x30;
        goto LAB_00d00988;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    *(int *)(param_2 + 0x30) = param_3;
    goto LAB_00d008bc;
  }
  local_80 = (long *)param_2[8];
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  local_78 = param_2[9];
  lStack_70 = param_2[10];
  local_68 = param_2[0xb];
  local_60 = (long *)param_2[0xc];
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x18))();
  }
  local_58 = (undefined4)param_2[0xd];
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  uVar12 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar12;
  FUN_00cf9078(local_c8,uVar12,&local_80);
  plVar1 = param_2 + 0x2c;
  do {
    if ((int)*plVar1 != 0) {
      ClearExclusiveLocal();
      if ((int)*plVar1 != 1) goto LAB_00d00864;
      plVar1 = param_2 + 0x30;
      goto LAB_00d00848;
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(int *)(param_2 + 0x30) = param_3;
  goto LAB_00d00748;
  while( true ) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') break;
LAB_00d00798:
    if ((int)*plVar1 != 0) {
      ClearExclusiveLocal();
      if ((int)*plVar1 != 1) {
        return;
      }
      plVar2 = param_2 + 0x30;
      goto LAB_00d0081c;
    }
  }
  *(int *)(param_2 + 0x30) = param_3;
  goto LAB_00d007b0;
  while( true ) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = param_3;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') break;
LAB_00d00988:
    if ((int)*plVar2 != 1) goto LAB_00d009a0;
  }
LAB_00d008bc:
  if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
    return;
  }
  do {
    if ((int)*plVar1 != 1) {
LAB_00d009a0:
      ClearExclusiveLocal();
      return;
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = 2;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  goto LAB_00d007d4;
  while( true ) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = param_3;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') break;
LAB_00d0081c:
    if ((int)*plVar2 != 1) goto LAB_00d009a0;
  }
LAB_00d007b0:
  if ((*(byte *)(param_2 + 0x3d) & 1) != 0) {
    return;
  }
  do {
    if ((int)*plVar1 != 1) goto LAB_00d009a0;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = 2;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00d007d4:
  local_c8 = (**(code **)(*param_2 + 0x68))(param_2);
  *(undefined4 *)(param_2 + 0x2c) = 3;
  FUN_00d00de0(param_2,local_c8);
  return;
  while( true ) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *(int *)plVar1 = param_3;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') break;
LAB_00d00848:
    if ((int)*plVar1 != 1) {
      ClearExclusiveLocal();
      goto LAB_00d00864;
    }
  }
LAB_00d00748:
  if ((*(byte *)(param_2 + 0x3d) & 1) == 0) {
    if ((local_c8[0] == '\0') || (local_b8 == '\0')) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x558));
      lVar10 = param_2[6];
      local_108 = param_2;
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00d00d98;
      psVar3 = (short *)(lVar10 + 0x1a);
      do {
        sVar5 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar12;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) goto LAB_00d00db8;
      FUN_0170c7f8(param_1 + (long)param_3 * 0x70 + 0x478,&local_108);
      if (local_108 != (long *)0x0) {
        lVar10 = local_108[6];
        psVar3 = (short *)(lVar10 + 0x1a);
        do {
          sVar5 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*local_108 + 0x50))();
        }
        else if (sVar5 == 0) goto LAB_00d00c9c;
      }
      nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x578));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x558));
    }
    else {
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = (long *)0x0;
      uStack_e0 = 0;
      local_108 = (long *)(PTR_DAT_047e23d0 + 0x10);
      local_f8 = 0;
      uStack_f0 = 0;
      local_100 = 0;
      uVar13 = FUN_00cfbaf4(&local_108,1,local_b0,0,0);
      plVar1 = local_e8;
      if (((uVar13 & 1) != 0) && (local_e8 != (long *)0x0)) {
        lVar10 = local_e8[6];
        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00d00d98;
        psVar3 = (short *)(lVar10 + 0x1a);
        do {
          sVar5 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar12;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) goto LAB_00d00db8;
        lVar10 = plVar1[6];
        psVar3 = (short *)(lVar10 + 0x1a);
        do {
          sVar5 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar1 + 0x50))(plVar1);
        }
        else if (sVar5 == 0) goto LAB_00d00c9c;
      }
      FUN_01db74ec(param_2 + 0x2b,local_100);
      nn::os::LockMutex((MutexType *)(param_1 + 0x440));
      lVar10 = param_2[6];
      local_110 = param_2;
      if (*(long *)(lVar10 + 0x10) == 0) {
LAB_00d00d98:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar3 = (short *)(lVar10 + 0x1a);
      do {
        sVar5 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar12;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) {
LAB_00d00db8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      FUN_0170c7f8(param_1 + (long)param_3 * 0x70 + 0x360,&local_110);
      if (local_110 != (long *)0x0) {
        lVar10 = local_110[6];
        psVar3 = (short *)(lVar10 + 0x1a);
        do {
          sVar5 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*local_110 + 0x50))();
        }
        else if (sVar5 == 0) {
LAB_00d00c9c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x440));
      lVar10 = *(long *)(param_1 + 0x460);
      pMVar4 = (MutexType *)(lVar10 + 0x3f0);
      nn::os::LockMutex(pMVar4);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar10 + 0x410));
      nn::os::UnlockMutex(pMVar4);
      lVar10 = *(long *)(param_1 + 0x468);
      pMVar4 = (MutexType *)(lVar10 + 0x3f0);
      nn::os::LockMutex(pMVar4);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar10 + 0x410));
      nn::os::UnlockMutex(pMVar4);
      lVar10 = *(long *)(param_1 + 0x470);
      pMVar4 = (MutexType *)(lVar10 + 0x3f0);
      nn::os::LockMutex(pMVar4);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar10 + 0x410));
      nn::os::UnlockMutex(pMVar4);
      FUN_00cfb194(&local_108);
    }
LAB_00d00864:
  }
  if (local_c8[0] != '\0') {
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_b0[0] != (long *)0x0) {
      (**(code **)(*local_b0[0] + 0x20))();
    }
    local_c8._0_8_ = local_c8._0_8_ & 0xffffffffffffff00;
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


