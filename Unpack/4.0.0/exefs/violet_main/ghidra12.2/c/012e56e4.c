/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012e56e4; name: FUN_012e56e4
 */


void FUN_012e56e4(undefined8 *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  long *plVar12;
  long lVar13;
  
  FUN_00cd0d38();
  *param_1 = &PTR_FUN_045e6930;
  param_1[4] = &PTR_LAB_045e69e0;
  param_1[5] = &DAT_045e6a30;
  FUN_012e5ca0(param_1 + 0x6c);
  FUN_012e5ca0(param_1 + 0x7a);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x88),false,0);
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  FUN_012e5ca0(param_1 + 0x8f);
  FUN_012e5ca0(param_1 + 0x9d);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xab),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0xaf));
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  lVar5 = tpidr_el0;
  lVar13 = 0;
  while( true ) {
    plVar12 = (long *)param_1[1];
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
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar12;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x430,0x10);
    if (puVar8 == (undefined8 *)0x0) {
      (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_00cd0d38(puVar8,param_2);
    *puVar8 = &PTR_FUN_045e6a88;
    puVar8[4] = &PTR_LAB_045e6b38;
    puVar8[5] = &DAT_045e6b88;
    puVar8[0x6c] = param_1;
    puVar8[0x6d] = 0;
    puVar8[0x6e] = 0;
    puVar8[0x6f] = 0;
    puVar8[0x70] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
        (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
       (lVar9 = *(long *)(lVar5 + 0x30), lVar9 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar9 = DAT_04859430;
      *(long *)(lVar5 + 0x30) = DAT_04859430;
    }
    puVar8[0x71] = lVar9;
    puVar8[0x73] = 0;
    *(undefined4 *)(puVar8 + 0x74) = 0;
    puVar8[0x75] = 0;
    puVar8[0x72] = 0xaaaaaaaaaaaaaaa;
    puVar8[0x76] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
        (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
       (lVar9 = *(long *)(lVar5 + 0x30), lVar9 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar9 = DAT_04859430;
      *(long *)(lVar5 + 0x30) = DAT_04859430;
    }
    puVar8[0x77] = lVar9;
    puVar8[0x79] = 0;
    *(undefined4 *)(puVar8 + 0x7a) = 0;
    puVar8[0x78] = 0xaaaaaaaaaaaaaaa;
    puVar8[0x7b] = 0;
    *(undefined1 *)(puVar8 + 0x7c) = 0;
    nn::os::InitializeMutex((MutexType *)(puVar8 + 0x7e),false,0);
    nn::os::InitializeConditionVariable((ConditionVariableType *)(puVar8 + 0x82));
    *(int *)(puVar8 + 0x83) = (int)lVar13;
    puVar8[0x84] = 0;
    *(undefined4 *)(puVar8 + 3) = 0x100430;
    puVar8[1] = plVar12;
    puVar8[2] = puVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    lVar7 = puVar8[6];
    if (*(long *)(lVar7 + 0x10) == 0) break;
    psVar1 = (short *)(lVar7 + 0x1a);
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
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar10;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar12 = (long *)param_1[lVar13 + 0x8c];
    param_1[lVar13 + 0x8c] = 0;
    if (plVar12 != (long *)0x0) {
      lVar7 = plVar12[6];
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
        (**(code **)(*plVar12 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    lVar7 = lVar13 + 1;
    param_1[lVar13 + 0x8c] = puVar8;
    lVar13 = lVar7;
    if (lVar7 == 3) {
      if (*(int *)(param_1 + 0x4a) != 1) {
        pcVar11 = (code *)param_1[0x5d];
        if (pcVar11 != (code *)0x0) {
          param_1[0x5e] = 0;
          param_1[0x5f] = 0;
          param_1[0x5c] = 0;
          param_1[0x5d] = 0;
          (*pcVar11)(param_1 + 0x60);
        }
        param_1[0x5c] = FUN_028af5f0;
        param_1[0x5d] = &LAB_02c79e1c;
        param_1[0x5e] = &LAB_02c79e20;
        param_1[0x5f] = &LAB_02c79e2c;
        param_1[0x60] = param_1;
        *(undefined4 *)(param_1 + 0x4a) = 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
}


