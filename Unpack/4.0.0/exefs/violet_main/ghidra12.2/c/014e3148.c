/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e3148; name: FUN_014e3148
 */


void FUN_014e3148(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  long *local_70;
  int local_68;
  int local_64;
  
  iVar12 = 0;
  do {
    iVar7 = 1;
    if (*(int *)(param_1 + 0x298) == 2) {
      iVar7 = 2;
    }
    lVar11 = *(long *)(param_1 + 0x1a8);
    if ((*(int *)(lVar11 + 0x6c38) == iVar7) && (*(byte *)(lVar11 + 0x6c3c) == param_2)) {
      local_64 = 0;
      local_68 = 0;
      FUN_014e2aa0(iVar7,iVar12,&local_64,&local_68);
      uVar2 = *(uint *)(lVar11 + 0x6c3c);
      uVar6 = uVar2 >> 8 & 0x3f;
      if ((local_64 < (int)uVar6 || (int)(uVar6 + (uVar2 >> 0x14 & 0x3f)) <= local_64) ||
         ((uVar6 = uVar2 >> 0xe & 0x3f, local_68 < (int)uVar6 ||
          ((int)(uVar6 + (uVar2 >> 0x1a)) <= local_68)))) goto LAB_014e31ac;
      FUN_014e5cb0(*(undefined8 *)(param_1 + 0x1a8),iVar7,iVar12,0);
      uVar9 = *(undefined8 *)(param_1 + 0x1a8);
      uVar13 = 5;
      if (*(int *)(param_1 + 0x298) != 2) {
        uVar13 = 3;
      }
      local_70 = (long *)0x0;
LAB_014e31f0:
      bVar14 = true;
    }
    else {
LAB_014e31ac:
      plVar8 = (long *)FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar7,param_2,iVar12);
      FUN_014e5cb0(*(undefined8 *)(param_1 + 0x1a8),iVar7,iVar12,0);
      uVar9 = *(undefined8 *)(param_1 + 0x1a8);
      uVar13 = 5;
      if (*(int *)(param_1 + 0x298) != 2) {
        uVar13 = 3;
      }
      local_70 = plVar8;
      if (plVar8 == (long *)0x0) goto LAB_014e31f0;
      plVar8 = plVar8 + 5;
      do {
        lVar11 = *plVar8;
        cVar3 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar14) {
          *(int *)plVar8 = (int)lVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      bVar14 = false;
    }
    plVar8 = local_70;
    FUN_014e63f0(uVar9,&local_70,uVar13,iVar12,0);
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 5;
      do {
        lVar11 = *plVar1;
        iVar5 = (int)lVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (bVar14) {
      FUN_014e36f0(param_1,0,iVar12);
    }
    else {
      FUN_014e5f50(param_1,iVar7,param_2,iVar12);
      FUN_014e6ddc(*(undefined8 *)(param_1 + 0x1a8),3,iVar12,0);
      FUN_014e36f0(param_1,plVar8,iVar12);
      if (*(int *)(param_1 + 0x298) != 1) {
        uVar9 = *(undefined8 *)(param_1 + 0x1a8);
        if ((*(char *)(param_1 + 0x1714) == '\0') ||
           (iVar7 = FUN_014e94fc(param_1,iVar7,param_2,iVar12), iVar7 != 2)) {
          uVar10 = 0;
        }
        else {
          uVar10 = 2;
        }
        FUN_014e56f4(uVar9,uVar13,iVar12,uVar10,0);
      }
    }
    iVar12 = iVar12 + 1;
    if (iVar12 == 6) {
      FUN_014e3420(param_1,param_2);
      return;
    }
  } while( true );
}


