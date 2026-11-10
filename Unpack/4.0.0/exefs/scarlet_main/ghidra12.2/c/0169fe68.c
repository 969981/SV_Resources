/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169fe68; name: FUN_0169fe68
 */


void FUN_0169fe68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 local_28;
  
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x9d) = 0xff;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  plVar7 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar4 = *plVar1;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_016a0040;
  }
  FUN_016a0110(param_1 + 200);
  plVar7 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar4 = *plVar1;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_016a0040;
  }
  FUN_016a0110(param_1 + 0x188);
  plVar7 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar4 = *plVar1;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_016a0040;
  }
  FUN_016a0110(param_1 + 0x248);
  plVar7 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar4 = *plVar1;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_016a0040;
  }
  FUN_016a0110(param_1 + 0x308);
  plVar7 = *(long **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar4 = *plVar1;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
LAB_016a0040:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_016a0110(param_1 + 0x3c8);
  *(undefined1 *)(param_1 + 0x492) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined8 *)(param_1 + 0x49e) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x4bc) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x4d4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4c4) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x4cc) = 0x3f8000003f800000;
  *(undefined1 *)(param_1 + 0x714) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined2 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x4e4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x4ec) = 0xffffffffffffffff;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar6 != 0))
  {
    local_28 = FUN_00d44228();
    puVar5 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_28);
    FUN_00100190(PTR_LAB_047d9240,puVar5,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  *(undefined8 *)(param_1 + 0x6f4) = 0;
  *(undefined8 *)(param_1 + 0x6fc) = 0;
  *(undefined8 *)(param_1 + 0x6dc) = 0;
  *(undefined8 *)(param_1 + 0x6e4) = 0;
  *(undefined8 *)(param_1 + 0x6ec) = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x4f8) = 0;
  *(undefined2 *)(param_1 + 0x6d8) = 0;
  *(undefined2 *)(param_1 + 0x490) = 0;
  return;
}


