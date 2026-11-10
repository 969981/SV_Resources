/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01497840; name: FUN_01497840
 */


undefined8 FUN_01497840(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long *plVar9;
  
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar7 == (undefined8 *)0x0) || (pcVar8 = (char *)*puVar7, (char *)*puVar7 == (char *)0x0)) {
    if ((*PTR_DAT_047d3b00 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047d3b00);
      pcVar8 = PTR_DAT_047d3b08;
      if (iVar6 != 0) {
        *PTR_DAT_047d3b08 = 0;
        *(undefined8 *)(pcVar8 + 8) = 0;
        FUN_00100190(PTR_LAB_047d44c0,pcVar8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3b00);
      }
    }
    else {
      pcVar8 = PTR_DAT_047d3b08;
    }
  }
  if (((DAT_04855b40 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04855b40), iVar6 != 0)) {
    __cxa_guard_release(&DAT_04855b40);
  }
  if (*pcVar8 == '\x01') {
    plVar9 = *(long **)(pcVar8 + 8);
    if (plVar9 == (long *)0x0) goto LAB_014978a8;
    plVar1 = plVar9 + 5;
    do {
      iVar6 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*pcVar8 != '\0') {
      plVar9 = (long *)0x0;
      goto LAB_014978a8;
    }
    plVar9 = *(long **)(pcVar8 + 8);
    if (plVar9 == (long *)0x0) goto LAB_014978a8;
    plVar1 = plVar9 + 5;
    do {
      iVar6 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_014978a8:
  iVar6 = FUN_01497a08(plVar9[6]);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00c5d960(param_1,(long)iVar6);
  return 1;
}


