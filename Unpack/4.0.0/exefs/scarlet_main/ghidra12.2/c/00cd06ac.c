/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd06ac; name: FUN_00cd06ac
 */


void FUN_00cd06ac(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  
  FUN_00cd0d38();
  *param_1 = &PTR_FUN_045ec320;
  param_1[0x6c] = 0;
  param_1[4] = &PTR_LAB_045ec3d0;
  param_1[5] = &DAT_045ec420;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  lVar8 = tpidr_el0;
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
     (lVar7 = *(long *)(lVar8 + 0x30), lVar7 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar7 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0x70] = lVar7;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x71] = 0x1ffffffffffffff;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
     (lVar7 = *(long *)(lVar8 + 0x30), lVar7 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar7 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0x76] = lVar7;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x77] = 0x1ffffffffffffff;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x7a),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x7e));
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
      (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) &&
     (lVar7 = *(long *)(lVar8 + 0x30), lVar7 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar7 = DAT_04859430;
    *(long *)(lVar8 + 0x30) = DAT_04859430;
  }
  param_1[0x83] = lVar7;
  param_1[0x84] = 0x1fffffffffffffff;
  uVar11 = (long)(param_1[0x81] - param_1[0x80]) >> 3;
  plVar1 = param_1 + 0x80;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  if (uVar11 < param_3) {
    FUN_00cd0f80(plVar1,param_3 - uVar11);
  }
  else if (param_3 < uVar11) {
    FUN_00cdf6f8(plVar1,param_1[0x80] + param_3 * 8);
  }
  if (0 < (int)param_3) {
    uVar11 = 0;
    do {
      plVar12 = (long *)param_1[1];
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
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar12;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      puVar9 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x420,0x10);
      if (puVar9 == (undefined8 *)0x0) {
        (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      FUN_00cd0d38(puVar9,param_2);
      *puVar9 = &PTR_FUN_045ec478;
      puVar9[0x6c] = param_1;
      puVar9[4] = &PTR_LAB_045ec528;
      puVar9[5] = &DAT_045ec578;
      puVar9[0x6e] = 0;
      puVar9[0x6f] = 0;
      puVar9[0x70] = 0;
      puVar9[0x71] = 0;
      nn::os::InitializeMutex((MutexType *)(puVar9 + 0x7e),false,0);
      nn::os::InitializeConditionVariable((ConditionVariableType *)(puVar9 + 0x82));
      *(int *)(puVar9 + 0x83) = (int)uVar11;
      puVar9[1] = plVar12;
      puVar9[2] = puVar9;
      *(undefined4 *)(puVar9 + 3) = 0x100420;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      lVar8 = puVar9[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar10;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      lVar8 = *plVar1;
      plVar12 = *(long **)(lVar8 + uVar11 * 8);
      *(undefined8 *)(lVar8 + uVar11 * 8) = 0;
      if (plVar12 != (long *)0x0) {
        lVar7 = plVar12[6];
        psVar2 = (short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *(undefined8 **)(lVar8 + uVar11 * 8) = puVar9;
      uVar11 = uVar11 + 1;
    } while (uVar11 != (param_3 & 0xffffffff));
  }
  return;
}


