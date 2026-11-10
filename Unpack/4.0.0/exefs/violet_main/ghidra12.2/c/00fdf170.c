/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdf170; name: FUN_00fdf170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fdf170(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  long *local_28;
  
  if (DAT_04835c50 != (code *)0x0) {
    lVar6 = *(long *)(DAT_04835c08 + 0x28);
    if (((lVar6 == 0) || (plVar7 = *(long **)(lVar6 + 0x50), plVar7 == (long *)0x0)) ||
       (*(int *)(lVar6 + 0x40) != 0)) {
      bVar8 = true;
      local_28 = (long *)0x0;
    }
    else {
      plVar1 = plVar7 + 5;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar6 == -1) {
LAB_00fdf37c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_28 = plVar7;
      if ((int)lVar6 == -1) goto LAB_00fdf37c;
      bVar8 = false;
    }
    plVar7 = local_28;
    (*DAT_04835c50)(&DAT_04835c70,&local_28);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_00fdf310;
    }
    if (!bVar8) {
      plVar1 = plVar7 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if ((int)lVar6 == 0) goto LAB_00fdf310;
    }
  }
  plVar7 = DAT_04835c30;
  DAT_04835c20._0_2_ = 0;
  ram0x04835c24 = 0;
  DAT_04835c28._4_4_ = 0;
  DAT_04835c30 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
LAB_00fdf310:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  pcVar5 = DAT_04835c58;
  DAT_04835c40 = 0;
  DAT_04835c38._0_4_ = 1;
  if (DAT_04835c58 != (code *)0x0) {
    DAT_04835c60 = 0;
    DAT_04835c68 = 0;
    DAT_04835c50 = (code *)0x0;
    DAT_04835c58 = (code *)0x0;
    (*pcVar5)(&DAT_04835c70);
  }
  DAT_04835c10 = 0;
  return;
}


