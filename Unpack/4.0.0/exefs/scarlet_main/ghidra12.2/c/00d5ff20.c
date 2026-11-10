/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d5ff20; name: FUN_00d5ff20
 */


undefined8 FUN_00d5ff20(undefined8 param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  char local_38 [8];
  long *local_30;
  long *local_28;
  
  puVar6 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar6 == (undefined8 *)0x0) || (pcVar8 = (char *)*puVar6, pcVar8 == (char *)0x0)) {
    if ((DAT_0480b0a0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_0480b0a0);
      pcVar8 = &DAT_0480b088;
      if (iVar5 != 0) {
        DAT_0480b088 = 0;
        DAT_0480b090 = 0;
        FUN_00100190(FUN_00c937e0,&DAT_0480b088,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0480b0a0);
      }
    }
    else {
      pcVar8 = &DAT_0480b088;
    }
  }
  if ((DAT_0480b0b8 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(&DAT_0480b0b8);
    if (iVar5 != 0) {
      DAT_0480bba8 = '\x01';
      __cxa_guard_release(&DAT_0480b0b8);
    }
  }
  cVar3 = *pcVar8;
  pcVar2 = (code *)PTR_FUN_047d4fb0;
  if (DAT_0480bba8 == '\0') {
    pcVar2 = (code *)0x0;
  }
  if (cVar3 == '\x02') {
    if ((*(long *)(pcVar8 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(pcVar8 + 8) + 0x10), lVar7 == 0)) {
LAB_00d600a4:
      local_28 = (long *)0x0;
    }
    else {
      lVar7 = lVar7 + -0x28;
LAB_00d5ff90:
      (*pcVar2)(&local_28,lVar7);
    }
  }
  else {
    if (cVar3 != '\x03') {
      if (((cVar3 != '\x01') && (cVar3 != '\0')) || (lVar7 = *(long *)(pcVar8 + 8), lVar7 == 0))
      goto LAB_00d600a4;
      goto LAB_00d5ff90;
    }
    FUN_00d603c4(&local_28,pcVar8 + 8,pcVar2,0);
  }
  if (local_28 == (long *)0x0) {
    local_38[0] = '\x01';
    local_30 = (long *)0x0;
  }
  else {
    plVar1 = local_28 + 5;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_38[0] = '\x01';
    local_30 = local_28;
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar7 = *plVar1;
        iVar5 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_00d60144;
    }
  }
  FUN_00d601a0(param_1,local_38);
  if ((local_38[0] == '\x01') && (local_30 != (long *)0x0)) {
    plVar1 = local_30 + 5;
    do {
      lVar7 = *plVar1;
      iVar5 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_00d60144:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return 1;
}


