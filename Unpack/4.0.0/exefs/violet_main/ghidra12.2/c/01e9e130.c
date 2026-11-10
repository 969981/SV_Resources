/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9e130; name: FUN_01e9e130
 */


/* WARNING: Control flow encountered bad instruction data */

uint FUN_01e9e130(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long *local_60;
  undefined1 auStack_58 [8];
  
  plVar11 = (long *)FUN_0167513c(auStack_58,*(undefined8 *)(param_1 + 8));
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar1 = plVar11 + 5;
  do {
    lVar14 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)lVar14 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((int)lVar14 == -1) {
LAB_01e9e36c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  (**(code **)(*plVar11 + 0x28))(plVar11,*param_2);
  do {
    lVar14 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)lVar14 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_60 = plVar11;
  if ((int)lVar14 == -1) goto LAB_01e9e36c;
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar14 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar14;
  puVar7 = PTR_DAT_047d4ce8;
  puVar6 = PTR_DAT_047d4ce0;
  plVar3 = *(long **)(lVar14 + 0x1c8);
  for (plVar2 = *(long **)(lVar14 + 0x1c0); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar14 = *plVar2;
    plVar12 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x28))((undefined8 *)(lVar14 + 0x28));
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
      uVar13 = FUN_01b3fb0c();
      *(undefined8 *)puVar7 = uVar13;
      __cxa_guard_release(puVar6);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12 == (long *)puVar7) goto LAB_01e9e240;
    }
  }
  lVar14 = 0;
LAB_01e9e240:
  uVar8 = FUN_01e9e4c8(lVar14);
  uVar9 = FUN_01e9e544(&local_60,uVar8,param_1 + 0x58);
  if (local_60 != (long *)0x0) {
    plVar2 = local_60 + 5;
    do {
      lVar14 = *plVar2;
      iVar10 = (int)lVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01e9e2b4;
  }
  do {
    lVar14 = *plVar1;
    iVar10 = (int)lVar14 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else if ((int)lVar14 == 0) {
LAB_01e9e2b4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return uVar9 & 1;
}


