/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017ee800; name: FUN_017ee800
 */


undefined8 FUN_017ee800(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  short sVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  
  lVar7 = param_1[2];
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
    return 0;
  }
  psVar1 = (short *)(lVar7 + 0x1a);
  sVar8 = *(short *)(lVar7 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_017ee864;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_017ee864:
      bVar4 = false;
    }
    if (bVar4) {
      if (*(long *)(lVar7 + 0x10) == 0) {
        return 0;
      }
      plVar11 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
      uVar6 = FUN_01232288(plVar11);
      if ((uVar6 & 1) == 0) goto LAB_017ee9c8;
      lVar7 = *param_1;
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        break;
      }
      plVar10 = (long *)0x0;
      goto LAB_017ee8a0;
    }
    sVar8 = sVar2;
    if (sVar2 == 0) {
      return 0;
    }
  } while( true );
  while( true ) {
    plVar10 = (long *)0x0;
    sVar8 = sVar2;
    if (sVar2 == 0) break;
    sVar2 = *psVar1;
    if (sVar2 == sVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_017eea48;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_017eea48:
      bVar4 = false;
    }
    if (bVar4) {
      plVar10 = (long *)0x0;
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar10 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
      }
      break;
    }
  }
LAB_017ee8a0:
  if (((*PTR_DAT_047d8a30 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8a30), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dcb50,PTR_DAT_047d8a38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a30);
  }
  *(undefined8 *)PTR_DAT_047d8a40 = *(undefined8 *)PTR_DAT_047d8a38;
  if (plVar10 == (long *)0x0) {
LAB_017ee9c8:
    uVar9 = 0;
  }
  else {
    lVar7 = plVar10[0x13];
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar9;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (((long *)plVar10[0x28] == (long *)0x0) ||
       (uVar6 = (**(code **)(*(long *)plVar10[0x28] + 0x10))(), (uVar6 & 1) == 0)) {
      if (((long *)plVar10[0x24] == (long *)0x0) ||
         (uVar6 = (**(code **)(*(long *)plVar10[0x24] + 0x10))(), (uVar6 & 1) == 0)) {
        uVar9 = 0;
      }
      else {
        FUN_021dce84(plVar10,0);
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 1;
      FUN_021dce84(plVar10,1);
    }
    lVar7 = plVar10[0x13];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar8 == 0) goto LAB_017eeab0;
    lVar7 = plVar10[0x13];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar8 == 0) {
LAB_017eeab0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar11 + 0x60))(plVar11);
  return uVar9;
}


