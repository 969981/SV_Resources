/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b6ff7c; name: FUN_01b6ff7c
 */


void FUN_01b6ff7c(void *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 uVar9;
  ulong uVar10;
  long *local_868;
  long *local_860;
  undefined4 local_858;
  undefined4 uStack_854;
  
  uVar10 = param_2 & 0xffffffff;
  memset(param_1,0,0x84e);
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar6 = FUN_020f6c68();
  FUN_020f6f48(&local_860,lVar6,uVar10);
  if (local_860 != (long *)0x0) {
    memset(&local_858,0,0x814);
    FUN_01674c60(local_860,&local_858);
    memcpy(param_1,&local_858,0x814);
    plVar8 = local_860 + 5;
    do {
      lVar4 = *plVar8;
      iVar5 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_860 + 0x10))(local_860);
    }
    else if ((int)lVar4 == 0) goto LAB_01b701f0;
  }
  FUN_020f7008(&local_858,lVar6,uVar10);
  plVar8 = (long *)CONCAT44(uStack_854,local_858);
  uVar7 = FUN_0196c644(plVar8);
  FUN_011b8d00((long)param_1 + 0x82e,uVar7,0xb);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar4 = *plVar1;
      iVar5 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar4 == 0) goto LAB_01b701f0;
  }
  FUN_020f70d4(&local_858,lVar6,uVar10);
  plVar8 = (long *)CONCAT44(uStack_854,local_858);
  if (plVar8 != (long *)0x0) {
    uVar7 = FUN_0196c644(plVar8);
    FUN_011b8d00((long)param_1 + 0x814,uVar7,0xd);
    plVar1 = plVar8 + 5;
    do {
      lVar4 = *plVar1;
      iVar5 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar4 == 0) goto LAB_01b701f0;
  }
  if (((uint)param_2 & 0xff) < 5) {
    *(undefined1 *)((long)param_1 + 0x845) =
         *(undefined1 *)(*(long *)(lVar6 + 0x40) + (param_2 & 0xff) * 0x844 + 0x2c);
    local_858 = 7;
    plVar8 = (long *)FUN_00ea5b00(&local_860,*(undefined8 *)(lVar6 + 8),&local_858);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_019202d0(plVar8,*(long *)(lVar6 + 0x78) + (param_2 & 0xff) * 0x88);
    local_868 = plVar8;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x845) = 0;
    local_868 = (long *)0x0;
  }
  FUN_020f719c(param_1,&local_868);
  if (local_868 != (long *)0x0) {
    plVar8 = local_868 + 5;
    do {
      lVar4 = *plVar8;
      iVar5 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_868 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
LAB_01b701f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (((uint)param_2 & 0xff) < 5) {
    lVar4 = (param_2 & 0xff) * 0x10 + (param_2 & 0xff);
    *(undefined1 *)((long)param_1 + 0x846) =
         *(undefined1 *)(*(long *)(lVar6 + 0x78) + lVar4 * 8 + 0xe);
    uVar9 = *(undefined1 *)(*(long *)(lVar6 + 0x78) + lVar4 * 8 + 0xf);
  }
  else {
    uVar9 = 0;
    *(undefined1 *)((long)param_1 + 0x846) = 0;
  }
  *(undefined1 *)((long)param_1 + 0x844) = uVar9;
  return;
}


