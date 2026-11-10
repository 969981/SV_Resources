/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02992374; name: FUN_02992374
 */


void FUN_02992374(long param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  short sVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  ulong uVar15;
  
  uVar15 = 0;
  uVar2 = (uint)param_2 & 0xff;
  param_2 = param_2 & 0xff;
  do {
    cVar3 = *(char *)((long)param_3 + uVar15 + 8);
    if (-1 < cVar3) {
      for (plVar11 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x290) +
                                                   8) + 0x50) + 0x38); plVar11 != (long *)0x0;
          plVar11 = (long *)*plVar11) {
        if ((*(uint *)((long)plVar11 + 0x14) == uVar2) && (*(char *)(plVar11 + 3) == cVar3)) {
          iVar14 = *(int *)(plVar11 + 2);
          goto LAB_029923f8;
        }
      }
    }
    iVar14 = 0;
LAB_029923f8:
    plVar11 = (long *)(**(code **)(*(long *)*param_3 + 0x68))((long *)*param_3,uVar15 & 0xffffffff);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 5;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    uVar8 = FUN_00cf44f4(plVar11[0xe]);
    uVar9 = FUN_00cf41a8(plVar11[0xe]);
    uVar5 = FUN_00cec028(plVar11);
    uVar6 = FUN_00e9980c(plVar11);
    sVar10 = FUN_00e974e0(plVar11[0xe]);
    bVar7 = FUN_00cf4c90(plVar11,2);
    if (uVar2 < 5) {
      lVar12 = *(long *)(*(long *)(param_1 + 0x170) + 0x250);
      piVar13 = (int *)(lVar12 + param_2 * 0x60 + uVar15 * 0x10 + 0x10);
      if (*piVar13 == 0) {
        *piVar13 = iVar14;
        lVar12 = lVar12 + param_2 * 0x60 + uVar15 * 0x10;
        *(undefined2 *)(lVar12 + 0x14) = uVar8;
        *(undefined2 *)(lVar12 + 0x16) = uVar9;
        *(undefined1 *)(lVar12 + 0x18) = uVar5;
        *(undefined1 *)(lVar12 + 0x19) = uVar6;
        *(bool *)(lVar12 + 0x1a) = sVar10 != 0;
        *(byte *)(lVar12 + 0x1d) = bVar7 & 1;
      }
      lVar12 = *(long *)(*(long *)(param_1 + 0x150) + 0x250);
      piVar13 = (int *)(lVar12 + param_2 * 0x60 + uVar15 * 0x10 + 0x10);
      if (*piVar13 == 0) {
        *piVar13 = iVar14;
        lVar12 = lVar12 + param_2 * 0x60 + uVar15 * 0x10;
        *(undefined2 *)(lVar12 + 0x14) = uVar8;
        *(undefined2 *)(lVar12 + 0x16) = uVar9;
        *(undefined1 *)(lVar12 + 0x18) = uVar5;
        *(undefined1 *)(lVar12 + 0x19) = uVar6;
        *(bool *)(lVar12 + 0x1a) = sVar10 != 0;
        *(byte *)(lVar12 + 0x1d) = bVar7 & 1;
      }
    }
    plVar1 = plVar11 + 5;
    do {
      lVar12 = *plVar1;
      iVar14 = (int)lVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == 6) {
      return;
    }
  } while( true );
}


