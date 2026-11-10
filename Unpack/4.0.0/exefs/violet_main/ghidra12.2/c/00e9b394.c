/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e9b394; name: FUN_00e9b394
 */


void FUN_00e9b394(undefined8 param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *local_40;
  long *local_38;
  
  plVar7 = (long *)FUN_01e16514();
  if ((((*plVar7 != 0) && (*(short *)(*plVar7 + 0x1a) != 0)) && (lVar9 = *plVar7, lVar9 != 0)) &&
     (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00e9b420;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e9b420:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        if ((param_2 & 1) == 0) {
          *(undefined1 *)(lVar9 + 0x49) = 0;
          goto LAB_00e9b4ac;
        }
        *(undefined1 *)(lVar9 + 0x49) = 1;
        plVar7 = (long *)FUN_00d63f6c(param_1);
        lVar10 = *plVar7;
        if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) goto LAB_00e9b4ac;
        psVar1 = (short *)(lVar10 + 0x1a);
        sVar11 = *(short *)(lVar10 + 0x1a);
        goto LAB_00e9b470;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  return;
LAB_00e9b470:
  sVar2 = *psVar1;
  if (sVar2 == sVar11) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00e9b494;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00e9b494:
    bVar4 = false;
  }
  if (bVar4) {
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 != 0) {
      if (*(long *)(lVar10 + 0x110) == 0) {
        uVar6 = *(uint *)(lVar10 + 0xf8);
      }
      else {
        uVar6 = FUN_00cf44f4(*(undefined8 *)(*(long *)(lVar10 + 0x110) + 0x70));
        uVar6 = uVar6 & 0xffff;
      }
      if ((uVar6 == 0x3c9) || (uVar6 == 0x1a1)) {
        FUN_00c9e664(&local_40,lVar10 + 0xc0);
        lVar8 = (**(code **)(*(long *)local_38[9] + 0x68))();
        uVar13 = *(ulong *)(lVar8 + 0x38);
        uVar12 = *(undefined8 *)(lVar8 + 0x30);
        if (local_38 != (long *)0x0) {
          plVar7 = local_38 + 5;
          do {
            lVar8 = *plVar7;
            iVar5 = (int)lVar8 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *(int *)plVar7 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_38 + 0x10))();
          }
          else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        if (local_40 != (long *)0x0) {
          (**(code **)(*local_40 + 0x60))();
        }
        *(undefined1 *)(lVar9 + 0x50) = 1;
        *(ulong *)(lVar9 + 0x60) = uVar13 & 0xffffffff;
        *(undefined8 *)(lVar9 + 0x58) = uVar12;
        *(undefined1 *)(lVar9 + 0x52) = 1;
      }
      lVar8 = *(long *)(lVar10 + 0x70);
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))();
      }
      else if (sVar11 == 0) goto LAB_00e9b4d0;
    }
    goto LAB_00e9b4ac;
  }
  sVar11 = sVar2;
  if (sVar2 == 0) {
LAB_00e9b4ac:
    lVar10 = *(long *)(lVar9 + 8);
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00e9b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
      return;
    }
    if (sVar11 != 0) {
      return;
    }
LAB_00e9b4d0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_00e9b470;
}


