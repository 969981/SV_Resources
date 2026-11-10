/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df4a24; name: FUN_01df4a24
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_01df4a24(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *local_38;
  
  plVar9 = (long *)FUN_0119579c(*(undefined8 *)(param_1 + 0x30));
  uVar6 = FUN_01df4e18(*param_2,0);
  uVar7 = FUN_01df4e20(*param_2,0);
  FUN_01d32964(plVar9,0,uVar6);
  FUN_01df4e28(plVar9,0,uVar7);
  FUN_01df4e40(plVar9,0);
  uVar6 = FUN_01df4e18(*param_2,1);
  uVar7 = FUN_01df4e20(*param_2,1);
  FUN_01d32964(plVar9,1,uVar6);
  FUN_01df4e28(plVar9,1,uVar7);
  FUN_01df4e40(plVar9,1);
  uVar6 = FUN_01df4e18(*param_2,2);
  uVar7 = FUN_01df4e20(*param_2,2);
  FUN_01d32964(plVar9,2,uVar6);
  FUN_01df4e28(plVar9,2,uVar7);
  FUN_01df4e40(plVar9,2);
  uVar6 = FUN_01df4e18(*param_2,3);
  uVar7 = FUN_01df4e20(*param_2,3);
  FUN_01d32964(plVar9,3,uVar6);
  FUN_01df4e28(plVar9,3,uVar7);
  FUN_01df4e40(plVar9,3);
  uVar10 = FUN_01195974(*(undefined8 *)(param_1 + 0x30));
  iVar8 = *(int *)(*(long *)(param_1 + 0x30) + 0x108);
  if (iVar8 == 0) {
    lVar11 = FUN_01195854();
    uVar1 = *(undefined1 *)(lVar11 + 0x570);
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar11 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar11;
    plVar13 = *(long **)(lVar11 + 0x1c8);
    plVar4 = *(long **)(lVar11 + 0x1c0);
    do {
      if (plVar4 == plVar13) {
        lVar11 = 0;
        break;
      }
      lVar11 = *plVar4;
      uVar12 = FUN_01df4e98(lVar11 + 0x28);
      plVar4 = plVar4 + 1;
    } while ((uVar12 & 1) == 0);
    local_38 = plVar9;
    if (plVar9 != (long *)0x0) {
      plVar9 = plVar9 + 5;
      do {
        lVar5 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_01df4c94;
    }
    FUN_0152f420(lVar11,&local_38,uVar1,(int)uVar10 + (int)(uVar10 >> 0x20) * 6);
    if (local_38 == (long *)0x0) {
      return;
    }
    plVar9 = local_38 + 5;
    do {
      iVar8 = (int)*plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      (**(code **)(*local_38 + 0x10))();
      return;
    }
  }
  else {
    if (iVar8 != 1) {
      return;
    }
    if (((*PTR_DAT_047d4568 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar8 != 0)) {
      FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4568);
    }
    lVar11 = *(long *)PTR_DAT_047d4570;
    *(long *)PTR_DAT_047d4578 = lVar11;
    plVar13 = *(long **)(lVar11 + 0x28);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    plVar4 = plVar13 + 5;
    do {
      lVar11 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = (int)lVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar11 == -1) {
LAB_01df4c94:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    (**(code **)(*plVar13 + 0x38))(plVar13,uVar10 >> 0x20,plVar9);
    do {
      iVar8 = (int)*plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01df4d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x10))(plVar13);
      return;
    }
  }
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


