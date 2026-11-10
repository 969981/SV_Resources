/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7e8b8; name: FUN_01f7e8b8
 */


void FUN_01f7e8b8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  
  lVar7 = *(long *)(param_1 + 0x30);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01f7e914;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f7e914:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        lVar8 = *(long *)(param_1 + 0x40);
        plVar10 = (long *)(lVar7 + -0x28);
        if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) goto LAB_01f7e93c;
        psVar1 = (short *)(lVar8 + 0x1a);
        sVar9 = *(short *)(lVar8 + 0x1a);
        goto LAB_01f7e9b8;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_01f7e9b8:
  sVar2 = *psVar1;
  if (sVar2 == sVar9) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01f7e9dc;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01f7e9dc:
    bVar4 = false;
  }
  if (bVar4) {
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 != 0) {
      plVar11 = (long *)(lVar8 + -0x28);
      uVar5 = FUN_01f7e3cc(plVar10);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_01f7e7ac(plVar10);
        if ((uVar5 & 1) != 0) {
          uVar6 = 3;
          goto LAB_01f7ea58;
        }
      }
      else {
        uVar6 = 2;
LAB_01f7ea58:
        FUN_01f7dfcc(plVar11,uVar6);
        FUN_014778b8(plVar10,0);
      }
      lVar8 = *(long *)(lVar8 + 8);
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar9 == 0) goto LAB_01f7e960;
    }
    goto LAB_01f7e93c;
  }
  sVar9 = sVar2;
  if (sVar2 == 0) {
LAB_01f7e93c:
    lVar7 = *(long *)(lVar7 + 0x70);
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01f7e9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x50))(plVar10);
      return;
    }
    if (sVar9 != 0) {
      return;
    }
LAB_01f7e960:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_01f7e9b8;
}


