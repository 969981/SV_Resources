/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a084f8; name: FUN_02a084f8
 */


bool FUN_02a084f8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_1080 [2072];
  undefined1 auStack_868 [2072];
  
  puVar5 = PTR_DAT_047d8cc8;
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  puVar7 = PTR_DAT_047d8cd8;
  puVar6 = PTR_DAT_047d8cd0;
  lVar12 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar12;
  if (lVar12 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar12 + 0x50);
  }
  plVar9 = (long *)FUN_0167513c(auStack_868,uVar11);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 5;
    do {
      lVar12 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar12 == -1) goto LAB_02a086b8;
  }
  (**(code **)(*plVar9 + 0x78))(plVar9,*param_1);
  FUN_01e6d170(plVar9);
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  if (lVar12 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar12 + 0x50);
  }
  plVar10 = (long *)FUN_0167513c(auStack_868,uVar11);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar12 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar12 == -1) {
LAB_02a086b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  (**(code **)(*plVar10 + 0x78))(plVar10,*param_2);
  FUN_01e6d170(plVar10);
  memset(auStack_868,0,0x814);
  memset(auStack_1080,0,0x814);
  FUN_01674c7c(plVar9,auStack_868,1);
  FUN_01674c7c(plVar10,auStack_1080,1);
  iVar8 = memcmp(auStack_868,auStack_1080,0x814);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar12 = *plVar1;
      iVar4 = (int)lVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar12 == 0) goto LAB_02a08790;
  }
  plVar10 = plVar9 + 5;
  do {
    lVar12 = *plVar10;
    iVar4 = (int)lVar12 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *(int *)plVar10 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else if ((int)lVar12 == 0) {
LAB_02a08790:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return iVar8 == 0;
}


