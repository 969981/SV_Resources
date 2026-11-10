/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01743a48; name: FUN_01743a48
 */


void FUN_01743a48(undefined8 param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_18 [8];
  
  FUN_01743c88();
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar7 != 0))
  {
    FUN_00100190(&LAB_02b6f450,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar8 = *(undefined8 *)PTR_DAT_047d7438;
  *(undefined8 *)PTR_DAT_047d7440 = uVar8;
  FUN_017454d8(uVar8,param_2 & 1);
  FUN_01743d28(param_1);
  if (((*PTR_DAT_047da7c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar7 != 0))
  {
    FUN_00100190(&LAB_02b6f5e4,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da7c0);
  }
  DAT_048420f0 = *(undefined8 *)PTR_DAT_047da7c8;
  FUN_01745290(DAT_048420f0,param_2 & 1);
  FUN_01743dc8(param_1);
  if (((DAT_04842108 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04842108), iVar7 != 0)) {
    FUN_00100190(&LAB_02b6f660,&DAT_048420f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04842108);
  }
  DAT_04842110 = DAT_048420f8;
  FUN_017440c0(DAT_048420f8,param_2 & 1);
  lVar9 = FUN_00f124d8(auStack_18,param_1,&DAT_03d629e8);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar6 = DAT_048420b0;
  DAT_048420b0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 5;
    do {
      lVar5 = *plVar2;
      iVar7 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  DAT_048420b0 = (long *)lVar9;
  return;
}


