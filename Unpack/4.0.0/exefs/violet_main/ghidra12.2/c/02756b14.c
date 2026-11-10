/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02756b14; name: FUN_02756b14
 */


void FUN_02756b14(long param_1,undefined8 *param_2,float *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long *local_70;
  undefined8 uStack_68;
  long *local_58;
  
  plVar4 = DAT_0485a0e8;
  if (DAT_0485a0e8 != (long *)0x0) {
    plVar1 = DAT_0485a0e8 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar6 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  fVar10 = 0.0;
  FUN_02756de8((float)((double)*(long *)(lVar6 + 8) / 1000000000.0),param_1 + 0x45c);
  uVar12 = FUN_022e4cf4(param_1 + 0x45c);
  uVar7 = FUN_02755f38(param_1 + 0x240);
  if ((uVar7 & 1) != 0) {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar8 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar8;
    FUN_00cf9884(&local_70,uVar8,"Scale");
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (*(long *)(param_1 + 0x238) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x238) + 0x30);
    }
    lVar6 = *plVar1;
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 6;
    }
    lVar9 = *plVar1;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (lVar6 == lVar9) {
      fVar10 = (float)FUN_02756e48(uVar12,0,param_1 + 0x240);
      fVar10 = fVar10 * *param_3;
      FUN_027567e4(CONCAT44(fVar10,fVar10),plVar4,param_1 + 0x450);
    }
  }
  uVar7 = FUN_02755f38(param_1 + 0x2e8);
  if (((((uVar7 & 1) != 0) || (uVar7 = FUN_02755f38(param_1 + 0x340), (uVar7 & 1) != 0)) ||
      (uVar7 = FUN_02755f38(param_1 + 0x398), (uVar7 & 1) != 0)) ||
     (uVar7 = FUN_02755f38(param_1 + 0x3f0), (uVar7 & 1) != 0)) {
    local_70 = (long *)0x0;
    uStack_68 = 0;
    uVar11 = FUN_00c5e7c8(uVar12,param_1 + 0x2a0,&local_70);
    FUN_0135d26c(&local_70,param_1 + 0x298);
    FUN_00c5f008(CONCAT44(fVar10,uVar11),plVar4,param_1 + 0x450,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


