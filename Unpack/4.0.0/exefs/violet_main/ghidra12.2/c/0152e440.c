/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152e440; name: FUN_0152e440
 */


undefined8 FUN_0152e440(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long *plVar10;
  long *local_18;
  
  uVar5 = FUN_00c92df0(param_1,1,0);
  uVar6 = FUN_00c92df0(param_1,2,0);
  puVar8 = (undefined8 *)FUN_00c41a10(param_1,3);
  if ((puVar8 == (undefined8 *)0x0) || (pcVar9 = (char *)*puVar8, (char *)*puVar8 == (char *)0x0)) {
    if ((*PTR_DAT_047d3d48 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_047d3d48);
      pcVar9 = PTR_DAT_047d3d50;
      if (iVar7 != 0) {
        *PTR_DAT_047d3d50 = 0;
        *(undefined8 *)(pcVar9 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3f60,pcVar9,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3d48);
      }
    }
    else {
      pcVar9 = PTR_DAT_047d3d50;
    }
  }
  if (((DAT_04805968 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04805968), iVar7 != 0)) {
    __cxa_guard_release(&DAT_04805968);
  }
  if (*pcVar9 == '\x01') {
    plVar10 = *(long **)(pcVar9 + 8);
    if (plVar10 == (long *)0x0) goto LAB_0152e4d0;
    plVar1 = plVar10 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*pcVar9 != '\0') {
      plVar10 = (long *)0x0;
      goto LAB_0152e4d0;
    }
    plVar10 = *(long **)(pcVar9 + 8);
    if (plVar10 == (long *)0x0) goto LAB_0152e4d0;
    plVar1 = plVar10 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_0152e4d0:
  local_18 = plVar10;
  FUN_0152e62c(uVar5,uVar6,&local_18);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return 0;
}


