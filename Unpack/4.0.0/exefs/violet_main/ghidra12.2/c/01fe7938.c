/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fe7938; name: FUN_01fe7938
 */


byte FUN_01fe7938(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  byte unaff_w20;
  
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar12 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01fe799c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01fe799c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar6 + 0x360);
          if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) goto LAB_01fe79c0;
          psVar1 = (short *)(lVar7 + 0x1a);
          sVar12 = *(short *)(lVar7 + 0x1a);
          goto LAB_01fe79ec;
        }
        break;
      }
      sVar12 = sVar2;
    } while (sVar2 != 0);
  }
  goto LAB_01fe7950;
LAB_01fe7a68:
  sVar2 = *psVar1;
  if (sVar2 == sVar12) {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar12 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01fe7a8c;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01fe7a8c:
    bVar5 = false;
  }
  if (!bVar5) goto code_r0x01fe7a94;
  lVar8 = *(long *)(lVar8 + 0x10);
  if (lVar8 == 0) {
LAB_01fe7a34:
    bVar4 = true;
  }
  else {
    lVar10 = 0;
    if (*(long **)(lVar7 + 8) != (long *)0x0) {
      lVar10 = **(long **)(lVar7 + 8);
    }
    plVar9 = *(long **)(lVar8 + 8);
    if (plVar9 == (long *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar9;
    }
    unaff_w20 = lVar10 == lVar11;
    psVar1 = (short *)((long)plVar9 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar12 == 1) {
      plVar9[2] = 0;
      (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))();
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    bVar4 = false;
  }
LAB_01fe7a38:
  (**(code **)(*(long *)(lVar7 + -0x28) + 0x60))();
  if (bVar4) goto LAB_01fe79c0;
  bVar4 = false;
  goto LAB_01fe79c4;
code_r0x01fe7a94:
  sVar12 = sVar2;
  if (sVar2 == 0) goto LAB_01fe7a38;
  goto LAB_01fe7a68;
  while (sVar12 = sVar2, sVar2 != 0) {
LAB_01fe79ec:
    sVar2 = *psVar1;
    if (sVar2 == sVar12) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01fe7a10;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01fe7a10:
      bVar4 = false;
    }
    if (bVar4) {
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 != 0) {
        lVar8 = *(long *)(param_1 + 0x48);
        if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) goto LAB_01fe7a34;
        psVar1 = (short *)(lVar8 + 0x1a);
        bVar4 = true;
        sVar12 = *(short *)(lVar8 + 0x1a);
        goto LAB_01fe7a68;
      }
      break;
    }
  }
LAB_01fe79c0:
  bVar4 = true;
LAB_01fe79c4:
  (**(code **)(*(long *)(lVar6 + -0x28) + 0x60))();
  if (!bVar4) goto LAB_01fe7954;
LAB_01fe7950:
  unaff_w20 = 0;
LAB_01fe7954:
  return unaff_w20 & 1;
}


