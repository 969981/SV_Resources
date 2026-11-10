/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00962724; name: FUN_00962724
 */


void FUN_00962724(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar7 = FUN_00c4e600();
  iVar4 = *(int *)(lVar7 + 0x12c8);
  iVar1 = iVar4 + 1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (*(int *)(lVar7 + 0x12cc) <= iVar4) {
    *(int *)(lVar7 + 0x12cc) = iVar1;
  }
  plVar8 = *(long **)(param_2 + 8);
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar7 = *plVar2;
      iVar1 = (int)lVar7 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar8 = (long *)*param_1;
  uVar3 = param_1[1];
  uVar10 = param_1[2];
  uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar8 + 0x18))(plVar8,param_2,uVar3,uVar10);
  }
  else {
    FUN_00c48fe8(plVar8,param_2,uVar3,uVar10);
  }
  lVar7 = FUN_00c4e600();
  iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar8 = (long *)FUN_00c4e600();
    if (plVar8[600] != 0) {
      local_60 = plVar8 + plVar8[600] * 3;
      plStack_58 = plVar8;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar11 = (long *)*plVar8;
      plVar2 = plVar8;
      if (plVar8[600] != 0) {
        plVar2 = plVar8 + plVar8[600] * 3;
      }
      if (plVar2 == plVar8) {
        lVar14 = 0;
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        lVar14 = 0;
        plVar12 = plVar8;
        do {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar11) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + lVar14 * 3,plVar12);
            plVar11 = (long *)*plVar12;
            lVar14 = lVar13;
          }
          plVar12 = plVar12 + 3;
          lVar13 = lVar13 + 1;
        } while (plVar2 != plVar12);
      }
      (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + lVar14 * 3,plVar8 + lVar13 * 3);
      plVar8[600] = 0;
    }
    *(undefined4 *)(lVar7 + 0x12cc) = 0;
  }
  return;
}


