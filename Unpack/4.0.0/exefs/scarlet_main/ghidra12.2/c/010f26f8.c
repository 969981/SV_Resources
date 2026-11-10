/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f26f8; name: FUN_010f26f8
 */


long FUN_010f26f8(long param_1,int param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  short sVar5;
  undefined8 uVar6;
  ulong uVar7;
  long **pplVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long *local_38;
  long *local_18;
  
  uVar9 = (uint)param_3;
  if (param_2 == 0) {
    if (0x20 < uVar9) {
      return 0;
    }
    if (0x1d < param_4) {
      return 0;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    plVar10 = *(long **)(param_1 + 0x48);
    local_18 = plVar10;
    if (plVar10 == (long *)0x0) {
      pplVar8 = &local_18;
LAB_010f28cc:
      FUN_00f139bc(uVar6,pplVar8,param_3,param_4);
      goto LAB_010f2788;
    }
    plVar1 = plVar10 + 5;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar11 == -1) {
LAB_010f28e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00f139bc(uVar6,&local_18,param_3,param_4);
    if (plVar10 == (long *)0x0) goto LAB_010f2788;
    plVar1 = plVar10 + 5;
    do {
      iVar4 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      lVar11 = *plVar10;
LAB_010f280c:
      (**(code **)(lVar11 + 0x10))(plVar10);
      goto LAB_010f2788;
    }
  }
  else {
    if (1 < param_2 - 1U) {
      return 0;
    }
    if (uVar9 == 0) {
      plVar10 = *(long **)(param_1 + 0x30);
      if (param_4 < *(byte *)(plVar10 + 0x12)) {
                    /* WARNING: Could not recover jumptable at 0x010f2800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar11 = (**(code **)(*plVar10 + 0x60))(plVar10,param_4);
        return lVar11;
      }
      return 0;
    }
    iVar4 = uVar9 - 1;
    uVar7 = FUN_010f2930(*(undefined8 *)(param_1 + 0x40),iVar4,param_4);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    param_3 = FUN_01dc71b0(*(undefined8 *)(param_1 + 0x40),iVar4,param_4);
    param_3 = param_3 & 0xffffffff;
    param_4 = FUN_01dc71d4(*(undefined8 *)(param_1 + 0x40),iVar4,param_4);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    plVar10 = *(long **)(param_1 + 0x48);
    local_38 = plVar10;
    if (plVar10 == (long *)0x0) {
      pplVar8 = &local_38;
      goto LAB_010f28cc;
    }
    plVar1 = plVar10 + 5;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar11 == -1) goto LAB_010f28e0;
    FUN_00f139bc(uVar6,&local_38,param_3,param_4);
    if (plVar10 == (long *)0x0) goto LAB_010f2788;
    plVar1 = plVar10 + 5;
    do {
      iVar4 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      lVar11 = *plVar10;
      goto LAB_010f280c;
    }
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_010f2788:
  lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x70);
  if ((*(byte *)(*(long *)(lVar11 + 0x10) + 4) >> 2 & 1) != 0) {
    return *(long *)(param_1 + 0x48);
  }
  sVar5 = FUN_00cf44f4(lVar11);
  if (sVar5 == 0) {
    return 0;
  }
  return *(long *)(param_1 + 0x48);
}


