/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc0a9c; name: FUN_01dc0a9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01dc0a9c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_38;
  
  plVar9 = (long *)FUN_00fee8fc(&local_70);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) {
LAB_01dc0ca0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar12 = *(undefined8 *)(param_1 + 0xa10);
  local_70 = 0x9fae777492ce2cf6;
  pcStack_68 = "FSYS_SCENARIO_GAME_CLEAR";
  local_60 = 0x18;
  local_58 = (long *)0x0;
  uVar7 = FUN_01dee378(&local_70);
  iVar8 = FUN_017e4040(uVar12,uVar7 & 1);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (iVar8 == 0) {
LAB_01dc0c38:
    uVar12 = 0;
    if (plVar9 != (long *)0x0) {
LAB_01dc0c40:
      plVar1 = plVar9 + 5;
      do {
        lVar10 = *plVar1;
        iVar8 = (int)lVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar10 == 0) {
LAB_01dc0d60:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    return uVar12;
  }
  iVar13 = 0;
  plVar1 = plVar9 + 5;
LAB_01dc0b20:
  iVar14 = 0;
  if (plVar9 == (long *)0x0) {
    do {
      local_38 = (long *)0x0;
      FUN_00f139bc(param_1,&local_38,iVar13,iVar14);
      if (((((*(byte *)(*(long *)(_DAT_00000070 + 0x10) + 4) >> 2 & 1) != 0) ||
           (sVar6 = FUN_00cf44f4(), sVar6 != 0)) &&
          (uVar11 = FUN_00cf4cfc(_DAT_00000070), (uVar11 & 1) == 0)) &&
         ((*(ushort *)(*(long *)(_DAT_00000070 + 0x10) + 4) >> 2 & 1) == 0)) goto LAB_01dc0bd4;
      iVar14 = iVar14 + 1;
    } while (iVar14 != 0x1e);
  }
  else {
    do {
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_38 = plVar9;
      if ((int)lVar10 == -1) goto LAB_01dc0ca0;
      FUN_00f139bc(param_1,&local_38,iVar13,iVar14);
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 5;
        do {
          lVar10 = *plVar2;
          iVar5 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar10 == 0) goto LAB_01dc0d60;
      }
      lVar10 = plVar9[0xe];
      if ((*(byte *)(*(long *)(lVar10 + 0x10) + 4) >> 2 & 1) == 0) {
        sVar6 = FUN_00cf44f4();
        if (sVar6 != 0) {
          lVar10 = plVar9[0xe];
          goto LAB_01dc0b9c;
        }
      }
      else {
LAB_01dc0b9c:
        uVar11 = FUN_00cf4cfc(lVar10);
        if (((uVar11 & 1) == 0) && ((*(ushort *)(*(long *)(plVar9[0xe] + 0x10) + 4) >> 2 & 1) == 0))
        goto LAB_01dc0bd4;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 0x1e);
  }
  goto LAB_01dc0bc0;
LAB_01dc0bd4:
  do {
    lVar10 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)lVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_78 = plVar9;
  if ((int)lVar10 == -1) goto LAB_01dc0ca0;
  uVar11 = FUN_020eb4f0(&local_78);
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar10 = *plVar2;
      iVar14 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar14;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar10 == 0) goto LAB_01dc0d60;
  }
  if ((uVar11 & 1) != 0) {
    uVar12 = 1;
    goto LAB_01dc0c40;
  }
LAB_01dc0bc0:
  iVar13 = iVar13 + 1;
  if (iVar13 == iVar8) goto LAB_01dc0c38;
  goto LAB_01dc0b20;
}


