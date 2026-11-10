/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e3d7fc; name: FUN_00e3d7fc
 */


long * FUN_00e3d7fc(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_8;
  
  plVar6 = (long *)FUN_00cb7028();
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) {
    if (((*PTR_DAT_047d8c18 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c18), iVar5 != 0)) {
      if (((*PTR_DAT_047d8c28 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar5 != 0)) {
        local_8 = FUN_00d44228();
        puVar4 = PTR_DAT_047d8c30;
        FUN_00d1e764(PTR_DAT_047d8c30,&local_8);
        FUN_00100190(PTR_LAB_047d9240,puVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c28);
      }
      plVar7 = (long *)PTR_DAT_047d8c20;
      FUN_01db7420(PTR_DAT_047d8c20,PTR_DAT_047d8c30,0);
      FUN_00100190(PTR_FUN_047dc9f0,plVar7,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c18);
    }
    else {
      plVar7 = (long *)PTR_DAT_047d8c20;
    }
  }
  else {
    plVar7 = plVar6 + 5;
    do {
      lVar3 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = (int)lVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar3 = *plVar7;
      iVar5 = (int)lVar3 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar7 = plVar6 + 7;
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return plVar7;
}


