/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a09860; name: FUN_02a09860
 */


void FUN_02a09860(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_450 [1024];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  puVar5 = PTR_DAT_047d4ce8;
  puVar4 = PTR_DAT_047d4ce0;
  plVar9 = *(long **)(lVar11 + 0x1c0);
  plVar1 = *(long **)(lVar11 + 0x1c8);
  for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
    lVar11 = *plVar9;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
      uVar10 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar10;
      __cxa_guard_release(puVar4);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar5) goto LAB_02a09938;
    }
  }
  lVar11 = 0;
LAB_02a09938:
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar12 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar12;
  if (lVar12 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar12 + 0x50);
  }
  plVar9 = (long *)FUN_00f124d8(auStack_450,uVar10,PTR_DAT_047dadc0);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
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
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (*(char *)((long)plVar9 + 0x54) == '\0') {
    uVar6 = *(undefined2 *)((long)plVar9 + 0x52);
  }
  else {
    uVar6 = FUN_011b8d00(plVar9[6],lVar11 + 0x50,(short)plVar9[10]);
    *(undefined2 *)((long)plVar9 + 0x52) = uVar6;
  }
  FUN_01e74ef0(auStack_450,0x400,plVar9[6],uVar6);
  FUN_01f7b518(param_1,auStack_450);
  plVar1 = plVar9 + 5;
  do {
    lVar11 = *plVar1;
    iVar7 = (int)lVar11 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


