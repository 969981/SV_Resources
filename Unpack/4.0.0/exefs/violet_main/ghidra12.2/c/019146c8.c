/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019146c8; name: FUN_019146c8
 */


undefined8 FUN_019146c8(long param_1)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  
  lVar9 = *(long *)(param_1 + 0x88);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01914728;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01914728:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return 0;
        }
        plVar12 = (long *)(lVar9 + -0x28);
        plVar8 = (long *)FUN_01400aa8();
        if ((((*plVar8 == 0) || (*(short *)(*plVar8 + 0x1a) == 0)) ||
            (lVar10 = *plVar8, lVar10 == 0)) || (*(short *)(lVar10 + 0x1a) == 0)) goto LAB_0191476c;
        psVar1 = (short *)(lVar10 + 0x1a);
        sVar11 = *(short *)(lVar10 + 0x1a);
        goto LAB_019147e0;
      }
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  return 0;
LAB_019147e0:
  sVar3 = *psVar1;
  if (sVar3 == sVar11) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar11 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_01914804;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01914804:
    bVar5 = false;
  }
  if (bVar5) {
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + -0x28);
      uVar6 = FUN_01e1c638(plVar12);
      if (uVar6 < 0x19) {
        uVar2 = *(undefined4 *)(&DAT_03d305c0 + (ulong)uVar6 * 4);
      }
      else {
        uVar2 = 0;
      }
      FUN_01e1e460(plVar8,uVar2);
      iVar7 = FUN_01dfb810();
      if (iVar7 == 1) {
        FUN_01e1e4cc(*(undefined8 *)(lVar9 + 0x1c0));
      }
      else {
        switch(iVar7) {
        case 2:
          FUN_01e1e4e4(*(undefined8 *)(lVar9 + 0x1c0));
          break;
        case 3:
          FUN_01e1e4fc(*(undefined8 *)(lVar9 + 0x1c0));
          break;
        case 4:
          FUN_01e1e514(*(undefined8 *)(lVar9 + 0x1c0));
          break;
        case 5:
          FUN_01e1e52c(*(undefined8 *)(lVar9 + 0x1c0));
        }
      }
      lVar10 = *(long *)(lVar10 + 8);
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar11 == 0) goto LAB_01914790;
    }
    goto LAB_0191476c;
  }
  sVar11 = sVar3;
  if (sVar3 == 0) {
LAB_0191476c:
    lVar9 = *(long *)(lVar9 + 0x70);
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
      return 0;
    }
    if (sVar11 != 0) {
      return 0;
    }
LAB_01914790:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_019147e0;
}


