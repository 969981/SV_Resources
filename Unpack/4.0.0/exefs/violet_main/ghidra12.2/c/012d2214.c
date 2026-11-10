/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d2214; name: FUN_012d2214
 */


void FUN_012d2214(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ThreadType *pTVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  uint local_6c;
  long local_68;
  long *plStack_60;
  long *local_58;
  
  *param_1 = *param_2;
  plVar14 = param_1 + 1;
  *plVar14 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 6),false,0);
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 100) = 1;
  nn::os::InitializeLightEvent(param_1 + 0xb,0,1);
  plVar10 = param_1 + 0xd;
  FUN_012d2ac0(plVar10);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
     (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
    lVar7 = FUN_01060ed0();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = lVar7;
  param_1[0x23] = 0;
  param_1[0x1e] = 0x1fffffffffffffff;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
     (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
    lVar7 = FUN_01060ed0();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x24] = lVar7;
  param_1[0x2a] = 0;
  param_1[0x25] = 0x1fffffffffffffff;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
     (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
    lVar7 = FUN_01060ed0();
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2b] = lVar7;
  local_68 = *param_1;
  param_1[0x2c] = 0x1fffffffffffffff;
  param_1[0x2d] = 0;
  lVar7 = param_2[1];
  param_1[0x33] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = lVar7;
  param_1[0x30] = 0;
  *(int *)(param_1 + 0x40) = (int)param_2[2];
  *(int *)((long)param_1 + 0x204) = (int)param_2[2];
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((long)param_1 + 0x20c) = 0;
  cVar3 = *(char *)((long)param_2 + 0x14);
  *(char *)((long)param_1 + 0x20d) = cVar3;
  if (local_68 == 0) {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    local_68 = 0;
    if (lVar7 != 0) {
      if (*(long *)(lVar7 + 0x80) == 0) {
        local_68 = 0;
      }
      else {
        local_68 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
      }
    }
    cVar3 = *(char *)((long)param_1 + 0x20d);
    *param_1 = local_68;
  }
  if (cVar3 == '\0') {
    uVar15 = 0;
    local_6c = 0;
    while( true ) {
      plStack_60 = param_1;
      FUN_012d29fc(&local_58,local_68,&local_6c,&plStack_60,param_1 + 0x2f,&local_68);
      plVar16 = param_1 + uVar15 + 3;
      plVar9 = (long *)*plVar16;
      *plVar16 = 0;
      if (plVar9 != (long *)0x0) {
        lVar7 = plVar9[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_012d2690;
      }
      *plVar16 = (long)local_58;
      lVar7 = (long)(int)local_6c;
      lVar13 = param_1[lVar7 + 3];
      puVar12 = (&PTR_s_JobThread0_045ec718)[lVar7];
      *(undefined1 *)(lVar13 + 0x248) = 0;
      *(undefined1 *)(lVar13 + 0x249) = 0;
      *(undefined1 *)(lVar13 + 0x24a) = 0;
      FUN_012e4420(lVar13 + 0x40,puVar12,lVar7,0x10,&LAB_014040e8);
      uVar5 = local_6c;
      FUN_012d28f4(plVar10,*(undefined8 *)(param_1[(long)(int)local_6c + 3] + 0x4f0));
      local_6c = uVar5 + 1;
      uVar15 = (ulong)local_6c;
      if (2 < local_6c) break;
      local_68 = *param_1;
    }
  }
  else {
    pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
    uVar15 = 1;
    nn::os::SetThreadCoreMask(pTVar8,0,1);
    local_68 = *param_1;
    plStack_60 = param_1;
    FUN_012d316c(&local_58,local_68,&plStack_60,&local_68);
    plVar9 = (long *)param_1[3];
    param_1[3] = 0;
    if (plVar9 != (long *)0x0) {
      lVar7 = plVar9[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_012d2690;
    }
    param_1[3] = (long)local_58;
    local_6c = 1;
    do {
      local_68 = *param_1;
      plStack_60 = param_1;
      FUN_012d29fc(&local_58,local_68,&local_6c,&plStack_60,param_1 + 0x2f,&local_68);
      plVar16 = param_1 + uVar15 + 3;
      plVar9 = (long *)*plVar16;
      *plVar16 = 0;
      if (plVar9 != (long *)0x0) {
        lVar7 = plVar9[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_012d2690;
      }
      *plVar16 = (long)local_58;
      lVar7 = (long)(int)local_6c;
      lVar13 = param_1[lVar7 + 3];
      puVar12 = (&PTR_s_JobThread0_045ec718)[lVar7];
      *(undefined1 *)(lVar13 + 0x248) = 0;
      *(undefined1 *)(lVar13 + 0x249) = 0;
      *(undefined1 *)(lVar13 + 0x24a) = 0;
      FUN_012e4420(lVar13 + 0x40,puVar12,lVar7,0x10,&LAB_014040e8);
      uVar5 = local_6c;
      FUN_012d28f4(plVar10,*(undefined8 *)(param_1[(long)(int)local_6c + 3] + 0x4f0));
      local_6c = uVar5 + 1;
      uVar15 = (ulong)local_6c;
    } while (local_6c < 3);
  }
  local_58 = param_1;
  lVar7 = FUN_00da36fc(&plStack_60,*param_1,&local_58);
  if (lVar7 != 0) {
    FUN_00f1b0c8(lVar7);
    lVar13 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar11;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar10 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_012d2690:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[1] = lVar7;
  *(ulong *)(lVar7 + 0x1b8) = *(ulong *)(lVar7 + 0x1b8) | 0x20;
  lVar7 = param_1[3];
  *(undefined4 *)(lVar7 + 0x500) = 0;
  *(undefined8 *)(lVar7 + 0x4f8) = 0;
  lVar7 = param_1[4];
  *(undefined4 *)(lVar7 + 0x500) = 0;
  *(undefined8 *)(lVar7 + 0x4f8) = 0;
  lVar7 = param_1[5];
  *(undefined4 *)(lVar7 + 0x500) = 0;
  *(undefined8 *)(lVar7 + 0x4f8) = 0;
  return;
}


