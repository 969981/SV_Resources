/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0e5d4; name: FUN_01e0e5d4
 */


void FUN_01e0e5d4(long param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  plVar5 = (long *)FUN_00e704ec();
  if (*plVar5 == 0) {
    return;
  }
  if (*(short *)(*plVar5 + 0x1a) == 0) {
    return;
  }
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    return;
  }
  if (*(short *)(lVar6 + 0x1a) == 0) {
    return;
  }
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
      if (cVar3 != '\0') goto LAB_01e0e654;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e0e654:
      bVar4 = false;
    }
    if (bVar4) {
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        return;
      }
      if ((param_2 & 1) == 0) {
        *(undefined1 *)(lVar6 + 0x49) = 0;
        goto LAB_01e0e6a4;
      }
      *(undefined1 *)(lVar6 + 0x49) = 1;
      if ((((*(long *)(param_1 + 0x80) == 0) || (*(short *)(*(long *)(param_1 + 0x80) + 0x1a) == 0))
          || (lVar7 = *(long *)(param_1 + 0x80), lVar7 == 0)) || (*(short *)(lVar7 + 0x1a) == 0))
      goto LAB_01e0e6a4;
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      break;
    }
    sVar8 = sVar2;
    if (sVar2 == 0) {
      return;
    }
  } while( true );
LAB_01e0e728:
  sVar2 = *psVar1;
  if (sVar2 == sVar8) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01e0e74c;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01e0e74c:
    bVar4 = false;
  }
  if (bVar4) {
    if (*(long *)(lVar7 + 0x10) != 0) {
      plVar5 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
      lVar7 = (**(code **)(*plVar5 + 0x68))(plVar5);
      uVar10 = *(ulong *)(lVar7 + 0x38);
      uVar9 = *(undefined8 *)(lVar7 + 0x30);
      *(undefined1 *)(lVar6 + 0x50) = 1;
      *(ulong *)(lVar6 + 0x60) = uVar10 & 0xffffffff;
      *(undefined8 *)(lVar6 + 0x58) = uVar9;
      *(undefined1 *)(lVar6 + 0x52) = 0;
      (**(code **)(*plVar5 + 0x60))(plVar5);
    }
    goto LAB_01e0e6a4;
  }
  sVar8 = sVar2;
  if (sVar2 == 0) {
LAB_01e0e6a4:
    lVar7 = *(long *)(lVar6 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x01e0e714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))((long *)(lVar6 + -0x28));
      return;
    }
    if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  goto LAB_01e0e728;
}


