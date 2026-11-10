/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7e5b8; name: FUN_01f7e5b8
 */


void FUN_01f7e5b8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  long *plVar10;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01f7e618;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f7e618:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        plVar9 = (long *)(lVar6 + -0x28);
        FUN_01f7e76c(plVar9);
        FUN_01f7e3bc(plVar9);
        uVar5 = FUN_01f7e7ac(plVar9);
        if ((((uVar5 & 1) != 0) || (lVar7 = *(long *)(param_1 + 0x40), lVar7 == 0)) ||
           (*(short *)(lVar7 + 0x1a) == 0)) goto LAB_01f7e658;
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        goto LAB_01f7e6dc;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_01f7e6dc:
  sVar2 = *psVar1;
  if (sVar2 == sVar8) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01f7e700;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01f7e700:
    bVar4 = false;
  }
  if (bVar4) {
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + -0x28);
      FUN_01f7dfcc(plVar10,0);
      lVar7 = *(long *)(lVar7 + 8);
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
      else if (sVar8 == 0) goto LAB_01f7e67c;
    }
    goto LAB_01f7e658;
  }
  sVar8 = sVar2;
  if (sVar2 == 0) {
LAB_01f7e658:
    lVar6 = *(long *)(lVar6 + 0x70);
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01f7e6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x50))(plVar9);
      return;
    }
    if (sVar8 != 0) {
      return;
    }
LAB_01f7e67c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_01f7e6dc;
}


