/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01488b38; name: FUN_01488b38
 */


void FUN_01488b38(undefined8 *param_1,long *param_2,undefined8 *param_3,byte param_4)

{
  short *psVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  FUN_00d1a240(param_1,0x800b8080);
  *param_1 = &DAT_045962c8;
  param_1[4] = &PTR_LAB_04596418;
  param_1[5] = &DAT_04596540;
  param_1[6] = &PTR_LAB_04596598;
  puVar12 = param_1 + 7;
  *puVar12 = &PTR_LAB_045965c0;
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x25,0,1);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = *param_3;
  param_1[0x2b] = param_3[1];
  param_1[0x2c] = param_3[2];
  plVar7 = (long *)param_3[3];
  param_1[0x2d] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar9 = tpidr_el0;
    lVar8 = *(long *)(lVar9 + 0x30);
    if (lVar8 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar8 = DAT_04859430;
      *(long *)(lVar9 + 0x30) = DAT_04859430;
    }
  }
  param_1[0x32] = lVar8;
  param_1[0x33] = 0xfffffffffffffff;
  param_1[0x34] = 0;
  param_1[0x36] = &DAT_cbf29ce484222645;
  param_1[0x37] = &DAT_03c886bc;
  *(byte *)((long)param_1 + 0x1d1) = param_4 & 1;
  plVar7 = (long *)param_1[1];
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((long)param_1 + 0x1d2) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = plVar7;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x3d] = &PTR_FUN_045965f8;
  param_1[0x3e] = 0;
  param_1[0x4a] = 0x3ffffffffffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if ((*(char *)(param_1 + 0xb) != '\0') || (*(char *)((long)param_1 + 0x59) != '\0')) {
    uVar3 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],puVar12);
    }
    (**(code **)(param_1[7] + 0x20))(puVar12,uVar3);
    plVar7 = (long *)param_1[1];
  }
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
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar7;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar9 = (**(code **)(*plVar7 + 0x10))(plVar7,0x98,8);
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0xe8))(plVar7);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_014890f8(lVar9,plVar7);
  *(undefined4 *)(lVar9 + 0x18) = 0x80098;
  *(long **)(lVar9 + 8) = plVar7;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  lVar8 = *(long *)(lVar9 + 0x30);
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_01489038:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar2 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar11;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) goto LAB_01489058;
  plVar7 = (long *)param_1[0x29];
  param_1[0x29] = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_01488eac;
  }
  param_1[0x29] = lVar9;
  *(undefined1 *)(lVar9 + 0x90) = 0;
  puVar12 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar12 = (undefined8 *)(*param_2 + 0x38);
  }
  if (((((char *)*puVar12 != (char *)0x0) && (*(char *)*puVar12 != '\0')) &&
      (uVar10 = FUN_00dc5c18(param_1 + 0x3d,1,param_2,0,0), (uVar10 & 1) != 0)) &&
     (plVar7 = (long *)param_1[0x41], plVar7 != (long *)0x0)) {
    lVar8 = plVar7[6];
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_01489038;
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar11;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_01489058:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar8 = plVar7[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01488f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x50))(plVar7);
      return;
    }
    if (sVar2 == 0) {
LAB_01488eac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


