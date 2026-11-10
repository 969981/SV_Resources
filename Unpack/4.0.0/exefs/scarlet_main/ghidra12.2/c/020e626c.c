/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e626c; name: FUN_020e626c
 */


void FUN_020e626c(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_d0 [128];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar14 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar14;
  puVar6 = PTR_DAT_047d8f00;
  puVar5 = PTR_DAT_047d8ef8;
  plVar12 = *(long **)(lVar14 + 0x1c0);
  plVar1 = *(long **)(lVar14 + 0x1c8);
  for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
    lVar14 = *plVar12;
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x28))((undefined8 *)(lVar14 + 0x28));
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      uVar11 = FUN_01b3fb0c();
      *(undefined8 *)puVar6 = uVar11;
      __cxa_guard_release(puVar5);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar6) goto LAB_020e6320;
    }
  }
  lVar14 = 0;
LAB_020e6320:
  plVar12 = (long *)FUN_00fee8fc(auStack_d0 + 0x88,*(undefined8 *)(lVar14 + 8),param_4);
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 5;
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
  uVar13 = FUN_01df32ec(*(undefined8 *)(lVar14 + 0xa10),param_3);
  if (((uVar13 & 1) == 0) ||
     (uVar13 = FUN_010f2930(*(undefined8 *)(lVar14 + 0xa10),param_3,param_4), (uVar13 & 1) == 0)) {
    *param_1 = (long)plVar12;
  }
  else {
    uVar8 = FUN_01dc71b0(*(undefined8 *)(lVar14 + 0xa10),param_3,param_4);
    uVar9 = FUN_01dc71d4(*(undefined8 *)(lVar14 + 0xa10),param_3,param_4);
    FUN_00eebacc(param_1,lVar14,uVar8,uVar9);
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 5;
      do {
        lVar14 = *plVar1;
        iVar7 = (int)lVar14 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      else if ((int)lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


