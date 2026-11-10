/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f324a4; name: FUN_00f324a4
 */


undefined8 FUN_00f324a4(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long *local_58;
  long *local_50;
  undefined1 local_44 [4];
  
  puVar5 = PTR_DAT_047dd610;
  lVar9 = *param_2;
  if (*(long *)(lVar9 + 0x388) != 0) {
    if (*(short *)(*(long *)(lVar9 + 0x388) + 0x1a) != 0) {
      return 1;
    }
    lVar9 = *param_2;
  }
  if (((*PTR_DAT_047dd608 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047dd608), iVar7 != 0))
  {
    iVar7 = *(int *)PTR_DAT_047dd4f0;
    *(int *)PTR_DAT_047dd4f0 = iVar7 + 3;
    if (0x1c < iVar7) goto LAB_00f327dc;
    *(int *)puVar5 = iVar7;
    __cxa_guard_release(PTR_DAT_047dd608);
  }
  uVar6 = *(uint *)puVar5;
  if (0x1f < uVar6) {
    FUN_021a2450();
LAB_00f327dc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("s_offset <= static_cast<int32_t>(SuspendCase::CaseLimit)","GetSuspendCaseOffset",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/game/game_object.h"
               ,0x45a);
  }
  uVar12 = *(ulong *)(lVar9 + 0x438);
  plVar10 = (long *)*param_2;
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00f32790;
    psVar1 = (short *)(lVar9 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar8;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_00f327b0;
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  local_50 = plVar10;
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_00f32790:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar8;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_00f327b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_58 = param_1;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  local_44[0] = (uVar12 & 1L << ((ulong)uVar6 & 0x3f)) == 0;
  uVar11 = (uint)(byte)local_44[0];
  uVar6 = (*(code *)param_1[0x92])(param_1 + 0x96,&local_50,&local_58,local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x60))();
  }
  if (local_50 != (long *)0x0) {
    lVar9 = local_50[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_00f3266c;
  }
  (**(code **)(*param_1 + 0x60))(param_1);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar2 == 0) {
LAB_00f3266c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if ((uVar6 & 0xff) == 0) {
    return 0;
  }
  if (uVar11 != (uVar6 & 0xff00) >> 8) {
    if ((uVar6 >> 8 & 0xff) == 0) {
      FUN_01142c28();
    }
    else {
      FUN_00f740a4(*param_2);
    }
  }
  return 1;
}


