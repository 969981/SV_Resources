/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0129ede4; name: FUN_0129ede4
 */


void FUN_0129ede4(long param_1,byte param_2)

{
  short *psVar1;
  ulong uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  byte local_18 [8];
  
  if (*(char *)(param_1 + 0x52) != '\0') {
    return;
  }
  plVar10 = *(long **)(param_1 + 0x40);
  local_18[0] = param_2 & 1;
  uVar7 = FUN_00e9a60c(plVar10 + 5);
  if (((uVar7 & 1) != 0) && (uVar7 = (**(code **)(*plVar10 + 0x128))(plVar10), (uVar7 & 1) != 0)) {
    uVar7 = plVar10[0x1a];
    uVar9 = (uint)uVar7;
    uVar6 = uVar9 | 2;
    if ((param_2 & 1) == 0) {
      uVar6 = uVar9 & 0xd;
    }
    if (((~uVar9 & 0xf) == 0) != ((uVar6 & 0xf) == 0xf)) {
      (**(code **)(*plVar10 + 0xe0))(plVar10,(uVar6 & 0xf) == 0xf);
      uVar7 = plVar10[0x1a];
    }
    uVar2 = 2;
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    plVar10[0x1a] = uVar7 & 0xfffffffffffffffd | uVar2;
  }
  plVar11 = (long *)plVar10[0xf];
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar12 = plVar11[6];
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_0129f000:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
    *(undefined8 *)(lVar12 + 8) = uVar8;
    *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) goto LAB_0129f020;
  lVar12 = plVar11[6];
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar3 == 0) goto LAB_0129f048;
  plVar10 = (long *)plVar10[0xf];
  if (plVar10 == (long *)0x0) {
    FUN_00e9a240(0,local_18);
  }
  else {
    lVar12 = plVar10[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0129f000;
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar8;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_0129f020:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_00e9a240(plVar10,local_18);
    lVar12 = plVar10[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar3 == 0) {
LAB_0129f048:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


